// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorSpawner.h"
#include "Engine/World.h"
#include "NavigationSystem.h"
#include "TimerManager.h"

// Sets default values
AActorSpawner::AActorSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TimeBetweenSpawns = 1.f;

	//Limits how many actors this Spawner will have active at the same time.
	ActorAmountLimit = 500;
	ActorAmount = 0;


}

// Called when the game starts or when spawned
void AActorSpawner::BeginPlay()
{
	Super::BeginPlay();
	
	StartSpawning();

}	

// Called every frame
void AActorSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AActorSpawner::SpawnActorOnRandomNavMeshPoint()
{
	UWorld* World = GetWorld();
	
	if (World)
	{
		UNavigationSystemV1* NavSystem = UNavigationSystemV1::GetCurrent(World);
		if (NavSystem)
		{
			FNavLocation ResultLocation;
			NavSystem->GetRandomPoint(ResultLocation);
			
			FRotator RandomRotation = FRotator(0.f, FMath::RandRange(0.f, 359.f), 0.f);
			FActorSpawnParameters SpawnParameters = FActorSpawnParameters();

			AActor* SpawnedActor = World->SpawnActor<AActor>(ActorToSpawn, ResultLocation.Location, RandomRotation);

			ActorAmount++;

			if (ActorAmount >= ActorAmountLimit)
			{
				StopSpawning();
			}

			
		}
	}
	

}

void AActorSpawner::StartSpawning()
{
	GetWorldTimerManager().SetTimer(MemberTimerHandle, this, &AActorSpawner::SpawnActorOnRandomNavMeshPoint, TimeBetweenSpawns, true, 1.0f);
	//UE_LOG(LogClass, Log, TEXT("%s", GetName(), " Has Started Spawning"));
	UE_LOG(LogClass, Log, TEXT("{GetName()}, Has Started"));

}

void AActorSpawner::StopSpawning()
{
	GetWorldTimerManager().ClearTimer(MemberTimerHandle);
	//FString L = GetName() + " Has Stopped Spawning";
	UE_LOG(LogClass, Log, TEXT("{GetName()}, Has Stopped"));


}

