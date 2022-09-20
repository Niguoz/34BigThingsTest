// Fill out your copyright notice in the Description page of Project Settings.

#include "ShooterGame.h"
#include "Pickups/ShooterPickUp_AmmoDeath.h"

void AShooterPickUp_AmmoDeath::GetAmmo(const int ammoClip, TSubclassOf<AShooterWeapon> type)
{
	AmmoClips = ammoClip;
	WeaponType = type;
}

void AShooterPickUp_AmmoDeath::GivePickupTo(class AShooterCharacter* Pawn)
{
	GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Yellow, FString::Printf(TEXT("Clips: %d for " ), AmmoClips));
	
	Super::GivePickupTo(Pawn);
}