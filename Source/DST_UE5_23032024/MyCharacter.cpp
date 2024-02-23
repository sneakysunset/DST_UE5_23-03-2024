// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"
#include "DST_Component.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	m_DSTComponent = CreateDefaultSubobject<UDST_Component>(TEXT("DSTComponent"));
}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(m_DSTAction, ETriggerEvent::Triggered, this, &AMyCharacter::DSTFunction);
	}
}

void AMyCharacter::DSTFunction(const FInputActionValue& Value)
{
	m_DSTComponent->OnInputTriggered();
}