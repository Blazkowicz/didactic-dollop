// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "CharacterAttributeSet.generated.h"

/**
 * 
 */
UCLASS()
class TYYNE_API UCharacterAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
	
public:
	void PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData& Data) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Character")
	FGameplayAttributeData Health;
	/* Getters and setters for Health. The VALUE_GETTER macro creates a basic const function for getting the current value, the  */
	GAMEPLAYATTRIBUTE_VALUE_GETTER(Health);
	GAMEPLAYATTRIBUTE_VALUE_SETTER(Health);
	GAMEPLAYATTRIBUTE_VALUE_INITTER(Health);
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(UCharacterAttributeSet, Health);

	/** Max Health. Used as a workaround for the Min/Max values not being available in the base implementation of the attribute table */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Character")
	FGameplayAttributeData MaxHealth;
	GAMEPLAYATTRIBUTE_VALUE_GETTER(MaxHealth);
	GAMEPLAYATTRIBUTE_VALUE_SETTER(MaxHealth);
	GAMEPLAYATTRIBUTE_VALUE_INITTER(MaxHealth);
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(UCharacterAttributeSet, MaxHealth);


};
