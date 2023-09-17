// Fill out your copyright notice in the Description page of Project Settings.


#include "GASAttributeSet.h"
#include <Net/UnrealNetwork.h>

UGASAttributeSet::UGASAttributeSet()
{
}

FGameplayAttribute UGASAttributeSet::HealthAttribute()
{
	static UProperty* Property = FindFieldChecked<UProperty>(UGASAttributeSet::StaticClass(), GET_MEMBER_NAME_CHECKED(UGASAttributeSet, Health));
	return FGameplayAttribute(Property);
}

FGameplayAttribute UGASAttributeSet::StaminaAttribute()
{
	static UProperty* Property = FindFieldChecked<UProperty>(UGASAttributeSet::StaticClass(), GET_MEMBER_NAME_CHECKED(UGASAttributeSet, Stamina));
	return FGameplayAttribute(Property);
}

FGameplayAttribute UGASAttributeSet::SpecialAttribute()
{
	static UProperty* Property = FindFieldChecked<UProperty>(UGASAttributeSet::StaticClass(), GET_MEMBER_NAME_CHECKED(UGASAttributeSet, Special));
	return FGameplayAttribute(Property);

}

void UGASAttributeSet::OnRep_Health(const FGameplayAttributeData& OldHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UGASAttributeSet, Health, OldHealth);
}

void UGASAttributeSet::OnRep_Stamina(const FGameplayAttributeData& OldStamina)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UGASAttributeSet, Stamina, OldStamina);
}

void UGASAttributeSet::OnRep_Special(const FGameplayAttributeData& OldSpecial)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UGASAttributeSet, Special, OldSpecial);
}

void UGASAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(UGASAttributeSet, Health, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UGASAttributeSet, Stamina, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UGASAttributeSet, Special, COND_None, REPNOTIFY_Always);

}
