// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrototype_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Prototype;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Prototype()
	{
		if (!Z_Registration_Info_UPackage__Script_Prototype.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Prototype",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x2954E563,
				0x12C68C96,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Prototype.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Prototype.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Prototype(Z_Construct_UPackage__Script_Prototype, TEXT("/Script/Prototype"), Z_Registration_Info_UPackage__Script_Prototype, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x2954E563, 0x12C68C96));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
