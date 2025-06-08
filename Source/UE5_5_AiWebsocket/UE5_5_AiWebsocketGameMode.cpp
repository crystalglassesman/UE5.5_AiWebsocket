// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE5_5_AiWebsocketGameMode.h"
#include "UE5_5_AiWebsocketCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE5_5_AiWebsocketGameMode::AUE5_5_AiWebsocketGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
