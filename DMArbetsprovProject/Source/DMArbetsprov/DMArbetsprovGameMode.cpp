// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "DMArbetsprovGameMode.h"
#include "DMArbetsprovHUD.h"
#include "DMArbetsprovCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADMArbetsprovGameMode::ADMArbetsprovGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	
	InitialLoseCondition = 10;
	CurrentLoseCondition = InitialLoseCondition;
	
}

void ADMArbetsprovGameMode::BeginPlay()
{
	
}

