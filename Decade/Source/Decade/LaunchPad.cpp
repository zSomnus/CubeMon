// Fill out your copyright notice in the Description page of Project Settings.


#include "LaunchPad.h"
#include "DecadeCharacter.h"
#include "Engine.h"

// Sets default values
ALaunchPad::ALaunchPad()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	RootComponent = BoxComponent;

	Impulse = FVector(0.0f, 0.0f, 0.0f);
}

// Called when the game starts or when spawned
void ALaunchPad::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALaunchPad::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

void ALaunchPad::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Player = Cast<ADecadeCharacter>(OtherActor);

	if (Player != nullptr)
	{
		Impulse = FVector(Player->GetVelocity().X * ForwardForce, Player->GetVelocity().Y * ForwardForce, UpForce);
		GEngine->AddOnScreenDebugMessage(0, 0.1f, FColor::Yellow, "Launch Pad");
		Player->GetCharacterMovement()->AddImpulse(Impulse);
	}
}

