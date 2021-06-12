// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryComponent.h"

// Sets default values for this component's properties
UInventoryComponent::UInventoryComponent()
{
	PrimaryComponentTick.bCanEverTick = false;

	UE_LOG(LogTemp, Warning, TEXT("Constructor of InvComp"));

	EquipmentSlots.Add(FName("Head"));
	EquipmentSlots.Add(FName("LeftArm"));
	EquipmentSlots.Add(FName("RightArm"));
	EquipmentSlots.Add(FName("LeftLeg"));
	EquipmentSlots.Add(FName("RightLeg"));

	for (auto slot : EquipmentSlots)
	{
		Equipment.Add(slot, FItemData());
	}
}


// Called when the game starts
void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	
}


void UInventoryComponent::UpdateIndex()
{
	for (uint8 i = 0; i < Items.Num(); i++)
	{
		Items[i].Index = i;
	}
}

bool UInventoryComponent::AddToInventory(AItemBase* item)
{
	if(item)
	{
		FItemData ItemStruct = FItemData(item->GetId(), item->GetName(), item->GetWeight(), item->GetStacks(), item->GetUses());
		
		FItemData* ItemDataPtr = Items.FindByKey(ItemStruct);
		if (ItemDataPtr)
		{
			ItemDataPtr->Stacks += ItemStruct.Stacks;
		}
		else
		{
			Items.Add(ItemStruct);
			Items.FindByKey(ItemStruct)->Index = Items.Find(ItemStruct);
		}
		return true;
	}
	return false;
}

TArray<FItemData> UInventoryComponent::GetInventory()
{
	return Items;
}

TMap<FName, FItemData> UInventoryComponent::GetEquipment()
{
	UE_LOG(LogTemp, Warning, TEXT("GetEquipment was called"));
	return Equipment;
}

float UInventoryComponent::GetInventoryWeight()
{
	float Weight = 0.f;
	for (FItemData item : Items)
	{
		Weight += item.Weight * item.Stacks;
	}
	return Weight;
}

void UInventoryComponent::RemoveFromInventory(uint8 index)
{
	Items.RemoveAt(index);
	UpdateIndex();
}

void UInventoryComponent::RemoveAmountFromInventory(uint8 index, int32 amount)
{
	if (Items[index].Stacks <= amount)
	{
		Items.RemoveAt(index);
		UpdateIndex();
	}
	else
	{
		Items[index].Stacks -= amount;
	}
}

void UInventoryComponent::EquipFromInventory(uint8 index, FName slot)
{
	UE_LOG(LogTemp, Warning, TEXT("EquipFromInventory was called"));
	Equipment.FindChecked(slot).Name = Items[index].Name;
	RemoveFromInventory(index);
}
