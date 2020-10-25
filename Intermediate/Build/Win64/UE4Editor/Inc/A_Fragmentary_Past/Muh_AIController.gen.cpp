// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A_Fragmentary_Past/Muh_AIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMuh_AIController() {}
// Cross Module References
	A_FRAGMENTARY_PAST_API UClass* Z_Construct_UClass_AMuh_AIController_NoRegister();
	A_FRAGMENTARY_PAST_API UClass* Z_Construct_UClass_AMuh_AIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_A_Fragmentary_Past();
// End Cross Module References
	void AMuh_AIController::StaticRegisterNativesAMuh_AIController()
	{
	}
	UClass* Z_Construct_UClass_AMuh_AIController_NoRegister()
	{
		return AMuh_AIController::StaticClass();
	}
	struct Z_Construct_UClass_AMuh_AIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMuh_AIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_A_Fragmentary_Past,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuh_AIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Muh_AIController.h" },
		{ "ModuleRelativePath", "Muh_AIController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMuh_AIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMuh_AIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMuh_AIController_Statics::ClassParams = {
		&AMuh_AIController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMuh_AIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMuh_AIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMuh_AIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMuh_AIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMuh_AIController, 725688478);
	template<> A_FRAGMENTARY_PAST_API UClass* StaticClass<AMuh_AIController>()
	{
		return AMuh_AIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMuh_AIController(Z_Construct_UClass_AMuh_AIController, &AMuh_AIController::StaticClass, TEXT("/Script/A_Fragmentary_Past"), TEXT("AMuh_AIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMuh_AIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
