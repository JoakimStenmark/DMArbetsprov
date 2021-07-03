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

	UPROPERTY(VisibleAnywhere, Category = SpawnSettings)
	class USphereComponent* VisibleSpawnRadius;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = SpawnSettings)
	TSubclassOf<AActor> ActorToSpawn;

	//Actors that this instance can spawn.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = SpawnSettings)
		TArray<TSubclassOf<AActor>> ActorsToSpawn;

	//Limits how many actors this Spawner will have active at the same time.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SpawnSettings)
		int ActorAmountLimit;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = SpawnSettings)
	TArray<AActor*> SpawnedActors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SpawnSettings)
	float TimeBetweenSpawns;

public:

	//Used by SpawnActorOnRandomNavMeshPoint.
	UFUNCTION(BlueprintCallable, Category = Spawn)
		TSubclassOf<AActor> GetRandomActorFromList();

	//Main spawning function.
	UFUNCTION(BlueprintCallable, Category = Spawn)
		AActor* SpawnActorOnRandomNavMeshPoint();

	//Call this when the actor in question dies to allow new spawns to happen
	UFUNCTION(BlueprintCallable, Category = Spawn)
		void RemoveActorFromSpawnedActorsList(AActor* ActorReference);

};
