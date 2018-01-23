// Fill out your copyright notice in the Description page of Project Settings.

#include "Bullet.h"


// Sets default values
ABullet::ABullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MoveComponent = CreateDefaultSubobject<UProjectileMovementComponent>(FName("MoveComponent"));
	MoveComponent->bAutoActivate = false;
}

// Called when the game starts or when spawned
void ABullet::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABullet::Lunch(float Speed)
{
	MoveComponent->SetVelocityInLocalSpace(FVector::ForwardVector * Speed);
	MoveComponent->Activate();
	UE_LOG(LogTemp, Warning, TEXT("Fire!"));
}

