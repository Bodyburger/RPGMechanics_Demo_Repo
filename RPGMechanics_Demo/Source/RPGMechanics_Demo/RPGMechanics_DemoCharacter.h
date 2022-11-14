// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "RPGMechanics_DemoCharacter.generated.h"

UCLASS(config = Game)
class ARPGMechanics_DemoCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ARPGMechanics_DemoCharacter();

	void MoveOnTick();

	void MoveInputPressed(FVector TargetLocation);

	void MoveInputReleased(FVector TargetLocation);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	float ShortPressThreshold = 0.3f;

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface

	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(VisibleAnywhere)
	FVector WorldDirection;

	UPROPERTY(VisibleAnywhere)
	bool bMoveInputPressed = false;

	UPROPERTY(VisibleAnywhere)
	bool bMoveInputReleased = false;

	UPROPERTY(VisibleAnywhere)
	float PressFollowTime;
};

