// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTagContainer;
class UGameplayAbility;
#ifdef TYYNE_TyyneCharacter_generated_h
#error "TyyneCharacter.generated.h already included, missing '#pragma once' in TyyneCharacter.h"
#endif
#define TYYNE_TyyneCharacter_generated_h

#define Tyyne_Source_Tyyne_TyyneCharacter_h_15_SPARSE_DATA
#define Tyyne_Source_Tyyne_TyyneCharacter_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCancelAbilityWithTags); \
	DECLARE_FUNCTION(execActivateAbility); \
	DECLARE_FUNCTION(execGrantAbility); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execGetHealth);


#define Tyyne_Source_Tyyne_TyyneCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCancelAbilityWithTags); \
	DECLARE_FUNCTION(execActivateAbility); \
	DECLARE_FUNCTION(execGrantAbility); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execGetHealth);


#define Tyyne_Source_Tyyne_TyyneCharacter_h_15_EVENT_PARMS \
	struct TyyneCharacter_eventOnHealthChanged_Parms \
	{ \
		float oldValue; \
		float newValue; \
	};


#define Tyyne_Source_Tyyne_TyyneCharacter_h_15_CALLBACK_WRAPPERS
#define Tyyne_Source_Tyyne_TyyneCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATyyneCharacter(); \
	friend struct Z_Construct_UClass_ATyyneCharacter_Statics; \
public: \
	DECLARE_CLASS(ATyyneCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tyyne"), NO_API) \
	DECLARE_SERIALIZER(ATyyneCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ATyyneCharacter*>(this); }


#define Tyyne_Source_Tyyne_TyyneCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATyyneCharacter(); \
	friend struct Z_Construct_UClass_ATyyneCharacter_Statics; \
public: \
	DECLARE_CLASS(ATyyneCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tyyne"), NO_API) \
	DECLARE_SERIALIZER(ATyyneCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ATyyneCharacter*>(this); }


#define Tyyne_Source_Tyyne_TyyneCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATyyneCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATyyneCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATyyneCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATyyneCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATyyneCharacter(ATyyneCharacter&&); \
	NO_API ATyyneCharacter(const ATyyneCharacter&); \
public:


#define Tyyne_Source_Tyyne_TyyneCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATyyneCharacter(ATyyneCharacter&&); \
	NO_API ATyyneCharacter(const ATyyneCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATyyneCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATyyneCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATyyneCharacter)


#define Tyyne_Source_Tyyne_TyyneCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ATyyneCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ATyyneCharacter, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__AttributeSet() { return STRUCT_OFFSET(ATyyneCharacter, AttributeSet); }


#define Tyyne_Source_Tyyne_TyyneCharacter_h_12_PROLOG \
	Tyyne_Source_Tyyne_TyyneCharacter_h_15_EVENT_PARMS


#define Tyyne_Source_Tyyne_TyyneCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tyyne_Source_Tyyne_TyyneCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	Tyyne_Source_Tyyne_TyyneCharacter_h_15_SPARSE_DATA \
	Tyyne_Source_Tyyne_TyyneCharacter_h_15_RPC_WRAPPERS \
	Tyyne_Source_Tyyne_TyyneCharacter_h_15_CALLBACK_WRAPPERS \
	Tyyne_Source_Tyyne_TyyneCharacter_h_15_INCLASS \
	Tyyne_Source_Tyyne_TyyneCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tyyne_Source_Tyyne_TyyneCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tyyne_Source_Tyyne_TyyneCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	Tyyne_Source_Tyyne_TyyneCharacter_h_15_SPARSE_DATA \
	Tyyne_Source_Tyyne_TyyneCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Tyyne_Source_Tyyne_TyyneCharacter_h_15_CALLBACK_WRAPPERS \
	Tyyne_Source_Tyyne_TyyneCharacter_h_15_INCLASS_NO_PURE_DECLS \
	Tyyne_Source_Tyyne_TyyneCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TYYNE_API UClass* StaticClass<class ATyyneCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tyyne_Source_Tyyne_TyyneCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
