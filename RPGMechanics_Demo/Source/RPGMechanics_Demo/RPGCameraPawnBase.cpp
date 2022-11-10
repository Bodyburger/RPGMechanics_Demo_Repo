// Fill out your copyright notice in the Description page of Project Settings.


#include "RPGCameraPawnBase.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/CapsuleComponent.h"
#include "Camera/CameraComponent.h"

// Sets default values
ARPGCameraPawnBase::ARPGCameraPawnBase()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	// Activate ticking in order to update the cursor every frame.
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;

	CapsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule Comp"));
	RootComponent = CapsuleComp;
	
	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm Comp"));
	SpringArmComp->SetupAttachment(RootComponent);
	SpringArmComp->SetUsingAbsoluteRotation(true); // Don't want arm to rotate when character does
	SpringArmComp->bEnableCameraLag = true;
	SpringArmComp->bUsePawnControlRotation = true;
	SpringArmComp->TargetArmLength = 0.f;
	SpringArmComp->bDoCollisionTest = false; // Don't want to pull camera in when it collides with level

	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera Comp"));
	CameraComp->SetupAttachment(SpringArmComp, USpringArmComponent::SocketName);
	CameraComp->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	AutoPossessPlayer = EAutoReceiveInput::Player0;
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
	
	CapsuleComp->SetConstraintMode(EDOFMode::XYPlane);
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
	
	// PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	// PlayerInputComponent->BindAxis("Move Forward / Backward", this, &ARPGCameraPawnBase::MoveForward);
	// PlayerInputComponent->BindAxis("Move Left / Right", this, &ARPGCameraPawnBase::MoveRight);

}

void ARPGCameraPawnBase::MoveForward(float AxisValue)
{
	UE_LOG(LogTemp, Display, TEXT("MoveForward()"))
	AddMovementInput(GetActorForwardVector(), AxisValue);
}

void ARPGCameraPawnBase::MoveRight(float AxisValue)
{
	UE_LOG(LogTemp, Display, TEXT("MoveRight()"))
	AddMovementInput(GetActorRightVector(), AxisValue);
}