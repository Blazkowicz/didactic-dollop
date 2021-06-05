// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterAttributeSet.h"
#include "GameplayEffect.h"
#include "GameplayEffectExtension.h"

//This function should handle logic that should happen after GameplayEffect is applied to the ASC that owns this AttributeSet. In effect it listens for changes to happen.
void UCharacterAttributeSet::PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);
	//Clamp the Health based on Max Health.
	if (Data.EvaluatedData.Attribute == GetHealthAttribute())
	{
		SetHealth(FMath::Clamp(GetHealth(), 0.f, GetMaxHealth()));
	}
	
}