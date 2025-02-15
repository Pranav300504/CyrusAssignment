// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BoxActor.generated.h"

UCLASS()
class CYRUSASSIGNMENT_API ABoxActor : public AActor
{
    GENERATED_BODY()

public:
    ABoxActor();
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;
    void TakeDamage();

private:
    UPROPERTY(EditAnywhere, Category = "Box Properties")
    int32 Health;

    UPROPERTY(EditAnywhere, Category = "Box Properties")
    int32 ScoreValue;
};
