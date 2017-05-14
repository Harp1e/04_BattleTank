// Copright Bob Player 2017

#pragma once

#include "AIController.h"
#include "TankAIController.generated.h"

// Forward Declaration
class Atank;

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
private:
	
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	ATank* GetControlledTank() const;
	ATank* GetPlayerTank() const;
	
};
