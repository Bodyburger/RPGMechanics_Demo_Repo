// Copyright Epic Games, Inc. All Rights Reserved.

#include "RPGMechanics_DemoGameMode.h"
#include "RPGMechanics_DemoCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "RPGCameraPawnBase.h"
#include "RPGController.h"

ARPGMechanics_DemoGameMode::ARPGMechanics_DemoGameMode()
{
	if (ARPGCameraPawnBase::StaticClass() != NULL)
	{
		DefaultPawnClass = ARPGCameraPawnBase::StaticClass();
	}
	if (ARPGController::StaticClass() != NULL)
	{
		PlayerControllerClass = ARPGController::StaticClass();
	}
}