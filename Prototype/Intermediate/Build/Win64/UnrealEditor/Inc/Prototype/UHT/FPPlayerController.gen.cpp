// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Prototype/FPPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPPlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	PROTOTYPE_API UClass* Z_Construct_UClass_AFPPlayerController();
	PROTOTYPE_API UClass* Z_Construct_UClass_AFPPlayerController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Prototype();
// End Cross Module References
	void AFPPlayerController::StaticRegisterNativesAFPPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFPPlayerController);
	UClass* Z_Construct_UClass_AFPPlayerController_NoRegister()
	{
		return AFPPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AFPPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Prototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPPlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "FPPlayerController.h" },
		{ "ModuleRelativePath", "FPPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPPlayerController_Statics::NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context to be used for player input */" },
#endif
		{ "ModuleRelativePath", "FPPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context to be used for player input" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPPlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPPlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPPlayerController_Statics::NewProp_InputMappingContext_MetaData), Z_Construct_UClass_AFPPlayerController_Statics::NewProp_InputMappingContext_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPPlayerController_Statics::NewProp_InputMappingContext,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPPlayerController_Statics::ClassParams = {
		&AFPPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFPPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFPPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPPlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPPlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AFPPlayerController()
	{
		if (!Z_Registration_Info_UClass_AFPPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPPlayerController.OuterSingleton, Z_Construct_UClass_AFPPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFPPlayerController.OuterSingleton;
	}
	template<> PROTOTYPE_API UClass* StaticClass<AFPPlayerController>()
	{
		return AFPPlayerController::StaticClass();
	}
	AFPPlayerController::AFPPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPPlayerController);
	AFPPlayerController::~AFPPlayerController() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_GP_Summer_Prototype_Prototype_Source_Prototype_FPPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_GP_Summer_Prototype_Prototype_Source_Prototype_FPPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFPPlayerController, AFPPlayerController::StaticClass, TEXT("AFPPlayerController"), &Z_Registration_Info_UClass_AFPPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPPlayerController), 3733516638U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_GP_Summer_Prototype_Prototype_Source_Prototype_FPPlayerController_h_868651005(TEXT("/Script/Prototype"),
		Z_CompiledInDeferFile_FID_UnrealProjects_GP_Summer_Prototype_Prototype_Source_Prototype_FPPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_GP_Summer_Prototype_Prototype_Source_Prototype_FPPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
