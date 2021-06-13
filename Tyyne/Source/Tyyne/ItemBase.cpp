// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemBase.h"

// Sets default values
AItemBase::AItemBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Item Mesh"));
}

FName AItemBase::GetId() const
{
	return Id;
}


FName AItemBase::GetName() const
{
	return Name;
}

float AItemBase::GetWeight() const
{
	return Weight;
}

int32 AItemBase::GetStacks() const
{
	return Stacks;
}

int32 AItemBase::GetMaxStacks() const
{
	return MaxStacks;
}

int32 AItemBase::GetUses() const
{
	return Uses;
}

// Called when the game starts or when spawned
void AItemBase::BeginPlay()
{
	Super::BeginPlay();
	
}



