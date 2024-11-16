// Fill out your copyright notice in the Description page of Project Settings.


#include "Score.h"
#include <Kismet/GameplayStatics.h>

// Sets default values for this component's properties
UScore::UScore()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


// Called when the game starts
void UScore::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


bool UScore::CheckWinCondition(int32 Distance) {

	UE_LOG(LogTemp, Log, TEXT("Checking Win con..."));

	if (Distance > 15000) {

	UMyGameInstance* MyGameInstance = Cast<UMyGameInstance>(GetWorld()->GetGameInstance());
	MyGameInstance->AddWins(1);

		return true;
	}

	return false;

}

bool UScore::CheckLoseCondition(int32 Health) {

	UE_LOG(LogTemp, Log, TEXT("Checking Loses con..."));

	if (Health <= 0) {

		UMyGameInstance* MyGameInstance = Cast<UMyGameInstance>(GetWorld()->GetGameInstance());
		MyGameInstance->AddLoses(1);

		return true;
	}

	return false;

}



