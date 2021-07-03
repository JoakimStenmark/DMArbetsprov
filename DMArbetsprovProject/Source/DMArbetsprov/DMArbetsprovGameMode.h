// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "DMArbetsprovGameMode.generated.h"

UCLASS(minimalapi)
class ADMArbetsprovGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ADMArbetsprovGameMode();

protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "GamePlayStatistics")
		int EnemiesDestroyed;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "GamePlayStatistics")
		int PickupsPickedUp;

	//When this is zero or less you lose the game
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Game")
		float CurrentLoseCondition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game")
		float InitialLoseCondition;

	virtual void BeginPlay();

};



