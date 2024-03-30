// Copyright Epic Games, Inc. All Rights Reserved.

#include "ReplicationsGameMode.h"
#include "Replications/entities/player//ReplicationsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AReplicationsGameMode::AReplicationsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
