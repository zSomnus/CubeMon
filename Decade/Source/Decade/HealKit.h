// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HealKit.generated.h"

UCLASS()
class DECADE_API AHealKit : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHealKit();

	UPROPERTY(VisibleAnywhere)
		class ADecadeCharacter* Player;

	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* MeshComponent;

	UPROPERTY(EditAnywhere)
		float Duration;

	UPROPERTY(EditAnywhere)
		class USoundCue* Sound;

private:
	UPROPERTY(VisibleAnywhere)
	bool bCanHeal;
	FTimerHandle TimerHandle;
	float HealRate;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void Heal();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void NotifyHit(class UPrimitiveComponent* MyComp, AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);

};
