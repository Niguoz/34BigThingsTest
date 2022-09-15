// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShooterGame.h"
#include "Player/ShooterCharacterMovement.h"

//----------------------------------------------------------------------//
// UPawnMovementComponent
//----------------------------------------------------------------------//
UShooterCharacterMovement::UShooterCharacterMovement(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}


float UShooterCharacterMovement::GetMaxSpeed() const
{
	float MaxSpeed = Super::GetMaxSpeed();

	const AShooterCharacter* ShooterCharacterOwner = Cast<AShooterCharacter>(PawnOwner);
	if (ShooterCharacterOwner)
	{
		if (ShooterCharacterOwner->IsTargeting())
		{
			MaxSpeed *= ShooterCharacterOwner->GetTargetingSpeedModifier();
		}
		if (ShooterCharacterOwner->IsRunning())
		{
			MaxSpeed *= ShooterCharacterOwner->GetRunningSpeedModifier();
		}
	}

	return MaxSpeed;
}

#pragma region Jetpack
void UShooterCharacterMovement::PerformMovement(float DeltaTime)
{
	AShooterCharacter* owner = Cast<AShooterCharacter>(PawnOwner);

	if (owner)
	{
		if (owner->bIsJetpackUse)
		{
			JetpackFuel -= DeltaTime;

			if (JetpackFuel < 0)
			{
				owner->OnStopJetpack();
			}

			Velocity.Z += JetpackSpeed;
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Blue, FString::Printf(TEXT("Fuel %d"), JetpackFuel));
			JetpackFuel += JetpackRefillRate*DeltaTime;
			if (JetpackFuel >= JetpackMaxFuel)
			{
				JetpackFuel = JetpackMaxFuel;
			}
		}

		owner->SetJetpackInfo(JetpackSpeed, JetpackMaxFuel, JetpackRefillRate, JetpackFuel);
	}

	Super::PerformMovement(DeltaTime);
}
#pragma endregion
