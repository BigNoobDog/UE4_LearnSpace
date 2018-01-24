// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h"
#include "Engine/World.h"
#include "CoreMinimal.h"
#include "TankAimingComponent.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class TANKSWAR_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
	
public:
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	void AimToTarget();

	UFUNCTION(BlueprintCallable, Category = "SetUp")
		ATank* GetTank();
	
	bool GetSightRayCast(FVector &OutRayCast);

	bool GetRay(FVector Dir, FVector &OutHitPos);

	UPROPERTY(EditAnywhere)
	float RayDis = 100000.0f;

private:
	float crosshair_x = 0.5f;
	float crosshair_y = 0.3f;
};
