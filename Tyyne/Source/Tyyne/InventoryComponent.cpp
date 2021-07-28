// Fill out your copyright notice in the Description page of Project Settings.

#include "InventoryComponent.h"
#include "EquipableBase.h"
#include "TyyneCharacter.h"


FItemData::FItemData(AItemBase* item)
{
	Id = item->GetId();
	Name = item->GetName();
	Weight = item->GetWeight();
	Stacks = item->GetStacks();
	Uses = item->GetUses();
	AEquipableBase* equip = Cast<AEquipableBase>(item);
	if(equip)
	{
		Slot = equip->GetSlot();
	}
	else
	{
		Slot = "None";
	}
}

FEquipmentData::FEquipmentData(AEquipableBase* equip)
	: FItemData(equip)
{
	Slot = equip->GetSlot();
}

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
	Player = Cast<ATyyneCharacter>(GetOwner());
	if (!Player)
	{
		UE_LOG(LogTemp, Warning, TEXT("Owning Character Invalid"));
	}
	
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
		AEquipableBase* equip = Cast<AEquipableBase>(item);
		FItemData ItemStruct;
		if (equip)
		{
			ItemStruct = FEquipmentData(equip);
		}
		else
		{
			ItemStruct = FItemData(item);
		}
		
		
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
		item->Destroy();
		return true;
	}
	
	return false;
}

void UInventoryComponent::AddStructToInventory(FItemData item)
{
	//FEquipmentData* equip = Cast<FEquipmentData>(&item);

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
	FItemData* equip = &Items[index];
	if (equip && equip->Slot.Compare(slot) == 0)
	{
		if (!Equipment.Find(slot)->Id.IsNone())
		{
			AddStructToInventory(*Equipment.Find(slot));
		}
		Equipment.Emplace(slot, Items[index]);
		RemoveFromInventory(index);
		return true;
	}
	
	return false;
}
