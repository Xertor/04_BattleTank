// Mario Arsenov Copyright 2017

#pragma once

#include "AIController.h"
#include "TankAIController.generated.h"

/**
 * 
 */
class UTankAimingComponent;

UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
private:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	virtual void BeginPlay() override;

	// How close can the AI tank get
	float AcceptanceRadius = 3000;


};
