// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "CubeMonGameMode.h"
#include "CubeMonHUD.h"
#include "CubeMonCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACubeMonGameMode::ACubeMonGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ACubeMonHUD::StaticClass();
}
