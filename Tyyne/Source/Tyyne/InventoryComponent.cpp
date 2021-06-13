// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryComponent.h"

// Sets default values for this component's properties
UInventoryComponent::UInventoryComponent()
{
	PrimaryComponentTick.bCanEverTick = false;

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

bool UInventoryComponent::AddItemToInventory(AItemBase* item)
{
	if(item)
	{
		FItemData ItemStruct = FItemData(item);
		
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

void UInventoryComponent::AddStructToInventory(FItemData item)
{
	FItemData* ItemDataPtr = Items.FindByKey(item);
	if (ItemDataPtr)
	{
		ItemDataPtr->Stacks += item.Stacks;
	}
	else
	{
		Items.Add(item);
		Items.FindByKey(item)->Index = Items.Find(item);
	}
}

TArray<FItemData> UInventoryComponent::GetInventory()
{
	return Items;
}

TMap<FName, FItemData> UInventoryComponent::GetEquipment()
{
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

bool UInventoryComponent::EquipFromInventory(uint8 index, FName slot)
{
	if (Items[index].Slot.Compare(slot) == 0)
	{
		if (!Equipment.Find(slot)->Id.IsNone())
		{
			AddStructToInventory(*Equipment.Find(slot));
		}
		Equipment.Emplace(slot, Items[index]);
		RemoveFromInventory(index);
		return true;
	}
	else
	{
		return false;
	}
}
