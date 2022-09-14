// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Player/ShooterCharacter.h"
#include "MyShooterCharacter.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTERGAME_API AMyShooterCharacter : public AShooterCharacter
{
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable)
		float Jetpack(bool bIsFlying, float positionY);
};
