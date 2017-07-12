// Mario Arsenov Copyright 2017

#pragma once

#include "Components/ActorComponent.h"
#include "TankAimingComponent.generated.h"

class UTankBarrel; // Forward Declaration

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BATTLETANK_API UTankAimingComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTankAimingComponent();
	void AimAt(FVector HitLocation, float LaunchSpeed);

	// TODO Add SetTurretReference

	void SetBarrelReference(UTankBarrel* BarrelToSet);

protected:

private:

	UTankBarrel* Barrel = nullptr;

	void MoveBarrelTowards(FVector& AimDirection);
	
};
