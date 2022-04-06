// Copyright Epic Games, Inc. All Rights Reserved.

#include "FlameGameMode.h"
#include "FlameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFlameGameMode::AFlameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
