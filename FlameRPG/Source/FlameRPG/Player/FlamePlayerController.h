// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UserWidget.h"
#include "GameFramework/PlayerController.h"
#include "FlamePlayerController.generated.h"

/**
 * 
 */
UCLASS()
class FLAMERPG_API AFlamePlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	void CreateHUD();
	class UUserWidget* GetHUD();
protected:
	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> HUDClass;
	class UUserWidget* HUDWidget;
};
