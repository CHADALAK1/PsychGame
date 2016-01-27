// Fill out your copyright notice in the Description page of Project Settings.

#include "PsychGame.h"
#include "PsychPlayerController.h"

void APsychPlayerController::BeginPlay()
{
	Super::BeginPlay();
}

void APsychPlayerController::SaveProgress(FString SName)
{
	if (SName.IsEmpty()) return;

}

void APsychPlayerController::LoadName()
{


}


