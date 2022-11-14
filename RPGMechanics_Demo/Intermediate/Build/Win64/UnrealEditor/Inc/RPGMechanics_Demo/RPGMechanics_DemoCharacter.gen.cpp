// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGMechanics_Demo/RPGMechanics_DemoCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGMechanics_DemoCharacter() {}
// Cross Module References
	RPGMECHANICS_DEMO_API UClass* Z_Construct_UClass_ARPGMechanics_DemoCharacter_NoRegister();
	RPGMECHANICS_DEMO_API UClass* Z_Construct_UClass_ARPGMechanics_DemoCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_RPGMechanics_Demo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void ARPGMechanics_DemoCharacter::StaticRegisterNativesARPGMechanics_DemoCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARPGMechanics_DemoCharacter);
	UClass* Z_Construct_UClass_ARPGMechanics_DemoCharacter_NoRegister()
	{
		return ARPGMechanics_DemoCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ARPGMechanics_DemoCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShortPressThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShortPressThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimpleMoveGoal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SimpleMoveGoal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMoveInputPressed_MetaData[];
#endif
		static void NewProp_bMoveInputPressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMoveInputPressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMoveInputReleased_MetaData[];
#endif
		static void NewProp_bMoveInputReleased_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMoveInputReleased;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PressFollowTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PressFollowTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARPGMechanics_DemoCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_RPGMechanics_Demo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGMechanics_DemoCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "RPGMechanics_DemoCharacter.h" },
		{ "ModuleRelativePath", "RPGMechanics_DemoCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGMechanics_DemoCharacter_Statics::NewProp_ShortPressThreshold_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "RPGMechanics_DemoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARPGMechanics_DemoCharacter_Statics::NewProp_ShortPressThreshold = { "ShortPressThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGMechanics_DemoCharacter, ShortPressThreshold), METADATA_PARAMS(Z_Construct_UClass_ARPGMechanics_DemoCharacter_Statics::NewProp_ShortPressThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGMechanics_DemoCharacter_Statics::NewProp_ShortPressThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGMechanics_DemoCharacter_Statics::NewProp_SimpleMoveGoal_MetaData[] = {
		{ "Category", "RPGMechanics_DemoCharacter" },
		{ "ModuleRelativePath", "RPGMechanics_DemoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARPGMechanics_DemoCharacter_Statics::NewProp_SimpleMoveGoal = { "SimpleMoveGoal", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGMechanics_DemoCharacter, SimpleMoveGoal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ARPGMechanics_DemoCharacter_Statics::NewProp_SimpleMoveGoal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGMechanics_DemoCharacter_Statics::NewProp_SimpleMoveGoal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGMechanics_DemoCharacter_Statics::NewProp_WorldDirection_MetaData[] = {
		{ "Category", "RPGMechanics_DemoCharacter" },
		{ "ModuleRelativePath", "RPGMechanics_DemoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARPGMechanics_DemoCharacter_Statics::NewProp_WorldDirection = { "WorldDirection", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGMechanics_DemoCharacter, WorldDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ARPGMechanics_DemoCharacter_Statics::NewProp_WorldDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGMechanics_DemoCharacter_Statics::NewProp_WorldDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGMechanics_DemoCharacter_Statics::NewProp_bMoveInputPressed_MetaData[] = {
		{ "Category", "RPGMechanics_DemoCharacter" },
		{ "ModuleRelativePath", "RPGMechanics_DemoCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ARPGMechanics_DemoCharacter_Statics::NewProp_bMoveInputPressed_SetBit(void* Obj)
	{
		((ARPGMechanics_DemoCharacter*)Obj)->bMoveInputPressed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARPGMechanics_DemoCharacter_Statics::NewProp_bMoveInputPressed = { "bMoveInputPressed", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARPGMechanics_DemoCharacter), &Z_Construct_UClass_ARPGMechanics_DemoCharacter_Statics::NewProp_bMoveInputPressed_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARPGMechanics_DemoCharacter_Statics::NewProp_bMoveInputPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGMechanics_DemoCharacter_Statics::NewProp_bMoveInputPressed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGMechanics_DemoCharacter_Statics::NewProp_bMoveInputReleased_MetaData[] = {
		{ "Category", "RPGMechanics_DemoCharacter" },
		{ "ModuleRelativePath", "RPGMechanics_DemoCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ARPGMechanics_DemoCharacter_Statics::NewProp_bMoveInputReleased_SetBit(void* Obj)
	{
		((ARPGMechanics_DemoCharacter*)Obj)->bMoveInputReleased = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARPGMechanics_DemoCharacter_Statics::NewProp_bMoveInputReleased = { "bMoveInputReleased", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARPGMechanics_DemoCharacter), &Z_Construct_UClass_ARPGMechanics_DemoCharacter_Statics::NewProp_bMoveInputReleased_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARPGMechanics_DemoCharacter_Statics::NewProp_bMoveInputReleased_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGMechanics_DemoCharacter_Statics::NewProp_bMoveInputReleased_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGMechanics_DemoCharacter_Statics::NewProp_PressFollowTime_MetaData[] = {
		{ "Category", "RPGMechanics_DemoCharacter" },
		{ "ModuleRelativePath", "RPGMechanics_DemoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARPGMechanics_DemoCharacter_Statics::NewProp_PressFollowTime = { "PressFollowTime", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGMechanics_DemoCharacter, PressFollowTime), METADATA_PARAMS(Z_Construct_UClass_ARPGMechanics_DemoCharacter_Statics::NewProp_PressFollowTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGMechanics_DemoCharacter_Statics::NewProp_PressFollowTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARPGMechanics_DemoCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGMechanics_DemoCharacter_Statics::NewProp_ShortPressThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGMechanics_DemoCharacter_Statics::NewProp_SimpleMoveGoal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGMechanics_DemoCharacter_Statics::NewProp_WorldDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGMechanics_DemoCharacter_Statics::NewProp_bMoveInputPressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGMechanics_DemoCharacter_Statics::NewProp_bMoveInputReleased,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGMechanics_DemoCharacter_Statics::NewProp_PressFollowTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARPGMechanics_DemoCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARPGMechanics_DemoCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARPGMechanics_DemoCharacter_Statics::ClassParams = {
		&ARPGMechanics_DemoCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARPGMechanics_DemoCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARPGMechanics_DemoCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARPGMechanics_DemoCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGMechanics_DemoCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARPGMechanics_DemoCharacter()
	{
		if (!Z_Registration_Info_UClass_ARPGMechanics_DemoCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARPGMechanics_DemoCharacter.OuterSingleton, Z_Construct_UClass_ARPGMechanics_DemoCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARPGMechanics_DemoCharacter.OuterSingleton;
	}
	template<> RPGMECHANICS_DEMO_API UClass* StaticClass<ARPGMechanics_DemoCharacter>()
	{
		return ARPGMechanics_DemoCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARPGMechanics_DemoCharacter);
	struct Z_CompiledInDeferFile_FID_RPGMechanics_Demo_Source_RPGMechanics_Demo_RPGMechanics_DemoCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RPGMechanics_Demo_Source_RPGMechanics_Demo_RPGMechanics_DemoCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARPGMechanics_DemoCharacter, ARPGMechanics_DemoCharacter::StaticClass, TEXT("ARPGMechanics_DemoCharacter"), &Z_Registration_Info_UClass_ARPGMechanics_DemoCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARPGMechanics_DemoCharacter), 2617281324U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RPGMechanics_Demo_Source_RPGMechanics_Demo_RPGMechanics_DemoCharacter_h_2519238296(TEXT("/Script/RPGMechanics_Demo"),
		Z_CompiledInDeferFile_FID_RPGMechanics_Demo_Source_RPGMechanics_Demo_RPGMechanics_DemoCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RPGMechanics_Demo_Source_RPGMechanics_Demo_RPGMechanics_DemoCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
