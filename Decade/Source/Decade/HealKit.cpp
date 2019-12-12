// Fill out your copyright notice in the Description page of Project Settings.


#include "HealKit.h"
#include "DecadeCharacter.h"
#include "Engine.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AHealKit::AHealKit()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = MeshComponent;
}

// Called when the game starts or when spawned
void AHealKit::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHealKit::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Heal Kit rotates on the Z-axis
	FRotator Rotation = GetActorRotation();
	Rotation.Yaw += DeltaTime * 100.f;
	if (Rotation.Yaw == 360.f)
	{
		Rotation.Yaw = 0.0f;
	}
	SetActorRotation(Rotation);

	// TODO
	// Healing to full over a certain duration defined in secondes
}

void AHealKit::NotifyHit(class UPrimitiveComponent* MyComp, AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	auto Player = Cast<ADecadeCharacter>(Other);

	if (Player != nullptr)
	{
		GEngine->AddOnScreenDebugMessage(0, 0.1f, FColor::Green, "Heal Kit");
		Player->HP += 0.1f;
		
		UGameplayStatics::PlaySound2D(this, Sound);
		Destroy();
	}
}

