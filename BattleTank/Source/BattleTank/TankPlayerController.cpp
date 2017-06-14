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

void ATankPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	AimTowardsCrosshair();
};


ATank* ATankPlayerController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
};

void ATankPlayerController::AimTowardsCrosshair()
{
	if (!GetControlledTank()) { return; }

	// Get world location if linetrace through crosshair
	// If it hits the landscape
		// Tell controlled tank to aim at this point
};

