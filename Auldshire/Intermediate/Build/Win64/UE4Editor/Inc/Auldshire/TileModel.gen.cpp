// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Auldshire/TileModel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTileModel() {}
// Cross Module References
	AULDSHIRE_API UEnum* Z_Construct_UEnum_Auldshire_TerrainId();
	UPackage* Z_Construct_UPackage__Script_Auldshire();
	AULDSHIRE_API UClass* Z_Construct_UClass_UTileModel_NoRegister();
	AULDSHIRE_API UClass* Z_Construct_UClass_UTileModel();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
// End Cross Module References
	static UEnum* TerrainId_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Auldshire_TerrainId, Z_Construct_UPackage__Script_Auldshire(), TEXT("TerrainId"));
		}
		return Singleton;
	}
	template<> AULDSHIRE_API UEnum* StaticEnum<TerrainId>()
	{
		return TerrainId_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_TerrainId(TerrainId_StaticEnum, TEXT("/Script/Auldshire"), TEXT("TerrainId"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Auldshire_TerrainId_Hash() { return 773467878U; }
	UEnum* Z_Construct_UEnum_Auldshire_TerrainId()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Auldshire();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("TerrainId"), 0, Get_Z_Construct_UEnum_Auldshire_TerrainId_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TerrainId::None", (int64)TerrainId::None },
				{ "TerrainId::Grass", (int64)TerrainId::Grass },
				{ "TerrainId::Forest", (int64)TerrainId::Forest },
				{ "TerrainId::Mountain", (int64)TerrainId::Mountain },
				{ "TerrainId::Bridge", (int64)TerrainId::Bridge },
				{ "TerrainId::CastleWall", (int64)TerrainId::CastleWall },
				{ "TerrainId::CastleFloor", (int64)TerrainId::CastleFloor },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Bridge.Comment", "/**\n * \n */" },
				{ "Bridge.DisplayName", "Bridge" },
				{ "Bridge.Name", "TerrainId::Bridge" },
				{ "CastleFloor.Comment", "/**\n * \n */" },
				{ "CastleFloor.DisplayName", "Castle Floor" },
				{ "CastleFloor.Name", "TerrainId::CastleFloor" },
				{ "CastleWall.Comment", "/**\n * \n */" },
				{ "CastleWall.DisplayName", "Castle Wall" },
				{ "CastleWall.Name", "TerrainId::CastleWall" },
				{ "Comment", "/**\n * \n */" },
				{ "Forest.Comment", "/**\n * \n */" },
				{ "Forest.DisplayName", "Forest" },
				{ "Forest.Name", "TerrainId::Forest" },
				{ "Grass.Comment", "/**\n * \n */" },
				{ "Grass.DisplayName", "Grass" },
				{ "Grass.Name", "TerrainId::Grass" },
				{ "ModuleRelativePath", "TileModel.h" },
				{ "Mountain.Comment", "/**\n * \n */" },
				{ "Mountain.DisplayName", "Mountain" },
				{ "Mountain.Name", "TerrainId::Mountain" },
				{ "None.Comment", "/**\n * \n */" },
				{ "None.DisplayName", "None" },
				{ "None.Name", "TerrainId::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Auldshire,
				nullptr,
				"TerrainId",
				"TerrainId",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UTileModel::StaticRegisterNativesUTileModel()
	{
	}
	UClass* Z_Construct_UClass_UTileModel_NoRegister()
	{
		return UTileModel::StaticClass();
	}
	struct Z_Construct_UClass_UTileModel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cost_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_m_cost;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_terrainId_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_terrainId_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_terrainId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTileModel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Auldshire,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileModel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TileModel.h" },
		{ "ModuleRelativePath", "TileModel.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileModel_Statics::NewProp_m_cost_MetaData[] = {
		{ "Category", "TileModel" },
		{ "ModuleRelativePath", "TileModel.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UTileModel_Statics::NewProp_m_cost = { "m_cost", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTileModel, m_cost), METADATA_PARAMS(Z_Construct_UClass_UTileModel_Statics::NewProp_m_cost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileModel_Statics::NewProp_m_cost_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTileModel_Statics::NewProp_m_terrainId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileModel_Statics::NewProp_m_terrainId_MetaData[] = {
		{ "Category", "TerrainId" },
		{ "ModuleRelativePath", "TileModel.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTileModel_Statics::NewProp_m_terrainId = { "m_terrainId", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTileModel, m_terrainId), Z_Construct_UEnum_Auldshire_TerrainId, METADATA_PARAMS(Z_Construct_UClass_UTileModel_Statics::NewProp_m_terrainId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileModel_Statics::NewProp_m_terrainId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTileModel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileModel_Statics::NewProp_m_cost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileModel_Statics::NewProp_m_terrainId_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileModel_Statics::NewProp_m_terrainId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTileModel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTileModel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTileModel_Statics::ClassParams = {
		&UTileModel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTileModel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTileModel_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTileModel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTileModel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTileModel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTileModel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTileModel, 1816780651);
	template<> AULDSHIRE_API UClass* StaticClass<UTileModel>()
	{
		return UTileModel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTileModel(Z_Construct_UClass_UTileModel, &UTileModel::StaticClass, TEXT("/Script/Auldshire"), TEXT("UTileModel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTileModel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
