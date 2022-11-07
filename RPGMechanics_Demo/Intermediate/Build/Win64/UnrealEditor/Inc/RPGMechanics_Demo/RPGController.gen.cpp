// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGMechanics_Demo/RPGController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGController() {}
// Cross Module References
	RPGMECHANICS_DEMO_API UClass* Z_Construct_UClass_ARPGController_NoRegister();
	RPGMECHANICS_DEMO_API UClass* Z_Construct_UClass_ARPGController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_RPGMechanics_Demo();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void ARPGController::StaticRegisterNativesARPGController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARPGController);
	UClass* Z_Construct_UClass_ARPGController_NoRegister()
	{
		return ARPGController::StaticClass();
	}
	struct Z_Construct_UClass_ARPGController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedCharacters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedCharacters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedCharacters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MovementVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARPGController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_RPGMechanics_Demo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "RPGController.h" },
		{ "ModuleRelativePath", "RPGController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPGController_Statics::NewProp_SelectedCharacters_Inner = { "SelectedCharacters", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGController_Statics::NewProp_SelectedCharacters_MetaData[] = {
		{ "Category", "RPGController" },
		{ "ModuleRelativePath", "RPGController.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARPGController_Statics::NewProp_SelectedCharacters = { "SelectedCharacters", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGController, SelectedCharacters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ARPGController_Statics::NewProp_SelectedCharacters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGController_Statics::NewProp_SelectedCharacters_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGController_Statics::NewProp_MovementVelocity_MetaData[] = {
		{ "Category", "RPGController" },
		{ "ModuleRelativePath", "RPGController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARPGController_Statics::NewProp_MovementVelocity = { "MovementVelocity", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGController, MovementVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ARPGController_Statics::NewProp_MovementVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGController_Statics::NewProp_MovementVelocity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARPGController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGController_Statics::NewProp_SelectedCharacters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGController_Statics::NewProp_SelectedCharacters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGController_Statics::NewProp_MovementVelocity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARPGController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARPGController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARPGController_Statics::ClassParams = {
		&ARPGController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARPGController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARPGController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARPGController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARPGController()
	{
		if (!Z_Registration_Info_UClass_ARPGController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARPGController.OuterSingleton, Z_Construct_UClass_ARPGController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARPGController.OuterSingleton;
	}
	template<> RPGMECHANICS_DEMO_API UClass* StaticClass<ARPGController>()
	{
		return ARPGController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARPGController);
	struct Z_CompiledInDeferFile_FID_RPGMechanics_Demo_Source_RPGMechanics_Demo_RPGController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RPGMechanics_Demo_Source_RPGMechanics_Demo_RPGController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARPGController, ARPGController::StaticClass, TEXT("ARPGController"), &Z_Registration_Info_UClass_ARPGController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARPGController), 1869296681U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RPGMechanics_Demo_Source_RPGMechanics_Demo_RPGController_h_2214973591(TEXT("/Script/RPGMechanics_Demo"),
		Z_CompiledInDeferFile_FID_RPGMechanics_Demo_Source_RPGMechanics_Demo_RPGController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RPGMechanics_Demo_Source_RPGMechanics_Demo_RPGController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
