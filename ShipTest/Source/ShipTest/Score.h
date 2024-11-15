// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "MyGameInstance.h"
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Score.generated.h"



UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SHIPTEST_API UScore : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UScore();

	UFUNCTION(BlueprintCallable, Category = "Score")
	bool CheckWinCondition(int32 Distance);
	
	UFUNCTION(BlueprintCallable, Category = "Score")
	bool CheckLoseCondition(int32 Health);


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

		
};
