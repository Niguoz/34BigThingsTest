// Copyright Epic Games, Inc. All Rights Reserved.

/**
 * Movement component meant for use with Pawns.
 */

#pragma once
#include "ShooterCharacterMovement.generated.h"

UCLASS()
class UShooterCharacterMovement : public UCharacterMovementComponent
{
	GENERATED_UCLASS_BODY()

	virtual float GetMaxSpeed() const override;

#pragma region Jetpack
	virtual void PerformMovement(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = Jetpack)
		float JetpackSpeed;

	UPROPERTY(EditAnywhere, Category = Jetpack)
		float JetpackMaxFuel; 

	UPROPERTY(EditAnywhere, Category = Jetpack)
		float JetpackRefillRate;

	UPROPERTY(EditAnywhere, Category = Jetpack)
		float JetpackFuel;
#pragma endregion

};