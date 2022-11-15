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


//////////////////////////////////////////////////////////////////////////
// ARPGMechanics_DemoCharacter

ARPGMechanics_DemoCharacter::ARPGMechanics_DemoCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Rotate character to moving direction	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 640.0f, 0.0f); // ...at this rotation rate

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)
}

//////////////////////////////////////////////////////////////////////////
// Input

void ARPGMechanics_DemoCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void ARPGMechanics_DemoCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bMoveInputPressed)
	{
		PressFollowTime += DeltaTime;
		MoveOnTick();
	}
	else
	{
		PressFollowTime = 0.f;
	}
}

void ARPGMechanics_DemoCharacter::MoveOnTick()
{
	// TODO: Constant movement while input is being pressed
	AddMovementInput(WorldDirection, 1.f, false);
}

// Applies information sent by ARPGController to DemoCharacter's variables.
void ARPGMechanics_DemoCharacter::MoveInputPressed(FVector TargetLocation)
{
	WorldDirection = (TargetLocation - GetActorLocation()).GetSafeNormal();
	if (!bMoveInputPressed) { bMoveInputPressed = true; }
}

void ARPGMechanics_DemoCharacter::MoveInputReleased(FVector TargetLocation)
{
	AController* CharacterController = Cast<AController>(GetController());
	
	if (CharacterController != nullptr)
	{
		if (PressFollowTime <= ShortPressThreshold)
		{
			CharacterController->StopMovement();
			bMoveInputPressed = false;
			FVector SimpleMoveGoal = TargetLocation;
			UNiagaraFunctionLibrary::SpawnSystemAtLocation(this,
				FXMoveCommand, SimpleMoveGoal,
				FRotator::ZeroRotator,
				FVector(1.f, 1.f, 1.f), true, true, ENCPoolMethod::None, true);
			UAIBlueprintHelperLibrary::SimpleMoveToLocation(CharacterController, SimpleMoveGoal);
		}
	}
}
