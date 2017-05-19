// Copright Bob Player 2017

#include "BattleTank.h"
#include "Tank.h"
#include "TankAIController.h"

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();

}

void ATankAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	auto PlayerTank = Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());
	auto ControlledTank = Cast<ATank>(GetPawn());
	if (ensure(PlayerTank))
	{
		///Move towards player
		MoveToActor(PlayerTank, AcceptanceRadius);	//TODO Check radius is in cms
		/// Aim at the player
		ControlledTank->AimAt(PlayerTank->GetActorLocation());

		//ControlledTank->Fire();	//TODO Limit firing rate
	}
}




