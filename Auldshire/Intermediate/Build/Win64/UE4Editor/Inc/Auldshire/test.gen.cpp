// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Auldshire/test.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodetest() {}
// Cross Module References
	AULDSHIRE_API UClass* Z_Construct_UClass_Utest_NoRegister();
	AULDSHIRE_API UClass* Z_Construct_UClass_Utest();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	UPackage* Z_Construct_UPackage__Script_Auldshire();
// End Cross Module References
	void Utest::StaticRegisterNativesUtest()
	{
	}
	UClass* Z_Construct_UClass_Utest_NoRegister()
	{
		return Utest::StaticClass();
	}
	struct Z_Construct_UClass_Utest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Utest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Auldshire,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Utest_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "test.h" },
		{ "ModuleRelativePath", "test.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Utest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Utest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Utest_Statics::ClassParams = {
		&Utest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_Utest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Utest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Utest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Utest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Utest, 2004827949);
	template<> AULDSHIRE_API UClass* StaticClass<Utest>()
	{
		return Utest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Utest(Z_Construct_UClass_Utest, &Utest::StaticClass, TEXT("/Script/Auldshire"), TEXT("Utest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Utest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
