// Mario Arsenov Copyright 2017

#include "BattleTank.h"
#include "TankPlayerController.h"

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("PlayerController BeginPlay."));
	GetControlledTank();
	if (!GetControlledTank())
	{
		UE_LOG(LogTemp, Warning, TEXT("No possessed tank found."));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Found possessed tank %s."), *GetPawn()->GetName());
	}
};


ATank* ATankPlayerController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
};
