// Fill out your copyright notice in the Description page of Project Settings.


#include "RPGController.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "DrawDebugHelpers.h"
#include "RPGCameraPawnBase.h"
#include "Kismet/GameplayStatics.h"
#include "Math/UnrealMathUtility.h"

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

	InputComponent->BindAction("MouseSelect", IE_Released, this, &ARPGController::SelectObjectWithMouse);
	InputComponent->BindAction("OrderMove", IE_Released, this, &ARPGController::OrderMoveWithMouse);
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

void ARPGController::OrderMoveWithMouse()
{
	TArray<ACharacter*> CharacterArray = SelectedCharacters;

	if (CharacterArray.IsEmpty())
	{
		UE_LOG(LogTemp, Warning, TEXT("There are no ACharacters to move in CharacterArray"));
		return;
	}

	FHitResult HitResult;
	APlayerController::GetHitResultUnderCursor(ECC_Visibility, true, HitResult);

	DrawDebugSphere(GetWorld(), HitResult.ImpactPoint, 10, 12, FColor::Red, false, 5);

	for (ACharacter* OrderedCharacter : CharacterArray)
	{
		UCharacterMovementComponent* MoveComp = OrderedCharacter->GetCharacterMovement();
		if (OrderedCharacter != nullptr && MoveComp != nullptr)
		{
			// TODO: Order each character to move to a given location. 
			// Remember to add a location parameter.
			// MoveComp->
			UE_LOG(LogTemp, Warning, TEXT("Moving '%s' in CharacterArray."),
				*OrderedCharacter->GetActorNameOrLabel());

			MovementVelocity = OrderedCharacter->GetActorLocation() + HitResult.Location;
			FStepDownResult OutStepDownResult;
			MoveComp->MoveSmooth(MovementVelocity, UGameplayStatics::GetWorldDeltaSeconds(this), &OutStepDownResult);
			UE_LOG(LogTemp, Warning, TEXT("'%s' was moved."),
				*OrderedCharacter->GetActorNameOrLabel());
		}
		else { UE_LOG(LogTemp, Warning, TEXT("MoveComp is nullptr.")); }
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
	else { EmptyCharacterArray(); }
}

void ARPGController::EmptyCharacterArray()
{
	UE_LOG(LogTemp, Warning,
		TEXT("HitResult.HasValidHitObjectHandle() returned false, SelectedCharacters will be emptied."));

	if (!SelectedCharacters.IsEmpty()) // Checking if empty already.
	{
		SelectedCharacters.Empty();
		if (SelectedCharacters.IsEmpty()) // Making sure TArray is empty after Empty() function call.
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