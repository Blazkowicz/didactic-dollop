// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "ItemAttributeSet.generated.h"

/**
 * 
 */

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

UCLASS()
class TYYNE_API UItemAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
	
public:
	void PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData& Data) override;

	// Common Item Attributes
	// Weight in grams
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Weapon")
	FGameplayAttributeData Weight;
	ATTRIBUTE_ACCESSORS(UItemAttributeSet, Weight);

	// Max stacks, 1 = non stackable
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Weapon")
	FGameplayAttributeData MaxStacks;
	ATTRIBUTE_ACCESSORS(UItemAttributeSet, MaxStacks);

	// Max number of uses, -1 = unlimited uses
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Weapon")
	FGameplayAttributeData Uses;
	ATTRIBUTE_ACCESSORS(UItemAttributeSet, Uses);

};
