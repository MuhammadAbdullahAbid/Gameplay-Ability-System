// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "GAS_Implementation/GAS_Implementation.h"
#include "GASGameplayAbility.generated.h"


/**
 * 
 */
UCLASS()
class GAS_IMPLEMENTATION_API UGASGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()

public:
	UGASGameplayAbility();

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Ability")
	EGASAbilityInput AbilityInputID = EGASAbilityInput::None;

	
};
