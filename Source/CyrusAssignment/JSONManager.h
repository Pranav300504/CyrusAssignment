// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "HttpModule.h"
#include "Interfaces/IHttpRequest.h"
#include "Interfaces/IHttpResponse.h"
#include "JSONManager.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnJSONDataReceived, const TArray<FString>&, ParsedData);

UCLASS()
class CYRUSASSIGNMENT_API UJSONManager : public UObject
{
    GENERATED_BODY()

public:
    void FetchJSONData();

    UPROPERTY(BlueprintAssignable, Category = "Events")
    FOnJSONDataReceived OnJSONDataReceived;

private:
    void OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
};
