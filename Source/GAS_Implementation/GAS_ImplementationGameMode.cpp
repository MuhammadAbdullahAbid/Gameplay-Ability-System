// Copyright Epic Games, Inc. All Rights Reserved.

#include "GAS_ImplementationGameMode.h"
#include "GAS_ImplementationCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGAS_ImplementationGameMode::AGAS_ImplementationGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
