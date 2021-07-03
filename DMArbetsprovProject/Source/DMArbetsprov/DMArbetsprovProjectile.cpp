// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "DMArbetsprovProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Components/SphereComponent.h"

ADMArbetsprovProjectile::ADMArbetsprovProjectile() 
{
	// Use a sphere as a simple collision representation
	CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	CollisionComp->InitSphereRadius(5.0f);
	CollisionComp->BodyInstance.SetCollisionProfileName("Projectile");
	CollisionComp->OnComponentHit.AddDynamic(this, &ADMArbetsprovProjectile::OnHit);		// set up a notification for when this component hits something blocking

	// Players can't walk on it
	CollisionComp->SetWalkableSlopeOverride(FWalkableSlopeOverride(WalkableSlope_Unwalkable, 0.f));
	CollisionComp->CanCharacterStepUpOn = ECB_No;

	// Set as root component
	RootComponent = CollisionComp;

	// Use a ProjectileMovementComponent to govern this projectile's movement
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp"));
	ProjectileMovement->UpdatedComponent = CollisionComp;
	ProjectileMovement->InitialSpeed = 3000.f;
	ProjectileMovement->MaxSpeed = 3000.f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = true;

	// Die after 3 seconds by default
	InitialLifeSpan = 3.0f;

	//Set Default Damage Stats
	BaseDamage = 100;
	ExplosiveRadius = 250.f;

}

void ADMArbetsprovProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	
	if ((OtherActor != NULL) && (OtherActor != this) && (OtherComp != NULL))
	{
		FVector const& HitFromDirection = Hit.ImpactPoint;
		AController* EventInstigator = GetWorld()->GetFirstPlayerController();
		
		if (bIsExplosive)
		{
			//float MinDamage = BaseDamage * 0.25;
			
			//UGameplayStatics::ApplyRadialDamageWithFalloff(this, BaseDamage, MinDamage, GetActorLocation(), ExplosiveRadius, ExplosiveRadius * 2, 1.f, DamageType, TArray<AActor*>(), EventInstigator);
			//UGameplayStatics::ApplyRadialDamage(this, BaseDamage, CollisionComp->GetComponentLocation(), ExplosiveRadius, DamageType, TArray<AActor*>(), EventInstigator);

		}

		Destroy();

	
	}
}