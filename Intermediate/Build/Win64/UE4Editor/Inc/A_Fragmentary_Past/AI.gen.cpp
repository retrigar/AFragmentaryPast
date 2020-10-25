// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A_Fragmentary_Past/AI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAI() {}
// Cross Module References
	A_FRAGMENTARY_PAST_API UClass* Z_Construct_UClass_AAI_NoRegister();
	A_FRAGMENTARY_PAST_API UClass* Z_Construct_UClass_AAI();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_A_Fragmentary_Past();
// End Cross Module References
	void AAI::StaticRegisterNativesAAI()
	{
	}
	UClass* Z_Construct_UClass_AAI_NoRegister()
	{
		return AAI::StaticClass();
	}
	struct Z_Construct_UClass_AAI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_A_Fragmentary_Past,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI.h" },
		{ "ModuleRelativePath", "AI.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAI_Statics::ClassParams = {
		&AAI::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAI, 644395792);
	template<> A_FRAGMENTARY_PAST_API UClass* StaticClass<AAI>()
	{
		return AAI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAI(Z_Construct_UClass_AAI, &AAI::StaticClass, TEXT("/Script/A_Fragmentary_Past"), TEXT("AAI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
