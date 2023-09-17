// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AttributeSet.h"
#include "AttributeDataAsset.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class GAS_IMPLEMENTATION_API UAttributeDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
	TArray<FGameplayAttributeData> Attributes;
	
};