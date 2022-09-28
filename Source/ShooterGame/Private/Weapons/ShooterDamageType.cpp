// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShooterGame.h"
#include "Weapons/ShooterDamageType.h"

UShooterDamageType::UShooterDamageType(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	Super::bCanFreeze = bFreezeProj;
}

/*bool UShooterDamageType::GetCanFreeze()
{
	return bCanFreeze;
}*/