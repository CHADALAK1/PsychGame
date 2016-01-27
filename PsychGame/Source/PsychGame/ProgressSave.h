// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/SaveGame.h"
#include "ProgressSave.generated.h"

/**
 * 
 */
UCLASS()
class PSYCHGAME_API UProgressSave : public USaveGame
{
	GENERATED_BODY()
	
public:

	UProgressSave();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Basic)
	TArray<FVector2D> ProgressPoint;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Basic)
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Basic)
	TArray<FString> Journal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Basic)
	FString SaveSlotName;
	
	UPROPERTY(VisibleAnywhere, Category = Basic)
	int32 UserIndex;

	UFUNCTION(BlueprintCallable, Category = Name)
	bool HasName();
};
