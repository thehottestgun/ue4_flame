// Fill out your copyright notice in the Description page of Project Settings.


#include "FlamePlayerController.h"

#include "Engine/Engine.h"

void AFlamePlayerController::CreateHUD()
{
	if(HUDClass)
	{
		HUDWidget = CreateWidget(this,HUDClass);
		HUDWidget->AddToViewport();
	}
}

UUserWidget* AFlamePlayerController::GetHUD()
{
	return HUDWidget;
}
