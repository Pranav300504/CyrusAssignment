// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GameHUD.generated.h"

UCLASS()
class CYRUSASSIGNMENT_API UGameHUD : public UUserWidget
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "UI")
    void UpdateScore(int32 NewScore);

private:
    UPROPERTY(meta = (BindWidget))
    class UTextBlock* ScoreText;
};
