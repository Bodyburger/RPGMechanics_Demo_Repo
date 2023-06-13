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
	ACameraCharacter();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	class UArrowComponent* CameraRShoulderLocation;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	class UArrowComponent* CameraOriginLocation;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	class UCameraComponent* CameraComp;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	class USpringArmComponent* SpringArmComp;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	void MoveForward(float AxisValue);

	void MoveRight(float AxisValue);

	UPROPERTY(VisibleAnywhere)
	float MouseX;

	UPROPERTY(VisibleAnywhere)
	float MouseY;
};
