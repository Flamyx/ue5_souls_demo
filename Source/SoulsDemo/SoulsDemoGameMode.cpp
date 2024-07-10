// Copyright Epic Games, Inc. All Rights Reserved.

#include "SoulsDemoGameMode.h"
#include "SoulsDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASoulsDemoGameMode::ASoulsDemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
