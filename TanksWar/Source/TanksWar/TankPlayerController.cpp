// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController.h"

void ATankPlayerController::BeginPlay() {
	Super::BeginPlay();
	ATank* ControlledTank = GetTank();
	if (ControlledTank == nullptr) {
		UE_LOG(LogTemp, Warning, TEXT("ControlledTank is nullptr!"));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("Controlled Tank is %s"), *ControlledTank->GetName());
	}
}

ATank* ATankPlayerController::GetTank()
{
	return Cast<ATank>(GetPawn());
}