// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAimingComponent.h"


// Sets default values for this component's properties
UTankAimingComponent::UTankAimingComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UTankAimingComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UTankAimingComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	CheckFireState();
}

void UTankAimingComponent::Init(UTankTurret* turret)
{
	Turret = turret;
}

void UTankAimingComponent::Fire()
{
	bool isReload = false;
	if ((FPlatformTime::Seconds() - CurrentFireTime) > ReloadTime){
		isReload = true;
	}
	if (Turret == nullptr || BulletType == nullptr || !isReload) {
		UE_LOG(LogTemp, Warning, TEXT("Turret or Bullet is nullptr!"));
		return;
	}
	ABullet* TargetBullet = GetWorld()->SpawnActor<ABullet>(BulletType, Turret->GetSocketLocation(FName("FireSpawn")), Turret->GetSocketRotation(FName("FireSpawn")));
	TargetBullet->Lunch(BulletLunchSpeed);
	CurrentFireTime = FPlatformTime::Seconds();
}

void UTankAimingComponent::AimDir(FVector TargetDir)
{
	if (Turret == nullptr) {
		//UE_LOG(LogTemp, Warning, TEXT("Turret is nullptr!"));
		return;
	}

	FVector FireVector;
	FVector StartPos = Turret->GetSocketLocation("FireSpawn");
	bool bHaveSolution = false;
	bHaveSolution = UGameplayStatics::SuggestProjectileVelocity(this, FireVector, StartPos, TargetDir, BulletLunchSpeed, false, 0.0f, 0.0f, ESuggestProjVelocityTraceOption::DoNotTrace);

	if (bHaveSolution) {
		Turret->MoveTurret(FireVector.GetSafeNormal());
	}
}

void UTankAimingComponent::CheckFireState()
{
	if (Turret == nullptr || BulletType == nullptr) {
		UE_LOG(LogTemp, Warning, TEXT("Turret or Bullet is nullptr!"));
		return;
	}
	if ((FPlatformTime::Seconds() - CurrentFireTime) < ReloadTime) {
		Firestate = EFireState::Reloading;
		return;
	}
	if (FMath::Abs(Turret->GetChangeYaw()) > 3 || FMath::Abs(Turret->GetChangePicth()) > 3) {
		Firestate = EFireState::Aiming;
	}
	else {
		Firestate = EFireState::Locked;
	}
}