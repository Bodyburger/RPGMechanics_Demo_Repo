// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "RPGCameraPawnBase.generated.h"

UCLASS()
class RPGMECHANICS_DEMO_API ARPGCameraPawnBase : public APawn
{
	GENERATED_BODY()

public:
	ARPGCameraPawnBase();

	virtual void Tick(float DeltaTime) override;

protected:
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	class UCapsuleComponent* CapsuleComp;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	class UCameraComponent* CameraComp;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	class USpringArmComponent* SpringArmComp;

private:
	UPROPERTY(EditAnywhere)
	float CameraRotation = -70.f;

	void MoveForward(float AxisValue);
	
	void MoveRight(float AxisValue);
};
