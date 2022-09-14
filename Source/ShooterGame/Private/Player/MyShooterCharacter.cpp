// Fill out your copyright notice in the Description page of Project Settings.

#include "ShooterGame.h"
#include "Player/MyShooterCharacter.h"

float AMyShooterCharacter::Jetpack(bool bIsFlying, float positionY) 
{
	if (bIsFlying)
	{
		return positionY * 1.25f;
	}
	else
	{
		return positionY;
	}
}