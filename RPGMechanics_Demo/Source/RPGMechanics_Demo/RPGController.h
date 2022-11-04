// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "RPGController.generated.h"

/**
 *
 */
UCLASS()
class RPGMECHANICS_DEMO_API ARPGController : public APlayerController
{
	GENERATED_BODY()

public:
	ARPGController();

	virtual void SetupInputComponent() override;

protected:
	virtual void BeginPlay() override;

	void SelectObjectWithMouse();

	void OrderMoveWithMouse(TArray<class ACharacter*> CharacterArray);

private:
	UPROPERTY(VisibleAnywhere)
	TArray<ACharacter*> SelectedCharacters;

	void AddCharacterToArray(FHitResult& HitResult);

	void EmptyCharacterArray();

};
