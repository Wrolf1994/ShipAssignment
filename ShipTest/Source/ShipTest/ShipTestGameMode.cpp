// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShipTestGameMode.h"
#include "ShipTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AShipTestGameMode::AShipTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
