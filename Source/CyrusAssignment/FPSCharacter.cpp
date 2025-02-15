// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSCharacter.h"
#include "GameFramework/PlayerController.h"
#include "Engine/World.h"

AFPSCharacter::AFPSCharacter()
{
    PrimaryActorTick.bCanEverTick = true;
}

void AFPSCharacter::BeginPlay()
{
    Super::BeginPlay();
}

void AFPSCharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AFPSCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);
    PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AFPSCharacter::Shoot);
}

void AFPSCharacter::Shoot()
{
    if (BulletClass)
    {
        FActorSpawnParameters SpawnParams;
        GetWorld()->SpawnActor<AActor>(BulletClass, GetActorLocation(), GetActorRotation(), SpawnParams);
    }
}

