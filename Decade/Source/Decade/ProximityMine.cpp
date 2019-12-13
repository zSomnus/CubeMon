// Fill out your copyright notice in the Description page of Project Settings.


#include "ProximityMine.h"
#include "Kismet/GameplayStatics.h"
#include "DecadeProjectile.h"
#include "Engine.h"
#include "DecadeCharacter.h"
#include "TimerManager.h"
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
	if (Material != nullptr)
	{
		Material->SetScalarParameterValue(TEXT("AlphaValue"), 0.0f);
	}

	Material = MeshComponent->CreateDynamicMaterialInstance(0);

	//GetWorldTimerManager().SetTimer(TimerHandle, this, &AProximityMine::Explode, Delay, false);

}


// Called every frame
void AProximityMine::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Activate();
}

void AProximityMine::Activate()
{
	auto player = Cast<ADecadeCharacter>(Player);

	TArray<TEnumAsByte<EObjectTypeQuery>> query;
	TArray<AActor*> ignore;
	TArray<AActor*> out;
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), Particle, GetTransform());
	UKismetSystemLibrary::SphereOverlapActors(this, this->GetActorLocation(), Distance , query, ADecadeCharacter::StaticClass(), ignore, out);
	
	for (auto actor : out)
	{
		Player = Cast<ADecadeCharacter>(actor);

		if (Player != nullptr)
		{
			bInRange = true;
			//Player->HP -= 0.1f;
			GEngine->AddOnScreenDebugMessage(0, 0.1f, FColor::Black, "Player");
			Material->SetScalarParameterValue(TEXT("AlphaValue"), 1.0f);

			FTimerHandle timer;
			GEngine->AddOnScreenDebugMessage(0, 0.1f, FColor::Black, "hhhhhhhhhhh");
			GetWorldTimerManager().SetTimer(timer, this, &AProximityMine::Explode, Delay, false);
			//GetWorldTimerManager().SetTimer(TimerHandle, this, &AProximityMine::Explode, Delay, false);
		}
		else
		{
			bInRange = false;
		}
	}
}

void AProximityMine::Explode()
{
	auto player = Cast<ADecadeCharacter>(Player);
	if (this->GetActorLocation().Distance(this->GetActorLocation(), player->GetActorLocation()) <= Distance)
	{
		Player->HP -= 0.2f;
	}
	GEngine->AddOnScreenDebugMessage(0, 0.1, FColor::White, "NOOOOOOOOOOOO");
	//UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), Particle, GetTransform());
	Destroy();
}

void AProximityMine::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	auto Projectile = Cast<ADecadeProjectile>(Other);
	if (Projectile != nullptr)
	{
		GEngine->AddOnScreenDebugMessage(0, 1.f, FColor::White, "AAAAAAAAAA");
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), Particle, GetTransform());
		Destroy();
	}
}

