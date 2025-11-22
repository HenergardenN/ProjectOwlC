// Copyright Epic Games, Inc. All Rights Reserved.

#include "Artum_9GameMode.h"
#include "Artum_9Character.h"
#include "UObject/ConstructorHelpers.h"

AArtum_9GameMode::AArtum_9GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
