// Fill out your copyright notice in the Description page of Project Settings.


#include "RPGController.h"
#include "Blueprint/UserWidget.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "DrawDebugHelpers.h"
#include "RPGCameraPawnBase.h"

ARPGController::ARPGController()
{
	this->bShowMouseCursor = true;
}

void ARPGController::BeginPlay()
{
	Super::BeginPlay();

	CameraPawn = Cast<ARPGCameraPawnBase>(GetPawn());
}

// Called to bind functionality to input
void ARPGController::SetupInputComponent()
{
	Super::SetupInputComponent();
	
	InputComponent->BindAction("MouseSelect", IE_Pressed, this, &ARPGController::SelectObjectWithMouse);
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

void ARPGController::OrderMoveWithMouse(TArray<class ACharacter*> CharacterArray)
{
	for (ACharacter* OrderedCharacter : CharacterArray)
	{
		UCharacterMovementComponent* MoveComp = OrderedCharacter->GetCharacterMovement();
		if (MoveComp != nullptr)
		{
			// TODO: Order each character to move to a given location. 
			// Remember to add a location parameter.
			// MoveComp->
		}
	}
}

void ARPGController::AddCharacterToArray(FHitResult& HitResult)
{
	ACharacter* AddedCharacter = Cast<ACharacter>(HitResult.GetActor());
	if (AddedCharacter)
	{
		SelectedCharacters.Add(AddedCharacter);

		for (ACharacter* CharacterActor : SelectedCharacters)
		{
			FString CharacterName = CharacterActor->GetActorNameOrLabel();
			UE_LOG(LogTemp, Display, TEXT("SelectedCharacters: %s"), *CharacterName);
		}
	}

}

void ARPGController::EmptyCharacterArray()
{
	UE_LOG(LogTemp, Warning, 
			TEXT("HitResult.HasValidHitObjectHandle() returned false, SelectedCharacters will be emptied."));

	if (!SelectedCharacters.IsEmpty()) // Checking if empty already.
	{
		SelectedCharacters.Empty();
		if (SelectedCharacters.IsEmpty()) // Making sure TArray is empty after function call.
		{
			UE_LOG(LogTemp, Display, TEXT("SelectedCharacters is empty."));
		}
		else
		{
			UE_LOG(LogTemp, Display, TEXT("SelectedCharacters is NOT empty after calling Empty()."));
		}
	}
	else
	{
		UE_LOG(LogTemp, Display, TEXT("SelectedCharacters was already empty."));
	}
}