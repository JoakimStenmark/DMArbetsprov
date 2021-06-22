// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActorSpawner.generated.h"

UCLASS()
class DMARBETSPROV_API AActorSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AActorSpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(EditAnywhere, Category = SpawnSettings)
	class USphereComponent* VisibleSpawnRadius;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = SpawnSettings)
	TSubclassOf<AActor> ActorToSpawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SpawnSettings)
		int ActorAmountLimit;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = SpawnSettings)
		int ActorAmount;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = SpawnSettings)
		TArray<AActor*> ActorList;
	
	FTimerHandle MemberTimerHandle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SpawnSettings)
	float TimeBetweenSpawns;

public:

	UFUNCTION(BlueprintCallable, Category = Spawn)
	void SpawnActorOnRandomNavMeshPoint();

	UFUNCTION(BlueprintCallable, Category = Spawn)
		void StartSpawning();

	UFUNCTION(BlueprintCallable, Category = Spawn)
		void StopSpawning();
	
};
