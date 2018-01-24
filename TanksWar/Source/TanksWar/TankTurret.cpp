// Fill out your copyright notice in the Description page of Project Settings.

#include "TankTurret.h"

void UTankTurret::MoveTurret(FVector Dir)
{
	FRotator CurrentRot = GetForwardVector().Rotation();
	FRotator AimRot = Dir.Rotation();

	ChangeYaw = AimRot.Yaw - CurrentRot.Yaw;

	if (ChangeYaw > 180) {
		ChangeYaw = ChangeYaw - 360;
	}
	else if (ChangeYaw < -180) {
		ChangeYaw = ChangeYaw + 360;
	}

	float RelativeSpeedYaw = FMath::Clamp<float>(ChangeYaw, -1, 1);
	float RotOffsetYaw = RelativeSpeedYaw * RotMaxAngle_H * GetWorld()->DeltaTimeSeconds;
	float NewRotYaw = RotOffsetYaw + RelativeRotation.Yaw;

	ChangePitch = AimRot.Pitch - CurrentRot.Pitch;

	float RelativeSpeedPitch = FMath::Clamp<float>(ChangePitch, -1, 1);
	float RotOffsetPitch = RelativeSpeedPitch * RotMaxAngle_H * GetWorld()->DeltaTimeSeconds;
	float NewRotPitch = RotOffsetPitch + RelativeRotation.Pitch;

	NewRotPitch = FMath::Clamp<float>(NewRotPitch, RotMinPitch, RotMaxPitch);

	SetRelativeRotation(FRotator(NewRotPitch, NewRotYaw, 0.0f));
}

float UTankTurret::GetChangeYaw()
{
	return ChangeYaw;
}

float UTankTurret::GetChangePicth()
{
	return ChangePitch;
}
