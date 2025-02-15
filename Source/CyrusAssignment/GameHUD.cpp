// Fill out your copyright notice in the Description page of Project Settings.


#include "GameHUD.h"
#include "Components/TextBlock.h"

void UGameHUD::UpdateScore(int32 NewScore)
{
    if (ScoreText)
    {
        ScoreText->SetText(FText::AsNumber(NewScore));
    }
}

