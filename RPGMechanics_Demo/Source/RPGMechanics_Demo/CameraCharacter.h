// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CameraCharacter.generated.h"

UCLASS()
class RPGMECHANICS_DEMO_API ACameraCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACameraCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Sets the CameraComp's relative location to CameraRShoulderLocation arrow component.
	void SetCameraShoulderLocation();

	// Sets the CameraComp's relative location to CameraOriginLocation arrow component.
	void SetCameraOriginLocation();

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	class UArrowComponent* CameraRShoulderLocation;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	class UArrowComponent* CameraOriginLocation;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	class UCameraComponent* CameraComp;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	class USpringArmComponent* SpringArmComp;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	void MoveForward(float AxisValue);

	void MoveRight(float AxisValue);

	UPROPERTY(VisibleAnywhere)
	float MouseX;

	UPROPERTY(VisibleAnywhere)
	float MouseY;
};
