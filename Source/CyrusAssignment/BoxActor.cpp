// Fill out your copyright notice in the Description page of Project Settings.


#include "BoxActor.h"
#include "Engine/Engine.h"

ABoxActor::ABoxActor()
{
    PrimaryActorTick.bCanEverTick = true;
    Health = 3;
    ScoreValue = 10;
}

void ABoxActor::BeginPlay()
{
    Super::BeginPlay();
}

void ABoxActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void ABoxActor::TakeDamage()
{
    Health--;
    if (Health <= 0)
    {
        Destroy();
    }
}

