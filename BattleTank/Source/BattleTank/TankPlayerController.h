// Mario Arsenov Copyright 2017

#pragma once

#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h" // Must be the last include

/**
 * 
 */
class ATank;

UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	virtual void BeginPlay() override;
	
	virtual void Tick(float DeltaTime) override;

private:
	ATank* GetControlledTank() const;	
	
	// Start the tank moving the barrel so that a shot would hit it where
	// the crosshair intersects the world
	void AimTowardsCrosshair();
	
	bool GetSightRayHitLocation(FVector& OutHitLocation) const;

	UPROPERTY(EditDefaultsOnly)
	float CrosshairXLocation = 0.5f;

	UPROPERTY(EditDefaultsOnly)
	float CrosshairYLocation = 0.33333f;

	UPROPERTY(EditDefaultsOnly)
	float LineTraceRange = 1000000.f;

	bool GetLookDirection(FVector2D ScreenLocation, FVector& LookDirection) const;

	bool GetLookVectorHitLocation(FVector LookDirection, FVector& HitLocation) const;

};
