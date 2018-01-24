// Fill out your copyright notice in the Description page of Project Settings.

#include "TankTruck.h"

void UTankTruck::SetThrottle(float Throttle)
{
	if (FMath::Abs(Throttle) < 0.1f) {
		return;
	}
	auto Force = TankForce * Throttle * GetForwardVector();
	auto ForcePos = GetComponentLocation();
	auto Owner = GetOwner()->GetRootComponent();
	auto RootComponent = Cast<UPrimitiveComponent>(Owner);
	RootComponent->AddForceAtLocation(Force, ForcePos);
}
