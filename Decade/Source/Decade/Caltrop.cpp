// Fill out your copyright notice in the Description page of Project Settings.


#include "Caltrop.h"
#include "Engine.h"
#include "DecadeCharacter.h"

// Sets default values
ACaltrop::ACaltrop()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = MeshComponent;

}

// Called when the game starts or when spawned
void ACaltrop::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACaltrop::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

void ACaltrop::NotifyHit(class UPrimitiveComponent* MyComp, AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	auto Player = Cast<ADecadeCharacter>(Other);

	if (Player != nullptr)
	{
		GEngine->AddOnScreenDebugMessage(0, 0.1f, FColor::Blue, "Caltrop");
		Player->HP -= 0.1f;
		Destroy();
	}
}

