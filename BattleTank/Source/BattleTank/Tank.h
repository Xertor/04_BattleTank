// Mario Arsenov Copyright 2017

#pragma once

#include "GameFramework/Pawn.h"
#include "Tank.generated.h" // Put new includes above 

// Forward Declerations
class UTankAimingComponent;
class UTankBarrel;
class UTankTurret;
class AProjectile;

UCLASS()
class BATTLETANK_API ATank : public APawn
{
	GENERATED_BODY()

public:
	void AimAt(FVector HitLocation);

	UFUNCTION(BlueprintCallable, Category = "Fire")
	void Fire();

protected:
	UPROPERTY(BlueprintReadOnly)
	UTankAimingComponent* TankAimingComponent = nullptr;

private:
	// Sets default values for this pawn's properties
	ATank();

	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, Category = "Setup")
	TSubclassOf<AProjectile> ProjectileBlueprint;
	
	// TODO remove once firing is moved to aiming component
	UPROPERTY(EditDefaultsOnly, Category = "Firing")
	float LaunchSpeed = 4000.f;

	UPROPERTY(EditDefaultsOnly, Category = "Firing")
	float ReloadTimeSeconds = 3;

	// Local barrel reference for spawning projectile
	UTankBarrel* Barrel = nullptr; //TODO remove

	double LastFireTime = 0;
};
