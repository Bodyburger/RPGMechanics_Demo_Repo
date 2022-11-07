// Fill out your copyright notice in the Description page of Project Settings.


#include "RPGCameraPawnBase.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/CapsuleComponent.h"
#include "Camera/CameraComponent.h"

// Sets default values
ARPGCameraPawnBase::ARPGCameraPawnBase()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CapsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule Comp"));
	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm Comp"));
	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera Comp"));

	RootComponent = CapsuleComp;
	SpringArmComp->SetupAttachment(RootComponent);
	CameraComp->AttachToComponent(SpringArmComp, FAttachmentTransformRules::KeepRelativeTransform);


	SpringArmComp->bEnableCameraLag = true;
	SpringArmComp->bUsePawnControlRotation = true;
	SpringArmComp->TargetArmLength = 0.f;

	CameraComp->bUsePawnControlRotation = false;
}

// Called when the game starts or when spawned
void ARPGCameraPawnBase::BeginPlay()
{
	Super::BeginPlay();
	FRotator NewCameraRotation;
	NewCameraRotation.Pitch = CameraRotation;

	UE_LOG(LogTemp, Warning, TEXT("Camera pitch: %d"), CameraComp->GetRelativeRotation().Pitch);
	CameraComp->AddLocalRotation(NewCameraRotation);
	UE_LOG(LogTemp, Warning, TEXT("Camera pitch set to: %d"), CameraComp->GetRelativeRotation().Pitch);
}

// Called every frame
void ARPGCameraPawnBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ARPGCameraPawnBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);

}

