// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"

void ATankAIController::BeginPlay() {
	Super::BeginPlay();
	ATank* AITank = GetAITank();
	ATank* PlayerTank = GetPlayerTank();
	if (AITank == nullptr || PlayerTank == nullptr) {
		UE_LOG(LogTemp, Warning, TEXT("ControlledTank is nullptr!"));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("Controlled Tank is %s, Player Tank is %s"), *AITank->GetName(), *PlayerTank->GetName());
	}
}

void ATankAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (GetAITank()) {
		auto TankAiming = GetAITank()->FindComponentByClass<UTankAimingComponent>();
		TankAiming->AimDir(GetPlayerTank()->GetActorLocation());
		if (TankAiming->Firestate == EFireState::Locked) {
			TankAiming->Fire();
		}
		MoveToActor(GetAITank(), InitDis);
	}
}

ATank * ATankAIController::GetAITank()
{
	return Cast<ATank>(GetPawn());
}

ATank * ATankAIController::GetPlayerTank()
{
	return Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());
}
