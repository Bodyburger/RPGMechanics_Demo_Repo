// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RPGMechanics_DemoGameMode.h"
#include "RPGGameMode.generated.h"

/**
 * 
 */
UCLASS()
class RPGMECHANICS_DEMO_API ARPGGameMode : public ARPGMechanics_DemoGameMode
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;
	
};
