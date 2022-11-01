// Fill out your copyright notice in the Description page of Project Settings.


#include "RPGController.h"
#include "Blueprint/UserWidget.h"

ARPGController::ARPGController()
{
    this->bShowMouseCursor = true;
}

void ARPGController::BeginPlay()
{
    Super::BeginPlay();

    // HUD = CreateWidget(this, HUDClass);
    // if (HUD != nullptr)
    // {
    //     HUD->AddToViewport();
    // }
}

// Called to bind functionality to input
void ARPGController::SetupInputComponent()
{
	Super::SetupInputComponent();

    // UPDATE THESE !! 
	// PlayerInputComponent->BindAction("SwitchCamera", IE_Pressed, this, &ACameraCharacter::SetCameraShoulderLocation);
	// PlayerInputComponent->BindAction("SwitchCamera", IE_Released, this, &ACameraCharacter::SetCameraOriginLocation);
	// PlayerInputComponent->BindAction("MouseSelect", IE_Pressed, this, &ACameraCharacter::SelectCharacterWithMouse);
}
void ARPGController::SetCameraShoulderLocation()
{
	UE_LOG(LogTemp, Warning, TEXT("SetCameraShoulderLocation \"Commented out\". Causes a bug."));
	// CameraComp->SetRelativeLocation(CameraRShoulderLocation->GetRelativeLocation());
}

void ARPGController::SetCameraOriginLocation()
{
	UE_LOG(LogTemp, Warning, TEXT("SetCameraOriginLocation \"Commented out\". Causes a bug."));
	// CameraComp->SetRelativeLocation(CameraOriginLocation->GetRelativeLocation());
}

void ARPGController::SelectCharacterWithMouse()
{
	FHitResult HitResult;
	this->GetHitResultUnderCursor(ECC_Visibility, true, HitResult);
	// TODO:
    // Find out if a character was hit

}