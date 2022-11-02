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

	InputComponent->BindAction("SwitchCamera", IE_Pressed, this, &ARPGController::SetCameraShoulderLocation);
	InputComponent->BindAction("SwitchCamera", IE_Released, this, &ARPGController::SetCameraOriginLocation);
	InputComponent->BindAction("MouseSelect", IE_Pressed, this, &ARPGController::SelectCharacterWithMouse);
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
	FVector HitImpactVector;
	APlayerController::GetHitResultUnderCursor(ECC_Visibility, true, HitResult);
	
	HitImpactVector = HitResult.ImpactPoint;
	UE_LOG(LogTemp, Display, TEXT("HitResult.ImpactPoint: X: %f Y: %f Z: %f"), HitResult.ImpactPoint.X, HitResult.ImpactPoint.Y, HitResult.ImpactPoint.Z);
	DrawDebugSphere(GetWorld(), HitResult.ImpactPoint, 50.f, 12, FColor::Red);

	if (HitResult.HasValidHitObjectHandle())
	{
		UE_LOG(LogTemp, Display, TEXT("HitResult.GetActor()->GetName(): %s"), *HitResult.GetActor()->GetActorNameOrLabel());
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("HitResult.HasValidHitObjectHandle() returned false."));
	}
}