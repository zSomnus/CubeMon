// Fill out your copyright notice in the Description page of Project Settings.


#include "ProximityMine.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AProximityMine::AProximityMine()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	RootComponent = MeshComponent;
}

// Called when the game starts or when spawned
void AProximityMine::BeginPlay()
{
	Super::BeginPlay();
	
}

void AProximityMine::Activate()
{
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), Particle, GetTransform());

}

// Called every frame
void AProximityMine::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

