// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGMechanics_Demo/RPGMechanics_DemoGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGMechanics_DemoGameMode() {}
// Cross Module References
	RPGMECHANICS_DEMO_API UClass* Z_Construct_UClass_ARPGMechanics_DemoGameMode_NoRegister();
	RPGMECHANICS_DEMO_API UClass* Z_Construct_UClass_ARPGMechanics_DemoGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_RPGMechanics_Demo();
// End Cross Module References
	void ARPGMechanics_DemoGameMode::StaticRegisterNativesARPGMechanics_DemoGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARPGMechanics_DemoGameMode);
	UClass* Z_Construct_UClass_ARPGMechanics_DemoGameMode_NoRegister()
	{
		return ARPGMechanics_DemoGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ARPGMechanics_DemoGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARPGMechanics_DemoGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RPGMechanics_Demo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGMechanics_DemoGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "RPGMechanics_DemoGameMode.h" },
		{ "ModuleRelativePath", "RPGMechanics_DemoGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARPGMechanics_DemoGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARPGMechanics_DemoGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARPGMechanics_DemoGameMode_Statics::ClassParams = {
		&ARPGMechanics_DemoGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ARPGMechanics_DemoGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGMechanics_DemoGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARPGMechanics_DemoGameMode()
	{
		if (!Z_Registration_Info_UClass_ARPGMechanics_DemoGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARPGMechanics_DemoGameMode.OuterSingleton, Z_Construct_UClass_ARPGMechanics_DemoGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARPGMechanics_DemoGameMode.OuterSingleton;
	}
	template<> RPGMECHANICS_DEMO_API UClass* StaticClass<ARPGMechanics_DemoGameMode>()
	{
		return ARPGMechanics_DemoGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARPGMechanics_DemoGameMode);
	struct Z_CompiledInDeferFile_FID_RPGMechanics_Demo_Source_RPGMechanics_Demo_RPGMechanics_DemoGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RPGMechanics_Demo_Source_RPGMechanics_Demo_RPGMechanics_DemoGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARPGMechanics_DemoGameMode, ARPGMechanics_DemoGameMode::StaticClass, TEXT("ARPGMechanics_DemoGameMode"), &Z_Registration_Info_UClass_ARPGMechanics_DemoGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARPGMechanics_DemoGameMode), 3617336219U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RPGMechanics_Demo_Source_RPGMechanics_Demo_RPGMechanics_DemoGameMode_h_972719952(TEXT("/Script/RPGMechanics_Demo"),
		Z_CompiledInDeferFile_FID_RPGMechanics_Demo_Source_RPGMechanics_Demo_RPGMechanics_DemoGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RPGMechanics_Demo_Source_RPGMechanics_Demo_RPGMechanics_DemoGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
