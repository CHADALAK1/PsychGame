// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/PlayerController.h"
#include "PsychPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class PSYCHGAME_API APsychPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Question)
	FText Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Question)
	FText FavColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Question)
	FText FavAnimal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Question)
	int32 FeelingValue;
	
	
};
