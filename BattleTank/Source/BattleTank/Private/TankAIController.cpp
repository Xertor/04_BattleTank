// Mario Arsenov Copyright 2017

#include "BattleTank.h"
#include "TankAIController.h"


void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("AIController BeginPlay."));
	GetAIControlledTank();
	if (!GetAIControlledTank())
	{
		UE_LOG(LogTemp, Warning, TEXT("No AI possessed tank found."));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Found possessed AI tank: %s."), *GetPawn()->GetName());
	}
};


ATank* ATankAIController::GetAIControlledTank() const
{
	return Cast<ATank>(GetPawn());
};

