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

// Called to bind functionality to input
void ARPGController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction("MouseSelect", IE_Pressed, this, &ARPGController::SelectObjectWithMouse);
	InputComponent->BindAction("OrderMovePressed", IE_Pressed, this, &ARPGController::OrderMoveInputPressed);
	InputComponent->BindAction("OrderMoveReleased", IE_Released, this, &ARPGController::OrderMoveInputReleased);
}

// void ARPGController::PlayerTick(float DeltaTime)
// {
// 	Super::PlayerTick(DeltaTime);

// 	if (bOrderInputIsPressed)
// 	{
// 		OrderMove();
// 	}
// 	else
// }

void ARPGController::OrderMoveInputPressed()
{
	bOrderInputIsPressed = true;
	OrderMoveWhilePressed();
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
	UE_LOG(LogTemp, Display, TEXT("HitResult.ImpactPoint: X: %f Y: %f Z: %f"),
		HitResult.ImpactPoint.X,
		HitResult.ImpactPoint.Y,
		HitResult.ImpactPoint.Z);
	DrawDebugSphere(GetWorld(), HitResult.ImpactPoint, 10, 12, FColor::Blue, false, 5);

	if (HitResult.HasValidHitObjectHandle())
	{
		UE_LOG(LogTemp, Display, TEXT("HitResult.GetActor()->GetName(): %s"),
			*HitResult.GetActor()->GetActorNameOrLabel());
		AddCharacterToArray(HitResult);
	}
	else
	{
		EmptyCharacterArray();
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
	APlayerController::GetHitResultUnderCursor(ECC_Visibility, true, HitResult);
	HitLocation = HitResult.Location;

	DrawDebugSphere(GetWorld(), HitResult.ImpactPoint, 10, 12, FColor::Red, false, 5);

	// Check through every element in CharacterArary and call their public MoveOnTick()
	for (ARPGMechanics_DemoCharacter* OrderedCharacter : CharacterArray)
	{
		UCharacterMovementComponent* MoveComp = OrderedCharacter->GetCharacterMovement();
		if (OrderedCharacter != nullptr && MoveComp != nullptr)
		{
			UE_LOG(LogTemp, Warning, TEXT("Moving '%s' in CharacterArray."),
				*OrderedCharacter->GetActorNameOrLabel());

			OrderedCharacter->MoveInputPressed(HitLocation);

			UE_LOG(LogTemp, Warning, TEXT("'%s's' MoveOnTick() was called."),
				*OrderedCharacter->GetActorNameOrLabel());
		}
		else { UE_LOG(LogTemp, Warning, TEXT("MoveComp or OrderedCharacter is nullptr.")); }
	}
}

void ARPGController::OrderMoveOnRelease()
{
	TArray<ARPGMechanics_DemoCharacter*> CharacterArray = SelectedCharacters;

	if (CharacterArray.IsEmpty())
	{
		UE_LOG(LogTemp, Warning, TEXT("There are no ARPGMechanics_DemoCharacter to move in CharacterArray"));
		return;
	}

	FHitResult HitResult;
	FVector HitLocation = FVector::ZeroVector;
	APlayerController::GetHitResultUnderCursor(ECC_Visibility, true, HitResult);
	HitLocation = HitResult.Location;

	DrawDebugSphere(GetWorld(), HitResult.ImpactPoint, 10, 12, FColor::Red, false, 5);

	// Check through every element in CharacterArary and call their public MoveOnTick()
	for (ARPGMechanics_DemoCharacter* OrderedCharacter : CharacterArray)
	{
		UCharacterMovementComponent* MoveComp = OrderedCharacter->GetCharacterMovement();
		if (OrderedCharacter != nullptr && MoveComp != nullptr)
		{
			UE_LOG(LogTemp, Warning, TEXT("Moving '%s' in CharacterArray."),
				*OrderedCharacter->GetActorNameOrLabel());

			OrderedCharacter->MoveInputReleased(HitLocation);

			UE_LOG(LogTemp, Warning, TEXT("'%s's' MoveOnTick() was called."),
				*OrderedCharacter->GetActorNameOrLabel());
		}
		else { UE_LOG(LogTemp, Warning, TEXT("MoveComp or OrderedCharacter is nullptr.")); }
	}
}

void ARPGController::AddCharacterToArray(FHitResult& HitResult)
{
	ARPGMechanics_DemoCharacter* AddedCharacter = Cast<ARPGMechanics_DemoCharacter>(HitResult.GetActor());
	if (AddedCharacter)
	{
		SelectedCharacters.Add(AddedCharacter);

		for (ARPGMechanics_DemoCharacter* CharacterActor : SelectedCharacters)
		{
			FString CharacterName = CharacterActor->GetActorNameOrLabel();
			UE_LOG(LogTemp, Display, TEXT("SelectedCharacters: %s"), *CharacterName);
		}
	}
	else { EmptyCharacterArray(); }
}

void ARPGController::EmptyCharacterArray()
{
	UE_LOG(LogTemp, Warning,
		TEXT("HitResult.HasValidHitObjectHandle() returned false, SelectedCharacters array will be emptied."));

	if (!SelectedCharacters.IsEmpty()) // Checking if empty already.
	{
		SelectedCharacters.Empty();
		if (SelectedCharacters.IsEmpty()) // Making sure TArray is empty after Empty() function call.
		{
			UE_LOG(LogTemp, Display, TEXT("SelectedCharacters array is empty."));
		}
		else
		{
			UE_LOG(LogTemp, Display, TEXT("SelectedCharacters array is NOT empty after calling Empty()."));
		}
	}
	else
	{
		UE_LOG(LogTemp, Display, TEXT("Tried to empty SelectedCharacters array, but it was already empty."));
	}
}