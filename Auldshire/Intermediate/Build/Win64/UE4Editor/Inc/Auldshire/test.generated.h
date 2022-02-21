// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AULDSHIRE_test_generated_h
#error "test.generated.h already included, missing '#pragma once' in test.h"
#endif
#define AULDSHIRE_test_generated_h

#define Auldshire_Source_Auldshire_test_h_15_SPARSE_DATA
#define Auldshire_Source_Auldshire_test_h_15_RPC_WRAPPERS
#define Auldshire_Source_Auldshire_test_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Auldshire_Source_Auldshire_test_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUtest(); \
	friend struct Z_Construct_UClass_Utest_Statics; \
public: \
	DECLARE_CLASS(Utest, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Auldshire"), NO_API) \
	DECLARE_SERIALIZER(Utest)


#define Auldshire_Source_Auldshire_test_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUtest(); \
	friend struct Z_Construct_UClass_Utest_Statics; \
public: \
	DECLARE_CLASS(Utest, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Auldshire"), NO_API) \
	DECLARE_SERIALIZER(Utest)


#define Auldshire_Source_Auldshire_test_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API Utest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Utest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Utest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Utest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Utest(Utest&&); \
	NO_API Utest(const Utest&); \
public:


#define Auldshire_Source_Auldshire_test_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API Utest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Utest(Utest&&); \
	NO_API Utest(const Utest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Utest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Utest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Utest)


#define Auldshire_Source_Auldshire_test_h_15_PRIVATE_PROPERTY_OFFSET
#define Auldshire_Source_Auldshire_test_h_12_PROLOG
#define Auldshire_Source_Auldshire_test_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Auldshire_Source_Auldshire_test_h_15_PRIVATE_PROPERTY_OFFSET \
	Auldshire_Source_Auldshire_test_h_15_SPARSE_DATA \
	Auldshire_Source_Auldshire_test_h_15_RPC_WRAPPERS \
	Auldshire_Source_Auldshire_test_h_15_INCLASS \
	Auldshire_Source_Auldshire_test_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Auldshire_Source_Auldshire_test_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Auldshire_Source_Auldshire_test_h_15_PRIVATE_PROPERTY_OFFSET \
	Auldshire_Source_Auldshire_test_h_15_SPARSE_DATA \
	Auldshire_Source_Auldshire_test_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Auldshire_Source_Auldshire_test_h_15_INCLASS_NO_PURE_DECLS \
	Auldshire_Source_Auldshire_test_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AULDSHIRE_API UClass* StaticClass<class Utest>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Auldshire_Source_Auldshire_test_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
