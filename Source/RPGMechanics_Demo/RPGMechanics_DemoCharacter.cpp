// Copyright Epic Games, Inc. All Rights Reserved.

#include "RPGMechanics_DemoCharacter.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "AIController.h"
#include "GameFramework/SpringArmComponent.h"
#include "Blueprint/AIBlueprintHelperLibrary.h" 
#include "NiagaraFunctionLibrary.h"
#include "NiagaraSystem.h"

ARPGMechanics_DemoCharacter::ARPGMechanics_DemoCharacter()
{
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Rotate character to moving direction	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 640.0f, 0.0f); // ...at this rotation rate

	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;
}

void ARPGMechanics_DemoCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void ARPGMechanics_DemoCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bMoveInputPressed)
	{
		PressFollowTime += DeltaTime;
		// Constant movement while input is being pressed
		AddMovementInput(WorldDirection, 1.f, false);
	}
	else
	{
		PressFollowTime = 0.f;
	}
}

// Applies information sent by ARPGController to DemoCharacter's variables.
void ARPGMechanics_DemoCharacter::MoveInputPressed(FVector TargetLocation)
{
	WorldDirection = (TargetLocation - GetActorLocation()).GetSafeNormal();
	if (!bMoveInputPressed) { bMoveInputPressed = true; }
}

void ARPGMechanics_DemoCharacter::MoveInputReleased(FVector TargetLocation)
{
	bMoveInputPressed = false;
	if (PressFollowTime <= ShortPressThreshold)
	{
		if (Controller != nullptr)
		{
			FVector SimpleMoveGoal = TargetLocation;
			
			UNiagaraFunctionLibrary::SpawnSystemAtLocation(this,
				FXMoveCommand, SimpleMoveGoal,
				FRotator::ZeroRotator,
				FVector(1.f, 1.f, 1.f), true, true, ENCPoolMethod::None, true);
			UAIBlueprintHelperLibrary::SimpleMoveToLocation(Controller, SimpleMoveGoal);
		}
	}
}
