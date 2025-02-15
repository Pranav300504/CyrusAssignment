// Fill out your copyright notice in the Description page of Project Settings.


#include "JSONManager.h"
#include "HttpModule.h"
#include "Json.h"

void UJSONManager::FetchJSONData()
{
    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
    Request->OnProcessRequestComplete().BindUObject(this, &UJSONManager::OnResponseReceived);
    Request->SetURL("https://raw.githubusercontent.com/CyrusCHAU/Varadise-Technical-Test/main/data.json");
    Request->SetVerb("GET");
    Request->ProcessRequest();
}

void UJSONManager::OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
    if (bWasSuccessful && Response.IsValid())
    {
        FString ResponseString = Response->GetContentAsString();
    }
}
