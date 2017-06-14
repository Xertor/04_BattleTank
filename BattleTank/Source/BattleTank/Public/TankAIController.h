// Mario Arsenov Copyright 2017

#pragma once

#include "Tank.h"
#include "AIController.h"
#include "TankAIController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
public:
	virtual void BeginPlay() override;

private:
	ATank* GetAIControlledTank() const;

	ATank* GetPlayerTank() const;	
};