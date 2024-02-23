// Fill out your copyright notice in the Description page of Project Settings.


#include "DST_Component.h"

// Sets default values for this component's properties
UDST_Component::UDST_Component()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UDST_Component::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UDST_Component::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UDST_Component::OnInputTriggered()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Pouet"));
}

