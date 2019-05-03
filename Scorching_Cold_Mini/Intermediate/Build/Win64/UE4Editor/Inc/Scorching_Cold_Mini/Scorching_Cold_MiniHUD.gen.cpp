// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Scorching_Cold_MiniHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScorching_Cold_MiniHUD() {}
// Cross Module References
	SCORCHING_COLD_MINI_API UClass* Z_Construct_UClass_AScorching_Cold_MiniHUD_NoRegister();
	SCORCHING_COLD_MINI_API UClass* Z_Construct_UClass_AScorching_Cold_MiniHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Scorching_Cold_Mini();
// End Cross Module References
	void AScorching_Cold_MiniHUD::StaticRegisterNativesAScorching_Cold_MiniHUD()
	{
	}
	UClass* Z_Construct_UClass_AScorching_Cold_MiniHUD_NoRegister()
	{
		return AScorching_Cold_MiniHUD::StaticClass();
	}
	UClass* Z_Construct_UClass_AScorching_Cold_MiniHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AHUD,
				(UObject* (*)())Z_Construct_UPackage__Script_Scorching_Cold_Mini,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Rendering Actor Input Replication" },
				{ "IncludePath", "Scorching_Cold_MiniHUD.h" },
				{ "ModuleRelativePath", "Scorching_Cold_MiniHUD.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AScorching_Cold_MiniHUD>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AScorching_Cold_MiniHUD::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x0080028Cu,
				nullptr, 0,
				nullptr, 0,
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AScorching_Cold_MiniHUD, 3937978248);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AScorching_Cold_MiniHUD(Z_Construct_UClass_AScorching_Cold_MiniHUD, &AScorching_Cold_MiniHUD::StaticClass, TEXT("/Script/Scorching_Cold_Mini"), TEXT("AScorching_Cold_MiniHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AScorching_Cold_MiniHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
