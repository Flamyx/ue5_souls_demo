// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "SoulsDemo.h"
#include "RuneGameplayAbility.generated.h"

/**
 * 
 */
UCLASS()
class SOULSDEMO_API URuneGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()

public:
	URuneGameplayAbility();

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Ability")
		EGASAbilityInputID AbilityInputID = EGASAbilityInputID::None;

	
};
