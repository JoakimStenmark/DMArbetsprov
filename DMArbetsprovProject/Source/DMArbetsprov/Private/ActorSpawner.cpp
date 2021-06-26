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

	//Limits how many actors this Spawner will have active at the same time.
	ActorAmountLimit = 500;
	ActorAmount = 0;

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
			AActor* SpawnedActor = World->SpawnActor<AActor>(GetRandomActorFromList(), ResultLocation.Location, RandomRotation);

			ActorAmount++;
			SpawnedActors.Add(SpawnedActor);

			//if we are spawning over time and reach our limit then stop.
			if (SpawnedActors.Num() >= ActorAmountLimit)
			{
				StopSpawning();

			}
			
			if (ActorAmount >= ActorAmountLimit)
			{
				//StopSpawning();
			}


		}
	}
	
}

void AActorSpawner::StartSpawning()
{
	GetWorldTimerManager().SetTimer(MemberTimerHandle, this, &AActorSpawner::SpawnActorOnRandomNavMeshPoint, TimeBetweenSpawns, true, 1.0f);
	//UE_LOG(LogClass, Log, TEXT("%s has Started Spawning"), *GetName());

}

void AActorSpawner::StopSpawning()
{
	GetWorldTimerManager().ClearTimer(MemberTimerHandle);
	//FString L = GetName() + " Has Stopped Spawning";
	//UE_LOG(LogClass, Log, TEXT("{GetName()}, Has Stopped"));


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

