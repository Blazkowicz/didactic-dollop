// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponBase.h"
#include "AbilitySystemComponent.h"
#include "WeaponAttributeSet.h"

// Sets default values
AWeaponBase::AWeaponBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("Ability System Component"));
}

// Called when the game starts or when spawned
void AWeaponBase::BeginPlay()
{
	Super::BeginPlay();
	//Initialize the attribute set using a data table
	if (IsValid(AbilitySystemComponent))
	{
		AttributeSet = AbilitySystemComponent->GetSet<UWeaponAttributeSet>();
	}
}

float AWeaponBase::GetBaseDamage() const
{
	if (IsValid(AttributeSet))
	{
		return AttributeSet->GetBaseDamage();
	}

	return -1.0f;
}

float AWeaponBase::GetBaseFireRate() const
{
	if (IsValid(AttributeSet))
	{
		return AttributeSet->GetBaseFireRate();
	}

	return -1.0f;
}

void AWeaponBase::GrantAbility(TSubclassOf<UGameplayAbility> AbilityClass, int32 Level, int32 InputCode)
{
	if (GetLocalRole() == ROLE_Authority && IsValid(AbilitySystemComponent) && IsValid(AbilityClass))
	{
		UGameplayAbility* Ability = AbilityClass->GetDefaultObject<UGameplayAbility>();

		if (IsValid(Ability))
		{
			// creates the new ability spec struct which contains metadata about the ability (like what level they're set to, as well as a reference to the ability)
			FGameplayAbilitySpec AbilitySpec(
				Ability,
				Level,
				InputCode
			);

			AbilitySystemComponent->GiveAbility(AbilitySpec);
		}
	}
}

void AWeaponBase::ActivateAbility(int32 InputCode)
{
	if (IsValid(AbilitySystemComponent))
	{
		AbilitySystemComponent->AbilityLocalInputPressed(InputCode);
	}
}

void AWeaponBase::CancelAbilityWithTags(const FGameplayTagContainer CancelWithTags)
{
	//Use tags to cancel abilities where possible
	AbilitySystemComponent->CancelAbilities(&CancelWithTags);
}





