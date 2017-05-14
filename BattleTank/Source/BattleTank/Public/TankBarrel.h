// Copright Bob Player 2017

#pragma once

#include "Components/StaticMeshComponent.h"
#include "TankBarrel.generated.h"

/**
 * 
 */
UCLASS( meta = (BlueprintSpawnableComponent))
class BATTLETANK_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:
	//-1 is max downward movement & +1 is max upward movement
	void Elevate(float RelativeSpeed);

private:
	UPROPERTY(EditAnywhere, Category = Setup)
	float MaxDegreesPerSecond = 10.0f;	
	
	UPROPERTY(EditAnywhere, Category = Setup)
	float MaxElevationDegrees = 40.0f;	

	UPROPERTY(EditAnywhere, Category = Setup)
	float MinElevationDegrees = 0.0f;	
};
