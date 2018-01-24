// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/World.h"
#include "Components/StaticMeshComponent.h"
#include "TankTurret.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class TANKSWAR_API UTankTurret : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, Category = "SetUp")
		float RotMaxAngle_H = 100.0f;
	
	UPROPERTY(EditAnywhere, Category = "SetUp")
		float RotMaxAngle_V = 20.0f;

	UPROPERTY(EditAnywhere, Category = "SetUp")
		float RotMaxPitch = 40;

	UPROPERTY(EditAnywhere, Category = "SetUp")
		float RotMinPitch = -5;

	void MoveTurret(FVector Dir);

	float GetChangeYaw();

	float ChangeYaw;

	float GetChangePicth();

	float ChangePitch;
};
