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

// Called every frame
void ATankAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (GetPlayerTank())
	{
		// TODO Move towards the player

		// Aim towards the player
		GetAIControlledTank()->AimAt(GetPlayerTank()->GetActorLocation());

		// Fire if ready
	}
	
}


ATank* ATankAIController::GetAIControlledTank() const
{
	return Cast<ATank>(GetPawn());
};

ATank* ATankAIController::GetPlayerTank() const
{
	auto PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
	if (!PlayerPawn) { return nullptr; } // Note the !, very important
	return Cast<ATank>(PlayerPawn);
};

