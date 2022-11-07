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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnRateGamepad_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnRateGamepad;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGMechanics_DemoCharacter_Statics::NewProp_TurnRateGamepad_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "RPGMechanics_DemoCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARPGMechanics_DemoCharacter_Statics::NewProp_TurnRateGamepad = { "TurnRateGamepad", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGMechanics_DemoCharacter, TurnRateGamepad), METADATA_PARAMS(Z_Construct_UClass_ARPGMechanics_DemoCharacter_Statics::NewProp_TurnRateGamepad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGMechanics_DemoCharacter_Statics::NewProp_TurnRateGamepad_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARPGMechanics_DemoCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGMechanics_DemoCharacter_Statics::NewProp_TurnRateGamepad,
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
		{ Z_Construct_UClass_ARPGMechanics_DemoCharacter, ARPGMechanics_DemoCharacter::StaticClass, TEXT("ARPGMechanics_DemoCharacter"), &Z_Registration_Info_UClass_ARPGMechanics_DemoCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARPGMechanics_DemoCharacter), 3764970682U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RPGMechanics_Demo_Source_RPGMechanics_Demo_RPGMechanics_DemoCharacter_h_1782871375(TEXT("/Script/RPGMechanics_Demo"),
		Z_CompiledInDeferFile_FID_RPGMechanics_Demo_Source_RPGMechanics_Demo_RPGMechanics_DemoCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RPGMechanics_Demo_Source_RPGMechanics_Demo_RPGMechanics_DemoCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
