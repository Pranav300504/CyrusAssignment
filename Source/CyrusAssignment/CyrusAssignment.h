// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once
#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FCyrusAssignmentModule : public FDefaultGameModuleImpl
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
};

// Implement the module
IMPLEMENT_PRIMARY_GAME_MODULE(FCyrusAssignmentModule, CyrusAssignment, "CyrusAssignment");