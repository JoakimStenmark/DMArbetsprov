// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorSpawner.h"
#include "Engine/World.h"
#include "NavigationSystem.h"
#include "TimerManager.h"
#include "Components/SphereComponent.h"

// Sets default values
AActorSpawner::AActorSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TimeBetweenSpawns = 1.f;
	
	ActorAmountLimit = 500;

	VisibleSpawnRadius = CreateDefaultSubobject<USphereComponent>(TEXT("VisibleSpawnRadius"));
	VisibleSpawnRadius->InitSphereRadius(50.f);
	VisibleSpawnRadius->BodyInstance.SetCollisionProfileName("NoCollision");
	


}

// Called when the game starts or when spawned
void AActorSpawner::BeginPlay()
{
	Super::BeginPlay();

}	

// Called every frame
void AActorSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

AActor* AActorSpawner::SpawnActorOnRandomNavMeshPoint()
{
	//ignores spawning if limit reached. Easier Solution than starting and stopping timers.
	if (SpawnedActors.Num() >= ActorAmountLimit)
	{
		return nullptr;

	}

	UWorld* World = GetWorld();
	
	if (!World)
	{
		return nullptr;
	}

	UNavigationSystemV1* NavSystem = UNavigationSystemV1::GetCurrent(World);
	if (!NavSystem)
	{
		return nullptr;
	}

	FNavLocation ResultLocation;
	NavSystem->GetRandomPoint(ResultLocation);
	FRotator RandomRotation = FRotator(0.f, FMath::RandRange(0.f, 359.f), 0.f);
	AActor* SpawnedActor = World->SpawnActor<AActor>(GetRandomActorFromList(), ResultLocation.Location, RandomRotation);

	//Try again if spawn failed
	if (SpawnedActor == nullptr)
	{
		NavSystem->GetRandomPoint(ResultLocation);
		SpawnedActor = World->SpawnActor<AActor>(GetRandomActorFromList(), ResultLocation.Location, RandomRotation);
	}

	if (SpawnedActor != nullptr)
	{
		SpawnedActors.Add(SpawnedActor);

	}

	return SpawnedActor;

}

TSubclassOf<AActor> AActorSpawner::GetRandomActorFromList()
{
	
	if (ActorsToSpawn.Num() > 0)
	{
		TSubclassOf<AActor> ChosenActor = ActorsToSpawn[FMath::RandRange(0, ActorsToSpawn.Num() - 1)];

		return ChosenActor;
	}

	return NULL;
}

void AActorSpawner::RemoveActorFromSpawnedActorsList(AActor* ActorReference)
{
	
	SpawnedActors.RemoveSingleSwap(ActorReference, true);

}

