// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Prototype/FPGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	PROTOTYPE_API UClass* Z_Construct_UClass_AFPGameMode();
	PROTOTYPE_API UClass* Z_Construct_UClass_AFPGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Prototype();
// End Cross Module References
	void AFPGameMode::StaticRegisterNativesAFPGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFPGameMode);
	UClass* Z_Construct_UClass_AFPGameMode_NoRegister()
	{
		return AFPGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFPGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Prototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPGameMode_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FPGameMode.h" },
		{ "ModuleRelativePath", "FPGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPGameMode_Statics::ClassParams = {
		&AFPGameMode::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AFPGameMode()
	{
		if (!Z_Registration_Info_UClass_AFPGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPGameMode.OuterSingleton, Z_Construct_UClass_AFPGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFPGameMode.OuterSingleton;
	}
	template<> PROTOTYPE_API UClass* StaticClass<AFPGameMode>()
	{
		return AFPGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPGameMode);
	AFPGameMode::~AFPGameMode() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_GP_Summer_Prototype_Prototype_Source_Prototype_FPGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_GP_Summer_Prototype_Prototype_Source_Prototype_FPGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFPGameMode, AFPGameMode::StaticClass, TEXT("AFPGameMode"), &Z_Registration_Info_UClass_AFPGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPGameMode), 3795479270U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_GP_Summer_Prototype_Prototype_Source_Prototype_FPGameMode_h_602359160(TEXT("/Script/Prototype"),
		Z_CompiledInDeferFile_FID_UnrealProjects_GP_Summer_Prototype_Prototype_Source_Prototype_FPGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_GP_Summer_Prototype_Prototype_Source_Prototype_FPGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
