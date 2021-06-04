// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tyyne/TyyneGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTyyneGameMode() {}
// Cross Module References
	TYYNE_API UClass* Z_Construct_UClass_ATyyneGameMode_NoRegister();
	TYYNE_API UClass* Z_Construct_UClass_ATyyneGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Tyyne();
// End Cross Module References
	void ATyyneGameMode::StaticRegisterNativesATyyneGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATyyneGameMode_NoRegister()
	{
		return ATyyneGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATyyneGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATyyneGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Tyyne,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATyyneGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering LOD WorldPartition DataLayers Utilities|Transformation" },
		{ "IncludePath", "TyyneGameMode.h" },
		{ "ModuleRelativePath", "TyyneGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATyyneGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATyyneGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATyyneGameMode_Statics::ClassParams = {
		&ATyyneGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATyyneGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATyyneGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATyyneGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATyyneGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATyyneGameMode, 2907966115);
	template<> TYYNE_API UClass* StaticClass<ATyyneGameMode>()
	{
		return ATyyneGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATyyneGameMode(Z_Construct_UClass_ATyyneGameMode, &ATyyneGameMode::StaticClass, TEXT("/Script/Tyyne"), TEXT("ATyyneGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATyyneGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
