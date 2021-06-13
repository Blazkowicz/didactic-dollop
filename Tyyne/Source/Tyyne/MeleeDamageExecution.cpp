// Fill out your copyright notice in the Description page of Project Settings.


#include "MeleeDamageExecution.h"
#include "CharacterAttributeSet.h"
#include "WeaponAttributeSet.h"
#include "AbilitySystemComponent.h"

struct FMeleeDamageStatics
{
	//Capturedef declarations for attributes.
	DECLARE_ATTRIBUTE_CAPTUREDEF(BaseDamage);
	DECLARE_ATTRIBUTE_CAPTUREDEF(Health);

	//Default constructor.
	FMeleeDamageStatics()
	{
		//Capturedef definitions for attributes. 

		//Strength and weapon damage from the Source of the Gameplay Effect running this calculation. Snapshotted at the moment the calculation is made.
		DEFINE_ATTRIBUTE_CAPTUREDEF(UWeaponAttributeSet, BaseDamage, Source, true);

		DEFINE_ATTRIBUTE_CAPTUREDEF(UCharacterAttributeSet, Health, Target, false);
	}

};

//Static helper function to quickly fetch the melee damage capture attributes.
static const FMeleeDamageStatics& MeleeDamageStatics()
{
	static FMeleeDamageStatics DmgStatics;
	return DmgStatics;
}

UMeleeDamageExecution::UMeleeDamageExecution()
{
	RelevantAttributesToCapture.Add(MeleeDamageStatics().BaseDamageDef);
}

void UMeleeDamageExecution::Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams, OUT FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const
{
	UAbilitySystemComponent* TargetABSC = ExecutionParams.GetTargetAbilitySystemComponent();
	AActor* TargetActor = TargetABSC ? TargetABSC->GetAvatarActor() : nullptr;

	UAbilitySystemComponent* SourceABSC = ExecutionParams.GetSourceAbilitySystemComponent();
	AActor* SourceActor = SourceABSC ? SourceABSC->GetAvatarActor() : nullptr;

	//Get the owning GameplayEffect Spec to use its variables and tags.
	const FGameplayEffectSpec& Spec = ExecutionParams.GetOwningSpec();
	const FGameplayTagContainer* SourceTags = Spec.CapturedSourceTags.GetAggregatedTags();
	const FGameplayTagContainer* TargetTags = Spec.CapturedTargetTags.GetAggregatedTags();

	//Aggregator Evaluate Parameters used during the attribute capture.
	FAggregatorEvaluateParameters EvaluationParameters;
	EvaluationParameters.SourceTags = SourceTags;
	EvaluationParameters.TargetTags = TargetTags;

	//Capturing the weapon damage.
	float BaseDamage = 0.f;
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(MeleeDamageStatics().BaseDamageDef, EvaluationParameters, BaseDamage);

	//Final execution output. We can add more than one AddOutputModifier to change multiple parameters at a time based on more complicated calculations. Here we apply -DamageDone to to Health. Health itself is clamped in the AttributeSet.
	OutExecutionOutput.AddOutputModifier(FGameplayModifierEvaluatedData(MeleeDamageStatics().HealthProperty, EGameplayModOp::Additive, -BaseDamage));
}
