// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tyyne/TyyneCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTyyneCharacter() {}
// Cross Module References
	TYYNE_API UClass* Z_Construct_UClass_ATyyneCharacter_NoRegister();
	TYYNE_API UClass* Z_Construct_UClass_ATyyneCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Tyyne();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	TYYNE_API UClass* Z_Construct_UClass_UCharacterAttributeSet_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATyyneCharacter::execCancelAbilityWithTags)
	{
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_CancelWithTags);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelAbilityWithTags(Z_Param_CancelWithTags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATyyneCharacter::execActivateAbility)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InputCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateAbility(Z_Param_InputCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATyyneCharacter::execGrantAbility)
	{
		P_GET_OBJECT(UClass,Z_Param_AbilityClass);
		P_GET_PROPERTY(FIntProperty,Z_Param_Level);
		P_GET_PROPERTY(FIntProperty,Z_Param_InputCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GrantAbility(Z_Param_AbilityClass,Z_Param_Level,Z_Param_InputCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATyyneCharacter::execGetMaxHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATyyneCharacter::execGetHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHealth();
		P_NATIVE_END;
	}
	static FName NAME_ATyyneCharacter_OnHealthChanged = FName(TEXT("OnHealthChanged"));
	void ATyyneCharacter::OnHealthChanged(float oldValue, float newValue)
	{
		TyyneCharacter_eventOnHealthChanged_Parms Parms;
		Parms.oldValue=oldValue;
		Parms.newValue=newValue;
		ProcessEvent(FindFunctionChecked(NAME_ATyyneCharacter_OnHealthChanged),&Parms);
	}
	void ATyyneCharacter::StaticRegisterNativesATyyneCharacter()
	{
		UClass* Class = ATyyneCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateAbility", &ATyyneCharacter::execActivateAbility },
			{ "CancelAbilityWithTags", &ATyyneCharacter::execCancelAbilityWithTags },
			{ "GetHealth", &ATyyneCharacter::execGetHealth },
			{ "GetMaxHealth", &ATyyneCharacter::execGetMaxHealth },
			{ "GrantAbility", &ATyyneCharacter::execGrantAbility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATyyneCharacter_ActivateAbility_Statics
	{
		struct TyyneCharacter_eventActivateAbility_Parms
		{
			int32 InputCode;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InputCode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATyyneCharacter_ActivateAbility_Statics::NewProp_InputCode = { "InputCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TyyneCharacter_eventActivateAbility_Parms, InputCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATyyneCharacter_ActivateAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATyyneCharacter_ActivateAbility_Statics::NewProp_InputCode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATyyneCharacter_ActivateAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
		{ "Comment", "/** Activates an ability with a matching input code */" },
		{ "ModuleRelativePath", "TyyneCharacter.h" },
		{ "ToolTip", "Activates an ability with a matching input code" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATyyneCharacter_ActivateAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATyyneCharacter, nullptr, "ActivateAbility", nullptr, nullptr, sizeof(TyyneCharacter_eventActivateAbility_Parms), Z_Construct_UFunction_ATyyneCharacter_ActivateAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATyyneCharacter_ActivateAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATyyneCharacter_ActivateAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATyyneCharacter_ActivateAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATyyneCharacter_ActivateAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATyyneCharacter_ActivateAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATyyneCharacter_CancelAbilityWithTags_Statics
	{
		struct TyyneCharacter_eventCancelAbilityWithTags_Parms
		{
			FGameplayTagContainer CancelWithTags;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CancelWithTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CancelWithTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATyyneCharacter_CancelAbilityWithTags_Statics::NewProp_CancelWithTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATyyneCharacter_CancelAbilityWithTags_Statics::NewProp_CancelWithTags = { "CancelWithTags", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TyyneCharacter_eventCancelAbilityWithTags_Parms, CancelWithTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_ATyyneCharacter_CancelAbilityWithTags_Statics::NewProp_CancelWithTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATyyneCharacter_CancelAbilityWithTags_Statics::NewProp_CancelWithTags_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATyyneCharacter_CancelAbilityWithTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATyyneCharacter_CancelAbilityWithTags_Statics::NewProp_CancelWithTags,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATyyneCharacter_CancelAbilityWithTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
		{ "Comment", "/** Cancels abilities with specific Gameplay Tags applied to them.*/" },
		{ "ModuleRelativePath", "TyyneCharacter.h" },
		{ "ToolTip", "Cancels abilities with specific Gameplay Tags applied to them." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATyyneCharacter_CancelAbilityWithTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATyyneCharacter, nullptr, "CancelAbilityWithTags", nullptr, nullptr, sizeof(TyyneCharacter_eventCancelAbilityWithTags_Parms), Z_Construct_UFunction_ATyyneCharacter_CancelAbilityWithTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATyyneCharacter_CancelAbilityWithTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATyyneCharacter_CancelAbilityWithTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATyyneCharacter_CancelAbilityWithTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATyyneCharacter_CancelAbilityWithTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATyyneCharacter_CancelAbilityWithTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATyyneCharacter_GetHealth_Statics
	{
		struct TyyneCharacter_eventGetHealth_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATyyneCharacter_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TyyneCharacter_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATyyneCharacter_GetHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATyyneCharacter_GetHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATyyneCharacter_GetHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "Comment", "/** Blueprint-accessible getter for the current health value. */" },
		{ "ModuleRelativePath", "TyyneCharacter.h" },
		{ "ToolTip", "Blueprint-accessible getter for the current health value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATyyneCharacter_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATyyneCharacter, nullptr, "GetHealth", nullptr, nullptr, sizeof(TyyneCharacter_eventGetHealth_Parms), Z_Construct_UFunction_ATyyneCharacter_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATyyneCharacter_GetHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATyyneCharacter_GetHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATyyneCharacter_GetHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATyyneCharacter_GetHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATyyneCharacter_GetHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATyyneCharacter_GetMaxHealth_Statics
	{
		struct TyyneCharacter_eventGetMaxHealth_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATyyneCharacter_GetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TyyneCharacter_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATyyneCharacter_GetMaxHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATyyneCharacter_GetMaxHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATyyneCharacter_GetMaxHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "Comment", "/** Blueprint-accessible getter for the max health value. */" },
		{ "ModuleRelativePath", "TyyneCharacter.h" },
		{ "ToolTip", "Blueprint-accessible getter for the max health value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATyyneCharacter_GetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATyyneCharacter, nullptr, "GetMaxHealth", nullptr, nullptr, sizeof(TyyneCharacter_eventGetMaxHealth_Parms), Z_Construct_UFunction_ATyyneCharacter_GetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATyyneCharacter_GetMaxHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATyyneCharacter_GetMaxHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATyyneCharacter_GetMaxHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATyyneCharacter_GetMaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATyyneCharacter_GetMaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATyyneCharacter_GrantAbility_Statics
	{
		struct TyyneCharacter_eventGrantAbility_Parms
		{
			TSubclassOf<UGameplayAbility>  AbilityClass;
			int32 Level;
			int32 InputCode;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityClass;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InputCode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ATyyneCharacter_GrantAbility_Statics::NewProp_AbilityClass = { "AbilityClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TyyneCharacter_eventGrantAbility_Parms, AbilityClass), Z_Construct_UClass_UGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATyyneCharacter_GrantAbility_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TyyneCharacter_eventGrantAbility_Parms, Level), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATyyneCharacter_GrantAbility_Statics::NewProp_InputCode = { "InputCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TyyneCharacter_eventGrantAbility_Parms, InputCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATyyneCharacter_GrantAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATyyneCharacter_GrantAbility_Statics::NewProp_AbilityClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATyyneCharacter_GrantAbility_Statics::NewProp_Level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATyyneCharacter_GrantAbility_Statics::NewProp_InputCode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATyyneCharacter_GrantAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
		{ "Comment", "/** Grants an ability at the given level, with an input code used to pick and choose which ability should be triggered. */" },
		{ "ModuleRelativePath", "TyyneCharacter.h" },
		{ "ToolTip", "Grants an ability at the given level, with an input code used to pick and choose which ability should be triggered." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATyyneCharacter_GrantAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATyyneCharacter, nullptr, "GrantAbility", nullptr, nullptr, sizeof(TyyneCharacter_eventGrantAbility_Parms), Z_Construct_UFunction_ATyyneCharacter_GrantAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATyyneCharacter_GrantAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATyyneCharacter_GrantAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATyyneCharacter_GrantAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATyyneCharacter_GrantAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATyyneCharacter_GrantAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATyyneCharacter_OnHealthChanged_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_oldValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_newValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATyyneCharacter_OnHealthChanged_Statics::NewProp_oldValue = { "oldValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TyyneCharacter_eventOnHealthChanged_Parms, oldValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATyyneCharacter_OnHealthChanged_Statics::NewProp_newValue = { "newValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TyyneCharacter_eventOnHealthChanged_Parms, newValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATyyneCharacter_OnHealthChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATyyneCharacter_OnHealthChanged_Statics::NewProp_oldValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATyyneCharacter_OnHealthChanged_Statics::NewProp_newValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATyyneCharacter_OnHealthChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "Comment", "//Blueprint-implementable On Health Changed event. Used to send information to the UI about current health.\n" },
		{ "ModuleRelativePath", "TyyneCharacter.h" },
		{ "ToolTip", "Blueprint-implementable On Health Changed event. Used to send information to the UI about current health." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATyyneCharacter_OnHealthChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATyyneCharacter, nullptr, "OnHealthChanged", nullptr, nullptr, sizeof(TyyneCharacter_eventOnHealthChanged_Parms), Z_Construct_UFunction_ATyyneCharacter_OnHealthChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATyyneCharacter_OnHealthChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATyyneCharacter_OnHealthChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATyyneCharacter_OnHealthChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATyyneCharacter_OnHealthChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATyyneCharacter_OnHealthChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATyyneCharacter_NoRegister()
	{
		return ATyyneCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ATyyneCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATyyneCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Tyyne,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATyyneCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATyyneCharacter_ActivateAbility, "ActivateAbility" }, // 364315945
		{ &Z_Construct_UFunction_ATyyneCharacter_CancelAbilityWithTags, "CancelAbilityWithTags" }, // 3233456968
		{ &Z_Construct_UFunction_ATyyneCharacter_GetHealth, "GetHealth" }, // 1824358667
		{ &Z_Construct_UFunction_ATyyneCharacter_GetMaxHealth, "GetMaxHealth" }, // 2094484236
		{ &Z_Construct_UFunction_ATyyneCharacter_GrantAbility, "GrantAbility" }, // 18020942
		{ &Z_Construct_UFunction_ATyyneCharacter_OnHealthChanged, "OnHealthChanged" }, // 3137078846
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATyyneCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TyyneCharacter.h" },
		{ "ModuleRelativePath", "TyyneCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATyyneCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TyyneCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATyyneCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATyyneCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATyyneCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATyyneCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATyyneCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TyyneCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATyyneCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATyyneCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATyyneCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATyyneCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATyyneCharacter_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "Abilities" },
		{ "Comment", "/** Ability System Component. ASC for short */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TyyneCharacter.h" },
		{ "ToolTip", "Ability System Component. ASC for short" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATyyneCharacter_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x00100000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATyyneCharacter, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATyyneCharacter_Statics::NewProp_AbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATyyneCharacter_Statics::NewProp_AbilitySystemComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATyyneCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "TyyneCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATyyneCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATyyneCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_ATyyneCharacter_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATyyneCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATyyneCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "TyyneCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATyyneCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATyyneCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_ATyyneCharacter_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATyyneCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATyyneCharacter_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "Comment", "/** Character Attribute Set. UPROPERTY macro required for reflection. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TyyneCharacter.h" },
		{ "NativeConst", "" },
		{ "ToolTip", "Character Attribute Set. UPROPERTY macro required for reflection." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATyyneCharacter_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATyyneCharacter, AttributeSet), Z_Construct_UClass_UCharacterAttributeSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATyyneCharacter_Statics::NewProp_AttributeSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATyyneCharacter_Statics::NewProp_AttributeSet_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATyyneCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATyyneCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATyyneCharacter_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATyyneCharacter_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATyyneCharacter_Statics::NewProp_BaseTurnRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATyyneCharacter_Statics::NewProp_BaseLookUpRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATyyneCharacter_Statics::NewProp_AttributeSet,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ATyyneCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ATyyneCharacter, IAbilitySystemInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATyyneCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATyyneCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATyyneCharacter_Statics::ClassParams = {
		&ATyyneCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATyyneCharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATyyneCharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATyyneCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATyyneCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATyyneCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATyyneCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATyyneCharacter, 1612066486);
	template<> TYYNE_API UClass* StaticClass<ATyyneCharacter>()
	{
		return ATyyneCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATyyneCharacter(Z_Construct_UClass_ATyyneCharacter, &ATyyneCharacter::StaticClass, TEXT("/Script/Tyyne"), TEXT("ATyyneCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATyyneCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
