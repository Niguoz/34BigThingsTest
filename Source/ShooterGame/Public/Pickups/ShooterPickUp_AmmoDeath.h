// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pickups/ShooterPickup_Ammo.h"
#include "ShooterPickUp_AmmoDeath.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTERGAME_API AShooterPickUp_AmmoDeath : public AShooterPickup_Ammo
{
	GENERATED_BODY()

	void GetAmmo(const int ammoClip, TSubclassOf<AShooterWeapon> type);

	virtual void GivePickupTo(AShooterCharacter* Pawn) override;
};
