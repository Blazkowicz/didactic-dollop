// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include <Engine/DataTable.h>
#include "ItemBase.h"
#include "InventoryComponent.generated.h"

USTRUCT(BlueprintType)
struct FItemData : public FTableRowBase
{
	GENERATED_BODY()
public:
	FItemData()
	{}
	FItemData(FName id, FName name, float weight, int32 stacks, int32 uses)
	{
		Id = id;
		Name = name;
		Weight = weight;
		Stacks = stacks;
		Uses = uses;
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
	bool AddToInventory(AItemBase* item);

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
	void EquipFromInventory(uint8 index, FName slot);

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
