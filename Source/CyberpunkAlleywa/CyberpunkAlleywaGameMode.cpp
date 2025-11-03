// Copyright Epic Games, Inc. All Rights Reserved.

#include "CyberpunkAlleywaGameMode.h"
#include "CyberpunkAlleywaCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACyberpunkAlleywaGameMode::ACyberpunkAlleywaGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
