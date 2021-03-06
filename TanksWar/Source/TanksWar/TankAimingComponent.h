// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "TankTurret.h"
#include "CoreMinimal.h"
#include "Bullet.h"
#include "Kismet/GameplayStatics.h"
#include "Components/ActorComponent.h"
#include "TankAimingComponent.generated.h"

UENUM()
enum class EFireState : uint8 {
	Reloading, Aiming, Locked
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TANKSWAR_API UTankAimingComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTankAimingComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category = "SetUp")
		void Init(UTankTurret* turret);

	UFUNCTION(BlueprintCallable, Category = "GamePlay")
		void Fire();

	void AimDir(FVector TargetDir);
	
	UTankTurret* Turret = nullptr;

	UPROPERTY(EditAnywhere, Category = "SetUp")
		float BulletLunchSpeed = 10000.0f;

	UPROPERTY(EditAnywhere, Category = "SetUp")
		float ReloadTime = 3.0f;

	UPROPERTY(EditAnywhere, Category = "SetUp")
		TSubclassOf<ABullet> BulletType;

	UPROPERTY(BlueprintReadOnly)
		EFireState Firestate = EFireState::Aiming;

	float CurrentFireTime = 0.0f;

	void CheckFireState();
};
