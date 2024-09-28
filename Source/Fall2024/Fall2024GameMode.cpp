// Copyright Epic Games, Inc. All Rights Reserved.

#include "Fall2024GameMode.h"
#include "Fall2024Character.h"
#include "UObject/ConstructorHelpers.h"

AFall2024GameMode::AFall2024GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
