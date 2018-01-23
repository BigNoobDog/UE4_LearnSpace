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

void ATankPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	AimToTarget();
}

void ATankPlayerController::AimToTarget()
{
	FVector RayCast;
	if (GetSightRayCast(RayCast)) {
		//UE_LOG(LogTemp, Warning, TEXT("RayCast is : %s"), *RayCast.ToString());
		GetTank()->FindComponentByClass<UTankAimingComponent>()->AimDir(RayCast);
	}
}

ATank* ATankPlayerController::GetTank()
{
	return Cast<ATank>(GetPawn());
}

bool ATankPlayerController::GetSightRayCast(FVector &OutRayCast)
{
	int32 view_x, view_y;
	GetViewportSize(view_x, view_y);
	FVector2D ScreenPos = FVector2D(view_x * crosshair_x, view_y * crosshair_y);

	FVector WorldPos;
	FVector WorldDir;
	if (DeprojectScreenPositionToWorld(ScreenPos.X, ScreenPos.Y, WorldPos, WorldDir)) {
		GetRay(WorldDir, OutRayCast);
		return true;
	}
	return false;
}

bool ATankPlayerController::GetRay(FVector Dir, FVector &OutHitPos)
{
	FVector StartPos = PlayerCameraManager->GetCameraLocation();
	FVector EndPos = StartPos + Dir * RayDis;

	FHitResult Hit;
	FCollisionQueryParams Params;
	if (GetWorld()->LineTraceSingleByChannel(Hit, StartPos, EndPos, ECollisionChannel::ECC_Visibility)) {
		OutHitPos = Hit.Location;
		return true;
	}
	OutHitPos = FVector(0.0f);
	return false;
}
