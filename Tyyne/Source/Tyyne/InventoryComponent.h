// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include <Engine/DataTable.h>
#include "EquipableBase.h"
#include "InventoryComponent.generated.h"

USTRUCT(BlueprintType)
struct FItemData : public FTableRowBase
{
	GENERATED_BODY()
public:
	FItemData()
	{}
	FItemData(AItemBase* item)
	{
		AEquipableBase* Equipable = Cast<AEquipableBase>(item);
		if (Equipable)
		{
			Slot = Equipable->GetSlot();
		}
		else
		{
			Slot = FName(TEXT("None"));
		}
		Id = item->GetId();
		Name = item->GetName();
		Weight = item->GetWeight();
		Stacks = item->GetStacks();
		Uses = item->GetUses();
	}
	void CopyItem(const FItemData& other)
	{
		UE_LOG(LogTemp, Warning, TEXT("Its getting called"));
		Id = other.Id;
		Name = other.Name;
		Weight = other.Weight;
	}
	FORCEINLINE void ClearStruct()
	{
		Id = "";
		Name = "";
		Weight = -1;
		Stacks = 0;
		Uses = 0;
	}

	FORCEINLINE bool operator==(const FItemData& other) const
	{
		return Id == other.Id;
	}
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 Index;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Slot;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Id;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Weight;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Stacks;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Uses;
};


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TYYNE_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInventoryComponent();

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	bool AddItemToInventory(AItemBase* item);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	void AddStructToInventory(FItemData item);

	UFUNCTION(BlueprintPure, Category = "Inventory")
	TArray<FItemData> GetInventory();

	UFUNCTION(BlueprintPure, Category = "Inventory")
	TMap<FName, FItemData> GetEquipment();

	UFUNCTION(BlueprintPure, Category = "Inventory")
	float GetInventoryWeight();

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	void RemoveFromInventory(uint8 index);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	void RemoveAmountFromInventory(uint8 index, int32 amount);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	bool EquipFromInventory(uint8 index, FName slot);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UDataTable* Data;

private:
	TArray<FItemData> Items;
	TArray<FName> EquipmentSlots;
	TMap<FName, FItemData> Equipment;

	void UpdateIndex();
};
