// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "DecadeGameMode.h"
#include "DecadeHUD.h"
#include "DecadeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADecadeGameMode::ADecadeGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ADecadeHUD::StaticClass();
}
