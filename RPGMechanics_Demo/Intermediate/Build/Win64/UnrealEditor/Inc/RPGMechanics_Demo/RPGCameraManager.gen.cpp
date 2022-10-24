// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGMechanics_Demo/RPGCameraManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGCameraManager() {}
// Cross Module References
	RPGMECHANICS_DEMO_API UClass* Z_Construct_UClass_ARPGCameraManager_NoRegister();
	RPGMECHANICS_DEMO_API UClass* Z_Construct_UClass_ARPGCameraManager();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
	UPackage* Z_Construct_UPackage__Script_RPGMechanics_Demo();
// End Cross Module References
	void ARPGCameraManager::StaticRegisterNativesARPGCameraManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARPGCameraManager);
	UClass* Z_Construct_UClass_ARPGCameraManager_NoRegister()
	{
		return ARPGCameraManager::StaticClass();
	}
	struct Z_Construct_UClass_ARPGCameraManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARPGCameraManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
		(UObject* (*)())Z_Construct_UPackage__Script_RPGMechanics_Demo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGCameraManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "RPGCameraManager.h" },
		{ "ModuleRelativePath", "RPGCameraManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARPGCameraManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARPGCameraManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARPGCameraManager_Statics::ClassParams = {
		&ARPGCameraManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ARPGCameraManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGCameraManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARPGCameraManager()
	{
		if (!Z_Registration_Info_UClass_ARPGCameraManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARPGCameraManager.OuterSingleton, Z_Construct_UClass_ARPGCameraManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARPGCameraManager.OuterSingleton;
	}
	template<> RPGMECHANICS_DEMO_API UClass* StaticClass<ARPGCameraManager>()
	{
		return ARPGCameraManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARPGCameraManager);
	struct Z_CompiledInDeferFile_FID_RPGMechanics_Demo_Source_RPGMechanics_Demo_RPGCameraManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RPGMechanics_Demo_Source_RPGMechanics_Demo_RPGCameraManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARPGCameraManager, ARPGCameraManager::StaticClass, TEXT("ARPGCameraManager"), &Z_Registration_Info_UClass_ARPGCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARPGCameraManager), 2543067930U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RPGMechanics_Demo_Source_RPGMechanics_Demo_RPGCameraManager_h_2594657432(TEXT("/Script/RPGMechanics_Demo"),
		Z_CompiledInDeferFile_FID_RPGMechanics_Demo_Source_RPGMechanics_Demo_RPGCameraManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RPGMechanics_Demo_Source_RPGMechanics_Demo_RPGCameraManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
