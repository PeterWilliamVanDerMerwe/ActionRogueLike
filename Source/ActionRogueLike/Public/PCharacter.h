// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;
class UPInteractionComponent;
class UAnimMontage;

UCLASS()
class ACTIONROGUELIKE_API APCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly);
	USpringArmComponent* SpringArmComp;

	UPROPERTY(EditDefaultsOnly);
	UCameraComponent* CameraComp;

	UPROPERTY(EditDefaultsOnly);
	UPInteractionComponent* InteractionComp;
	
	FTimerHandle TimerHandle_PrimaryAttack;

	void PrimaryAttack_TimeElapsed();

	void MoveForward(float Value);

	void MoveRight(float Value);

	void Jump();

	void PrimaryAttack();

	void PrimaryInteract();

	UPROPERTY(EditDefaultsOnly, Category = "Attack")
	TSubclassOf<AActor> projectileClass;
	 
	UPROPERTY(EditDefaultsOnly, Category = "Attack")
	UAnimMontage* AttackAnim;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
