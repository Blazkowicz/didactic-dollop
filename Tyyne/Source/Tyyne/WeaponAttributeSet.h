// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "WeaponAttributeSet.generated.h"

/**
 * 
 */

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

UCLASS()
class TYYNE_API UWeaponAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:
	void PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData& Data) override;

	// Common Weapon Attributes
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Weapon")
	FGameplayAttributeData BaseDamage;
	ATTRIBUTE_ACCESSORS(UWeaponAttributeSet, BaseDamage);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Weapon")
	FGameplayAttributeData BaseFireRate;
	ATTRIBUTE_ACCESSORS(UWeaponAttributeSet, BaseFireRate);

	


	// Melee Attributes
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Weapon")
	FGameplayAttributeData Durability;
	ATTRIBUTE_ACCESSORS(UWeaponAttributeSet, Durability);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Weapon")
	FGameplayAttributeData MaxDurability;
	ATTRIBUTE_ACCESSORS(UWeaponAttributeSet, MaxDurability);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Weapon|Melee")
	FGameplayAttributeData Sharpness;
	ATTRIBUTE_ACCESSORS(UWeaponAttributeSet, Sharpness);

	// Ranged Attributes
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Weapon|Ranged")
	FGameplayAttributeData Magazine;
	ATTRIBUTE_ACCESSORS(UWeaponAttributeSet, Magazine);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Weapon|Ranged")
	FGameplayAttributeData Spread;
	ATTRIBUTE_ACCESSORS(UWeaponAttributeSet, Spread);
};
