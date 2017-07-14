// Mario Arsenov Copyright 2017

#pragma once

#include "AIController.h"
#include "TankAIController.generated.h"

/**
 * 
 */
class ATank;

UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	virtual void BeginPlay() override;

private:
	ATank* GetAIControlledTank() const;

	ATank* GetPlayerTank() const;	
};
