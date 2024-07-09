// Fill out your copyright notice in the Description page of Project Settings.


#include "FPGameMode.h"
#include "UObject/ConstructorHelpers.h"

AFPGameMode::AFPGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Blueprints/Character/BP_FPCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}