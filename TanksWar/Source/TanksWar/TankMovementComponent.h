// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/NavMovementComponent.h"
#include "TankMovementComponent.generated.h"

/**
 * 
 */
UCLASS()
class TANKSWAR_API UTankMovementComponent : public UNavMovementComponent
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;
	
};
