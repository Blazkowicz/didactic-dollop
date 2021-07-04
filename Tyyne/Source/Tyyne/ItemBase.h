// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "ItemBase.generated.h"

UCLASS()
class TYYNE_API AItemBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItemBase();

	

	UFUNCTION(BlueprintPure, Category = "Item")
	FName GetId() const;

	UFUNCTION(BlueprintPure, Category = "Item")
	FName GetName() const;

	UFUNCTION(BlueprintPure, Category = "Item")
	float GetWeight() const;

	UFUNCTION(BlueprintPure, Category = "Item")
	int32 GetStacks() const;

	UFUNCTION(BlueprintPure, Category = "Item")
	int32 GetMaxStacks() const;

	UFUNCTION(BlueprintPure, Category = "Item")
	int32 GetUses() const;



	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Item")
	FName Id;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Item")
	FName Name;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Item")
	float Weight;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Item")
	int32 Stacks;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Item")
	int32 MaxStacks;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Item")
	int32 Uses;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Item")
	UStaticMeshComponent* Mesh;

};
