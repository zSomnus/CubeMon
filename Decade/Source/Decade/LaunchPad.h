// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LaunchPad.generated.h"

UCLASS()
class DECADE_API ALaunchPad : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALaunchPad();

	UPROPERTY(VisibleAnywhere)
		class UBoxComponent* BoxComponent;

	UPROPERTY(VisibleAnywhere)
		class ADecadeCharacter* Player;

	UPROPERTY(VisibleAnywhere)
		FVector Impulse;

	UPROPERTY(EditAnywhere)
		float UpForce;

	UPROPERTY(EditAnywhere)
		float ForwardForce;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

};
