// Fill out your copyright notice in the Description page of Project Settings.

#include "TankTurret.h"

void UTankTurret::MoveTurret(FVector Dir)
{
	FRotator CurrentRot = GetForwardVector().Rotation();
	FRotator AimRot = Dir.Rotation();

	float ChangYaw = AimRot.Yaw - CurrentRot.Yaw;

	if (ChangYaw > 180) {
		ChangYaw = ChangYaw - 360;
	}
	else if (ChangYaw < -180) {
		ChangYaw = ChangYaw + 360;
	}

	float RelativeSpeedYaw = FMath::Clamp<float>(ChangYaw, -1, 1);
	float RotOffsetYaw = RelativeSpeedYaw * RotMaxAngle_H * GetWorld()->DeltaTimeSeconds;
	float NewRotYaw = RotOffsetYaw + CurrentRot.Yaw;

	float ChangPitch = AimRot.Pitch - CurrentRot.Pitch;

	float RelativeSpeedPitch = FMath::Clamp<float>(ChangPitch, -1, 1);
	float RotOffsetPitch = RelativeSpeedPitch * RotMaxAngle_H * GetWorld()->DeltaTimeSeconds;
	float NewRotPitch = RotOffsetPitch + CurrentRot.Pitch;

	NewRotPitch = FMath::Clamp<float>(NewRotPitch, RotMinPitch, RotMaxPitch);

	SetRelativeRotation(FRotator(NewRotPitch, NewRotYaw, 0.0f));
}