// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)

enum class EGASAbilityInput : uint8
{
	None,
	Confirm,
	Cancel,
	Punch, 
	Sprint,
};