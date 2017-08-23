// Mario Arsenov Copyright 2017

#pragma once

#include "AIController.h"
#include "TankAIController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
protected:
	// How close can the AI tank get
	UPROPERTY(EditAnywhere, Category = "Setup") // Consider EditDefaultsOnly
	float AcceptanceRadius = 8000;

private:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	virtual void BeginPlay() override;

};
