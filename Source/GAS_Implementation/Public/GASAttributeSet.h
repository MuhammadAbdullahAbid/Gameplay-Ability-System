// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "GASAttributeSet.generated.h"

// Uses macros from AttributeSet.h
#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)
	
UCLASS()
class GAS_IMPLEMENTATION_API UGASAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:
	UGASAttributeSet();

	UPROPERTY(BlueprintReadWrite, Category = "Health", ReplicatedUsing = "OnRep_Health")
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UGASAttributeSet, Health)

	UPROPERTY(BlueprintReadWrite, Category = "Stamina", ReplicatedUsing = "OnRep_Stamina")
	FGameplayAttributeData Stamina;
	ATTRIBUTE_ACCESSORS(UGASAttributeSet, Stamina)

	UPROPERTY(BlueprintReadWrite, Category = "Special", ReplicatedUsing = "OnRep_Special")
	FGameplayAttributeData Special;
	ATTRIBUTE_ACCESSORS(UGASAttributeSet, Special)

	UFUNCTION( Category = "Health")
	FGameplayAttribute HealthAttribute();
	UFUNCTION( Category = "Stamina")
	FGameplayAttribute StaminaAttribute();
	UFUNCTION( Category = "Special")
	FGameplayAttribute SpecialAttribute();

	UFUNCTION()
	virtual void OnRep_Health(const FGameplayAttributeData& OldHealth);
	UFUNCTION()
	virtual void OnRep_Stamina(const FGameplayAttributeData& OldStamina);
	UFUNCTION()
	virtual void OnRep_Special(const FGameplayAttributeData& OldSpecial);

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; 
};
