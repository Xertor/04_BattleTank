// Mario Arsenov Copyright 2017

#include "BattleTank.h"
#include "TankAIController.h"


void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
	GetPlayerTank();
	if (!GetPlayerTank())
	{
		UE_LOG(LogTemp, Warning, TEXT("Player not possessing a tank."));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Player possessing: %s"), *GetWorld()->GetFirstPlayerController()->GetName());
	}
};


ATank* ATankAIController::GetAIControlledTank() const
{
	return Cast<ATank>(GetPawn());
};

ATank* ATankAIController::GetPlayerTank() const 
{
	return Cast<ATank>(GetPawn());
};

