// Fill out your copyright notice in the Description page of Project Settings.

#include "PsychGame.h"
#include "ProgressSave.h"

UProgressSave::UProgressSave()
{
	SaveSlotName = TEXT("ProgressSaveSlot");
	UserIndex = 0;
}

bool UProgressSave::HasName()
{
	bool bName;
	if (Name.IsEmpty())
	{
		bName = false;
	}
	else
	{
		bName = true;
	}
	return bName;
}




