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




	// set default pawn class to our RPGCameraPawnBase
	// static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClass(TEXT("D:/Unreal Projects/RPGMechanics_Demo_Repo/RPGMechanics_Demo/Source/RPGMechanics_Demo/RPGCameraPawnBase.h"));
	// if (PlayerPawnClass.Class != NULL)
	// {
	// 	DefaultPawnClass = PlayerPawnClass.Class;
	// }

	// // set default controller to our RPGController
	// static ConstructorHelpers::FClassFinder<APlayerController> RPGPlayerControllerClass(TEXT("D:/Unreal Projects/RPGMechanics_Demo_Repo/RPGMechanics_Demo/Source/RPGMechanics_Demo/RPGController.h"));
	// if (RPGPlayerControllerClass.Class != NULL)
	// {
	// 	PlayerControllerClass = RPGPlayerControllerClass.Class;
	// }
}