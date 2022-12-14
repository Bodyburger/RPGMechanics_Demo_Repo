// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "RPGController.generated.h"


UCLASS()
class RPGMECHANICS_DEMO_API ARPGController : public APlayerController
{
	GENERATED_BODY()

public:
	ARPGController();

	virtual void SetupInputComponent() override;



protected:
	virtual void BeginPlay() override;

	virtual void PlayerTick(float DeltaTime) override;

	void OrderMoveInputPressed();

	void OrderMoveInputReleased();

	void SelectObjectWithMouse();

	void OrderMoveWhilePressed();

	void OrderMoveOnRelease();

private:
	UPROPERTY(VisibleAnywhere)
		TArray<class ARPGMechanics_DemoCharacter*> SelectedCharacters;

	class ARPGCameraPawnBase* CameraPawn;

	void AddCharacterToArray(FHitResult& HitResult);

	UPROPERTY(VisibleAnywhere);
	FVector MovementVelocity;

	UPROPERTY(VisibleAnywhere)
		bool bOrderInputIsPressed = false;
};
