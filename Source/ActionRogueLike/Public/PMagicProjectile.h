// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PMagicProjectile.generated.h"

class USphereComponent;
class UProjectileMovementComponent;
class UParticleSystemComponent;

UCLASS()
class ACTIONROGUELIKE_API APMagicProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APMagicProjectile();

protected:
	// Called when the game starts or when spawned
	UPROPERTY(VisibleAnywhere)
		USphereComponent* SphereComp;

	UPROPERTY(VisibleAnywhere)
		UProjectileMovementComponent* MovementComp;

	UPROPERTY(VisibleAnywhere)
		UParticleSystemComponent* EffectComp;

	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
