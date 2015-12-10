// Fill out your copyright notice in the Description page of Project Settings.

#include "PsychGame.h"
#include "PsychPlayerController.h"
#include "PsychGameGameMode.h"


APsychGameGameMode::APsychGameGameMode()
{
	static ConstructorHelpers::FClassFinder<APlayerController> PCBlueprint(TEXT("/Game/MobileStarterContent/Blueprints/PsychPC_BP"));
	if (PCBlueprint.Class)
	{
		PlayerControllerClass = PCBlueprint.Class;
	}
	DefaultPawnClass = NULL;
}

