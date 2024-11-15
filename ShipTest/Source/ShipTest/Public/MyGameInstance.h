// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class SHIPTEST_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()

	public:
	UPROPERTY(BlueprintReadWrite, Category = "GameData")
	int32 TotalWins;
	UPROPERTY(BlueprintReadWrite, Category = "GameData")
	int32 TotalLoses;

	UMyGameInstance();

	UFUNCTION(BlueprintCallable, Category = "GameData")
	void AddWins(int32 Amount);
	UFUNCTION(BlueprintCallable, Category = "GameData")
	void AddLoses(int32 Amount);
};