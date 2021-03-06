// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Board.generated.h"

UCLASS()
class CHESS_API ABoard : public AActor
{
	GENERATED_BODY()

public:
    ABoard();
    void Init(int iSizeX, int iSizeY, int iAssetSize, UStaticMesh* iWhiteTileMesh, UStaticMesh* iBlackTileMesh);
    void GenerateBoard();

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int SizeX;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int SizeY;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int AssetSize;

    UPROPERTY(EditAnywhere)
    UInstancedStaticMeshComponent* WhiteTileInstancedMesh;

    UPROPERTY(EditAnywhere)
    UInstancedStaticMeshComponent* BlackTileInstancedMesh;

    UPROPERTY()
    UStaticMesh* WhiteTileMesh;

    UPROPERTY()
    UStaticMesh* BlackTileMesh;
};