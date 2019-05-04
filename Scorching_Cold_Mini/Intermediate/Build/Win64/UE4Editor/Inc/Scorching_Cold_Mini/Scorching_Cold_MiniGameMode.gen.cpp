// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Scorching_Cold_MiniGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScorching_Cold_MiniGameMode() {}
// Cross Module References
	SCORCHING_COLD_MINI_API UClass* Z_Construct_UClass_AScorching_Cold_MiniGameMode_NoRegister();
	SCORCHING_COLD_MINI_API UClass* Z_Construct_UClass_AScorching_Cold_MiniGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Scorching_Cold_Mini();
// End Cross Module References
	void AScorching_Cold_MiniGameMode::StaticRegisterNativesAScorching_Cold_MiniGameMode()
	{
	}
	UClass* Z_Construct_UClass_AScorching_Cold_MiniGameMode_NoRegister()
	{
		return AScorching_Cold_MiniGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AScorching_Cold_MiniGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Scorching_Cold_Mini,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "Scorching_Cold_MiniGameMode.h" },
				{ "ModuleRelativePath", "Scorching_Cold_MiniGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AScorching_Cold_MiniGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AScorching_Cold_MiniGameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AScorching_Cold_MiniGameMode, 2377841849);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AScorching_Cold_MiniGameMode(Z_Construct_UClass_AScorching_Cold_MiniGameMode, &AScorching_Cold_MiniGameMode::StaticClass, TEXT("/Script/Scorching_Cold_Mini"), TEXT("AScorching_Cold_MiniGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AScorching_Cold_MiniGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
