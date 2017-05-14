// Copright Bob Player 2017

#pragma once

#include "Components/ActorComponent.h"
#include "TankAimingComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BATTLETANK_API UTankAimingComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	/// Sets default values for this component's properties
	UTankAimingComponent();

	void SetBarrelReference(UStaticMeshComponent* BarrelToSet);
	
	// TODO Set Turret reference

	void AimAt(FVector HitLocation, float LaunchSpeed);
	
private:
	void MoveBarrelTowards(FVector AimDirection);

	UStaticMeshComponent* Barrel = nullptr;

};
