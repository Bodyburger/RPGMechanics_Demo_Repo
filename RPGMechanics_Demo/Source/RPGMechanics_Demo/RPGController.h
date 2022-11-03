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

	// Sets the CameraComp's relative location to CameraRShoulderLocation arrow component.
	void SetCameraShoulderLocation();

	// Sets the CameraComp's relative location to CameraOriginLocation arrow component.
	void SetCameraOriginLocation();

	void SelectObjectWithMouse();

private:
	UPROPERTY(VisibleAnywhere)
	TArray<class ACharacter*> SelectedCharacters;

	void AddCharacterToArray(FHitResult& HitResult);

	void EmptyCharacterArray();

};
