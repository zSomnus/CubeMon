// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProximityMine.generated.h"

UCLASS()
class DECADE_API AProximityMine : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProximityMine();

	UPROPERTY(VisibleAnywhere)
		class ADecadeCharacter* Player;

	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* MeshComponent;

	UPROPERTY(EditAnywhere)
		float Distance;

	UPROPERTY(EditAnywhere)
		float Delay;

	UPROPERTY(EditAnywhere)
		UParticleSystem* Particle;


private:

	UMaterialInstanceDynamic* Material;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void Activate();

	void Explode();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void NotifyHit(class UPrimitiveComponent* MyComp, AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit) override;

};
