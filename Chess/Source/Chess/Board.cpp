// Fill out your copyright notice in the Description page of Project Settings.


#include "Board.h"

// Sets default values
ABoard::ABoard()
{
    RootComponent = CreateDefaultSubobject<USceneComponent>("DefaultRootComponent");
    RootComponent->bVisualizeComponent = true;

    WhiteTileInstancedMesh = CreateDefaultSubobject<UInstancedStaticMeshComponent>("WhiteTileInstanceStaticMesh");
    BlackTileInstancedMesh = CreateDefaultSubobject<UInstancedStaticMeshComponent>("BlackTileInstanceStaticMesh");

    WhiteTileInstancedMesh->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
    BlackTileInstancedMesh->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);

    
}
void ABoard::Init(int iSizeX, int iSizeY, int iAssetSize, UStaticMesh* iWhiteTileMesh, UStaticMesh* iBlackTileMesh) {
    SizeX = iSizeX;
    SizeY = iSizeY;
    AssetSize = iAssetSize;
    WhiteTileMesh = iWhiteTileMesh;
    BlackTileMesh = iBlackTileMesh;

    WhiteTileInstancedMesh->SetStaticMesh(WhiteTileMesh);
    BlackTileInstancedMesh->SetStaticMesh(BlackTileMesh);
    GenerateBoard();
}

void ABoard::GenerateBoard() 
{
    WhiteTileInstancedMesh->ClearInstances();
    BlackTileInstancedMesh->ClearInstances();

    for (int y = 0; y < SizeY; y++) {
        for (int x = 0; x < SizeX; x++) {
            FTransform transform;
            transform.SetTranslation( FVector(x*AssetSize, y*AssetSize,0));
            if ((x + y) % 2 == 0)
                BlackTileInstancedMesh->AddInstance(transform);
            else
                WhiteTileInstancedMesh->AddInstance(transform);
        }
    }

}

