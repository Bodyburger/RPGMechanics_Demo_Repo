// Fill out your copyright notice in the Description page of Project Settings.

#include "RPGController.h"
#include "RPGMechanics_DemoCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "DrawDebugHelpers.h"
#include "RPGCameraPawnBase.h"
#include "Kismet/GameplayStatics.h"

ARPGController::ARPGController()
{
	this->bShowMouseCursor = true;
}

void ARPGController::BeginPlay()
{
	Super::BeginPlay();

	CameraPawn = Cast<ARPGCameraPawnBase>(GetPawn());

	GetWorld()->GetGameViewport()->SetMouseLockMode(EMouseLockMode::LockAlways);
}

void ARPGController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction("MouseSelect", IE_Pressed, this, &ARPGController::SelectObjectWithMouse);
	InputComponent->BindAction("OrderMovePressed", IE_Pressed, this, &ARPGController::OrderMoveInputPressed);
	InputComponent->BindAction("OrderMoveReleased", IE_Released, this, &ARPGController::OrderMoveInputReleased);
}

void ARPGController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);

	if (bOrderInputIsPressed)
	{
		OrderMoveWhilePressed();
	}
}

void ARPGController::OrderMoveInputPressed()
{
	for (ARPGMechanics_DemoCharacter* SelectedCharacter : SelectedCharacters)
	{
		if (SelectedCharacter->GetController() != nullptr)
		{
			SelectedCharacter->GetController()->StopMovement();
		}
	}
	bOrderInputIsPressed = true;
}

void ARPGController::OrderMoveInputReleased()
{
	bOrderInputIsPressed = false;
	OrderMoveOnRelease();
}

void ARPGController::SelectObjectWithMouse()
{
	FHitResult HitResult;
	FVector HitImpactVector;
	APlayerController::GetHitResultUnderCursor(ECC_Visibility, true, HitResult);

	HitImpactVector = HitResult.ImpactPoint;
	DrawDebugSphere(GetWorld(), HitResult.ImpactPoint, 6, 6, FColor::Blue, false, 5);

	if (HitResult.HasValidHitObjectHandle())
	{
		AddCharacterToArray(HitResult);
	}
	else
	{
		if (!SelectedCharacters.IsEmpty())
		{
			UE_LOG(LogTemp, Warning,
				TEXT("HitResult.HasValidHitObjectHandle() returned false, SelectedCharacters array will be emptied."));
			SelectedCharacters.Empty();
		}
	}
}

void ARPGController::OrderMoveWhilePressed()
{
	TArray<ARPGMechanics_DemoCharacter*> CharacterArray = SelectedCharacters;

	if (CharacterArray.IsEmpty())
	{
		UE_LOG(LogTemp, Warning, TEXT("There are no ARPGMechanics_DemoCharacter to move in CharacterArray"));
		return;
	}

	FHitResult HitResult;
	FVector HitLocation = FVector::ZeroVector;
	APlayerController::GetHitResultUnderCursor(ECC_GameTraceChannel1, true, HitResult);
	HitLocation = HitResult.Location;

	// Check through every element in CharacterArary and call their public MoveInputPressed()
	for (ARPGMechanics_DemoCharacter* OrderedCharacter : CharacterArray)
	{
		UCharacterMovementComponent* MoveComp = OrderedCharacter->GetCharacterMovement();
		if (OrderedCharacter != nullptr && MoveComp != nullptr)
		{
			OrderedCharacter->MoveInputPressed(HitLocation);
		}
		else { UE_LOG(LogTemp, Warning, TEXT("MoveComp or OrderedCharacter is nullptr.")); }
	}
}

void ARPGController::OrderMoveOnRelease()
{
	UE_LOG(LogTemp, Display, TEXT("OrderMoveOnRelease() called."));
	
	TArray<ARPGMechanics_DemoCharacter*> CharacterArray = SelectedCharacters;

	if (CharacterArray.IsEmpty())
	{
		UE_LOG(LogTemp, Warning, TEXT("There are no ARPGMechanics_DemoCharacter to move in CharacterArray"));
		return;
	}

	FHitResult HitResult;
	FVector HitLocation = FVector::ZeroVector;
	APlayerController::GetHitResultUnderCursor(ECC_GameTraceChannel1, true, HitResult);
	HitLocation = HitResult.Location;

	DrawDebugSphere(GetWorld(), HitResult.ImpactPoint, 10, 12, FColor::Red, false, 5);

	// Check through every element in CharacterArary and call their public MoveInputReleased()
	for (ARPGMechanics_DemoCharacter* OrderedCharacter : CharacterArray)
	{
		UCharacterMovementComponent* MoveComp = OrderedCharacter->GetCharacterMovement();
		if (OrderedCharacter != nullptr && MoveComp != nullptr)
		{
			OrderedCharacter->MoveInputReleased(HitLocation);
		}
		else { UE_LOG(LogTemp, Warning, TEXT("MoveComp or OrderedCharacter is nullptr.")); }
	}
}

void ARPGController::AddCharacterToArray(FHitResult& HitResult)
{
	ARPGMechanics_DemoCharacter* AddedCharacter = Cast<ARPGMechanics_DemoCharacter>(HitResult.GetActor());
	if (AddedCharacter)
	{
		SelectedCharacters.AddUnique(AddedCharacter);

		for (ARPGMechanics_DemoCharacter* CharacterActor : SelectedCharacters)
		{
			FString CharacterName = CharacterActor->GetActorNameOrLabel();
			UE_LOG(LogTemp, Display, TEXT("SelectedCharacters: %s"), *CharacterName);
		}
	}
	else
	{
		if (!SelectedCharacters.IsEmpty())
		{
			UE_LOG(LogTemp, Warning,
				TEXT("AddedCharacter could not Cast into 'ARPGMechanics_DemoCharacter'. SelectedCharacters array will be emptied."));
			SelectedCharacters.Empty();
		}
	}
}