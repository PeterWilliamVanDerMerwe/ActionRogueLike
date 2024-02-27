// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PGameplayInterface.h"
#include "PItemChest.generated.h"

class UStaticMeshComponent;

UCLASS()
class ACTIONROGUELIKE_API APItemChest : public AActor, public IPGameplayInterface
{
	GENERATED_BODY()

		void Interact_Implementation(APawn* InstigatorPawn);
	
public:	
	// Sets default values for this actor's properties
	UPROPERTY(EditDefaultsOnly)
		float TargetPitch;

	APItemChest();

protected:
	// Called when the game starts or when spawned
	UPROPERTY(EditDefaultsOnly)
	UStaticMeshComponent* BaseMesh;

	UPROPERTY(EditDefaultsOnly)
	UStaticMeshComponent* LidMesh;

	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
