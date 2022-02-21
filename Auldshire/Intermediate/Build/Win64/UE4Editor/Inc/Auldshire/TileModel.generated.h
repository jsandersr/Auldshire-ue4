// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AULDSHIRE_TileModel_generated_h
#error "TileModel.generated.h already included, missing '#pragma once' in TileModel.h"
#endif
#define AULDSHIRE_TileModel_generated_h

#define Auldshire_Source_Auldshire_TileModel_h_28_SPARSE_DATA
#define Auldshire_Source_Auldshire_TileModel_h_28_RPC_WRAPPERS
#define Auldshire_Source_Auldshire_TileModel_h_28_RPC_WRAPPERS_NO_PURE_DECLS
#define Auldshire_Source_Auldshire_TileModel_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTileModel(); \
	friend struct Z_Construct_UClass_UTileModel_Statics; \
public: \
	DECLARE_CLASS(UTileModel, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Auldshire"), NO_API) \
	DECLARE_SERIALIZER(UTileModel)


#define Auldshire_Source_Auldshire_TileModel_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUTileModel(); \
	friend struct Z_Construct_UClass_UTileModel_Statics; \
public: \
	DECLARE_CLASS(UTileModel, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Auldshire"), NO_API) \
	DECLARE_SERIALIZER(UTileModel)


#define Auldshire_Source_Auldshire_TileModel_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTileModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTileModel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTileModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTileModel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTileModel(UTileModel&&); \
	NO_API UTileModel(const UTileModel&); \
public:


#define Auldshire_Source_Auldshire_TileModel_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTileModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTileModel(UTileModel&&); \
	NO_API UTileModel(const UTileModel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTileModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTileModel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTileModel)


#define Auldshire_Source_Auldshire_TileModel_h_28_PRIVATE_PROPERTY_OFFSET
#define Auldshire_Source_Auldshire_TileModel_h_25_PROLOG
#define Auldshire_Source_Auldshire_TileModel_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Auldshire_Source_Auldshire_TileModel_h_28_PRIVATE_PROPERTY_OFFSET \
	Auldshire_Source_Auldshire_TileModel_h_28_SPARSE_DATA \
	Auldshire_Source_Auldshire_TileModel_h_28_RPC_WRAPPERS \
	Auldshire_Source_Auldshire_TileModel_h_28_INCLASS \
	Auldshire_Source_Auldshire_TileModel_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Auldshire_Source_Auldshire_TileModel_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Auldshire_Source_Auldshire_TileModel_h_28_PRIVATE_PROPERTY_OFFSET \
	Auldshire_Source_Auldshire_TileModel_h_28_SPARSE_DATA \
	Auldshire_Source_Auldshire_TileModel_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	Auldshire_Source_Auldshire_TileModel_h_28_INCLASS_NO_PURE_DECLS \
	Auldshire_Source_Auldshire_TileModel_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AULDSHIRE_API UClass* StaticClass<class UTileModel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Auldshire_Source_Auldshire_TileModel_h


#define FOREACH_ENUM_TERRAINID(op) \
	op(TerrainId::None) \
	op(TerrainId::Grass) \
	op(TerrainId::Forest) \
	op(TerrainId::Mountain) \
	op(TerrainId::Bridge) \
	op(TerrainId::CastleWall) \
	op(TerrainId::CastleFloor) 

enum class TerrainId : uint8;
template<> AULDSHIRE_API UEnum* StaticEnum<TerrainId>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
