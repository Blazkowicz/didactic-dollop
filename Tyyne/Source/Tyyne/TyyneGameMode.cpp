// Copyright Epic Games, Inc. All Rights Reserved.

#include "TyyneGameMode.h"
#include "TyyneCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATyyneGameMode::ATyyneGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
