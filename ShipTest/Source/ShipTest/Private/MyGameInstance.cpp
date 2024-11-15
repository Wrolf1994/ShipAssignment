// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"

UMyGameInstance::UMyGameInstance()
{
    TotalWins = 0; // Initiate Score
    TotalLoses = 0;
}

void UMyGameInstance::AddWins(int32 Amount)
{
    TotalWins += Amount;
}

void UMyGameInstance::AddLoses(int32 Amount)
{
    TotalLoses += Amount;
}