// Fill out your copyright notice in the Description page of Project Settings.

#include "TankTruck.h"

void UTankTruck::BeginPlay() {
	Super::BeginPlay();
	OnComponentHit.AddDynamic(this, &UTankTruck::OnHit);
}

void UTankTruck::SetThrottle(float Throttle)
{
	ThrottleToDrive = FMath::Clamp<float>(Throttle, -1, 1);
}

void UTankTruck::OnHit(UPrimitiveComponent * HitComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, FVector NormalImpulse, const FHitResult & Hit)
{
	DriveTrack();
	UE_LOG(LogTemp, Warning, TEXT("Go"));
}

void UTankTruck::DriveTrack()
{
	if (FMath::Abs(ThrottleToDrive) < 0.1f) {
		return;
	}
	auto Force = TankForce * ThrottleToDrive * GetForwardVector();
	auto ForcePos = GetComponentLocation();
	auto Owner = GetOwner()->GetRootComponent();
	auto RootComponent = Cast<UPrimitiveComponent>(Owner);
	RootComponent->AddForceAtLocation(Force, ForcePos);
}
