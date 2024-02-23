#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MyPlayerController.generated.h"

class UInputMappingContext;

UCLASS()
class DST_UE5_23032024_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	virtual void SetupInputComponent() override;

	/** Default MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Character|Input", meta=(DisplayName = "DefaultMappingContext"))
	UInputMappingContext* DSTContext;
};
