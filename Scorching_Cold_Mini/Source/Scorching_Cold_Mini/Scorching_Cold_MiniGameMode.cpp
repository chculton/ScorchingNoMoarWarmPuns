// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Scorching_Cold_MiniGameMode.h"
#include "Scorching_Cold_MiniHUD.h"
#include "Scorching_Cold_MiniCharacter.h"
#include "UObject/ConstructorHelpers.h"

AScorching_Cold_MiniGameMode::AScorching_Cold_MiniGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AScorching_Cold_MiniHUD::StaticClass();
}
