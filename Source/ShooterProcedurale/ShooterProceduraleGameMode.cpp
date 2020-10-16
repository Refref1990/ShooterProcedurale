// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShooterProceduraleGameMode.h"
#include "ShooterProceduraleHUD.h"
#include "ShooterProceduraleCharacter.h"
#include "UObject/ConstructorHelpers.h"

AShooterProceduraleGameMode::AShooterProceduraleGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AShooterProceduraleHUD::StaticClass();
}
