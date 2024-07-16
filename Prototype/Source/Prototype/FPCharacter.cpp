// Fill out your copyright notice in the Description page of Project Settings.


#include "FPCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "InputActionValue.h"
#include "Engine/LocalPlayer.h"

// Sets default values
AFPCharacter::AFPCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-5.f, 0.f, 60.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);

}

// Called when the game starts or when spawned
void AFPCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	// Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}

	SetupCharacterMovement();
}

// Called every frame
void AFPCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


// Called to bind functionality to input
void AFPCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);


	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{

		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AFPCharacter::Move);

		// Looking around
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AFPCharacter::Look);

		EnhancedInputComponent->BindAction(DiveUpAction, ETriggerEvent::Ongoing, this, &AFPCharacter::DiveUp);
		EnhancedInputComponent->BindAction(DiveDownAction, ETriggerEvent::Ongoing, this, &AFPCharacter::DiveDown);

		EnhancedInputComponent->BindAction(FasterMoveAction, ETriggerEvent::Started, this, &AFPCharacter::StartFastSwimming);
		EnhancedInputComponent->BindAction(FasterMoveAction, ETriggerEvent::Completed, this, &AFPCharacter::StopFastSwimming);

	}
}


void AFPCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add movement 
		AddMovementInput(FirstPersonCameraComponent->GetRightVector(), MovementVector.X);
		AddMovementInput(FirstPersonCameraComponent->GetForwardVector(), MovementVector.Y);
		
	}
}

void AFPCharacter::Look(const FInputActionValue& Value)
{
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		
		AddControllerPitchInput(LookAxisVector.Y * MouseSensitivity);
		AddControllerYawInput(LookAxisVector.X * MouseSensitivity);
	}

}

void AFPCharacter::DiveUp()
{
	AddMovementInput(GetActorUpVector());
}

void AFPCharacter::DiveDown()
{
	AddMovementInput(-GetActorUpVector());
}

void AFPCharacter::StartFastSwimming()
{
	GetCharacterMovement()->MaxSwimSpeed = FastSwimSpeed;
}

void AFPCharacter::StopFastSwimming()
{
	GetCharacterMovement()->MaxSwimSpeed = NormalSwimSpeed;
}

void AFPCharacter::SetupCharacterMovement()
{
	// Swimming Mode
	auto characterMovement{ GetCharacterMovement() };
	characterMovement->SetMovementMode(EMovementMode::MOVE_Swimming);

	characterMovement->MaxSwimSpeed = NormalSwimSpeed;
	characterMovement->BrakingDecelerationSwimming = 300.f;
}
