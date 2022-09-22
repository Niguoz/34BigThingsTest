// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pickups/ShooterPickup_Ammo.h"
#include "Weapons/ShooterWeapon.h"
#include "ShooterPickUp_AmmoDeath.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTERGAME_API AShooterPickUp_AmmoDeath : public AShooterPickup_Ammo
{
	GENERATED_BODY()

public:
	void GetAmmo(int ammoClip, AShooterWeapon* weapon);

	UFUNCTION(BlueprintCallable)
	void DestroyAmmo(float DeltaTime);

	UPROPERTY(EditAnywhere, Category = Pickup)
		float LifeTime;

	virtual void GivePickupTo(AShooterCharacter* Pawn) override;
};
