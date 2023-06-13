#include "RPGCameraPawnBase.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/CapsuleComponent.h"
#include "Camera/CameraComponent.h"

ARPGCameraPawnBase::ARPGCameraPawnBase()
{
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;

	CapsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule Comp"));
	RootComponent = CapsuleComp;
	
	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm Comp"));
	SpringArmComp->SetupAttachment(RootComponent);
	SpringArmComp->SetUsingAbsoluteRotation(true); // Don't rotate springarm when character does
	SpringArmComp->bEnableCameraLag = true;
	SpringArmComp->bUsePawnControlRotation = true;
	SpringArmComp->TargetArmLength = 0.f;
	SpringArmComp->bDoCollisionTest = false; // Don't pull camera in when it collides with level

	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera Comp"));
	CameraComp->SetupAttachment(SpringArmComp, USpringArmComponent::SocketName);
	CameraComp->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	AutoPossessPlayer = EAutoReceiveInput::Player0;
}

void ARPGCameraPawnBase::BeginPlay()
{
	Super::BeginPlay();

	FRotator NewCameraRotation;
	NewCameraRotation.Pitch = CameraRotation;
	UE_LOG(LogTemp, Warning, TEXT("Camera pitch: %d"), CameraComp->GetRelativeRotation().Pitch);
	CameraComp->AddLocalRotation(NewCameraRotation);
	UE_LOG(LogTemp, Warning, TEXT("Camera pitch set to: %d"), CameraComp->GetRelativeRotation().Pitch);
	
	CapsuleComp->SetConstraintMode(EDOFMode::XYPlane);
	CapsuleComp->SetGenerateOverlapEvents(true);
	CapsuleComp->CanCharacterStepUpOn = ECanBeCharacterBase::ECB_No;
	CapsuleComp->SetCollisionProfileName("InvisibleWallDynamic");
}

void ARPGCameraPawnBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ARPGCameraPawnBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
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