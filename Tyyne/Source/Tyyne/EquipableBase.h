// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ItemBase.h"
#include "EquipableBase.generated.h"

/**
 * 
 */
UCLASS()
class TYYNE_API AEquipableBase : public AItemBase
{
	GENERATED_BODY()
public:
	AEquipableBase();

	UFUNCTION(BlueprintPure, Category = "Item")
	FName GetSlot() const;

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Item")
	FName Slot;
};
