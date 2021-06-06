// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "CharacterAttributeSet.generated.h"

/**
 * 
 */
#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

UCLASS()
class TYYNE_API UCharacterAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
	
public:
	void PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData& Data) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Character")
	FGameplayAttributeData Health;
	/* Getters and setters for Health */
	ATTRIBUTE_ACCESSORS(UCharacterAttributeSet, Health);

	/** Max Health. Used as a workaround for the Min/Max values not being available in the base implementation? TODO: Research Min/Max */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Character")
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(UCharacterAttributeSet, MaxHealth);


};
