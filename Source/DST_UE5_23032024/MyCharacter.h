// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"

class UInputMappingContext;
class UInputAction;
class UDST_Component;

UCLASS()
class DST_UE5_23032024_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	/** Default MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Character|Input", meta=(DisplayName = "DefaultMappingContext"))
	UInputMappingContext* m_DSTContext;

	/** DST Component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character|Components", meta = (DisplayName = "DSTComponent"))
	UDST_Component* m_DSTComponent;
	
	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Character|Input", meta=(DisplayName = "DSTAction"))
	UInputAction* m_DSTAction;

	void DSTFunction(const FInputActionValue& Value);
};
