// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TileModel.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum class TerrainId : uint8 {
	None            UMETA(DisplayName = "None"),
	Grass           UMETA(DisplayName = "Grass"),
	Forest          UMETA(DisplayName = "Forest"),
	Mountain        UMETA(DisplayName = "Mountain"),
	Bridge          UMETA(DisplayName = "Bridge"),
	CastleWall      UMETA(DisplayName = "Castle Wall"),
	CastleFloor     UMETA(DisplayName = "Castle Floor"),
	Water           UMETA(DisplayName = "Water")
};

UCLASS()
class AULDSHIRE_API UTileModel : public UDataAsset
{
	GENERATED_BODY()

public:
	UTileModel();

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int m_cost = 0;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = TerrainId)
	TEnumAsByte<TerrainId> m_terrainId = TerrainId::None;
};
