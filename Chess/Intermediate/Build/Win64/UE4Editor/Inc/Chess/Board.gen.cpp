// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Chess/Board.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoard() {}
// Cross Module References
	CHESS_API UClass* Z_Construct_UClass_ABoard_NoRegister();
	CHESS_API UClass* Z_Construct_UClass_ABoard();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Chess();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	void ABoard::StaticRegisterNativesABoard()
	{
	}
	UClass* Z_Construct_UClass_ABoard_NoRegister()
	{
		return ABoard::StaticClass();
	}
	struct Z_Construct_UClass_ABoard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeX_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SizeX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeY_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SizeY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_AssetSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WhiteTileInstancedMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WhiteTileInstancedMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackTileInstancedMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlackTileInstancedMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WhiteTileMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WhiteTileMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackTileMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlackTileMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Chess,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoard_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Board.h" },
		{ "ModuleRelativePath", "Board.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoard_Statics::NewProp_SizeX_MetaData[] = {
		{ "Category", "Board" },
		{ "ModuleRelativePath", "Board.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABoard_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoard, SizeX), METADATA_PARAMS(Z_Construct_UClass_ABoard_Statics::NewProp_SizeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::NewProp_SizeX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoard_Statics::NewProp_SizeY_MetaData[] = {
		{ "Category", "Board" },
		{ "ModuleRelativePath", "Board.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABoard_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoard, SizeY), METADATA_PARAMS(Z_Construct_UClass_ABoard_Statics::NewProp_SizeY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::NewProp_SizeY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoard_Statics::NewProp_AssetSize_MetaData[] = {
		{ "Category", "Board" },
		{ "ModuleRelativePath", "Board.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABoard_Statics::NewProp_AssetSize = { "AssetSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoard, AssetSize), METADATA_PARAMS(Z_Construct_UClass_ABoard_Statics::NewProp_AssetSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::NewProp_AssetSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoard_Statics::NewProp_WhiteTileInstancedMesh_MetaData[] = {
		{ "Category", "Board" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Board.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoard_Statics::NewProp_WhiteTileInstancedMesh = { "WhiteTileInstancedMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoard, WhiteTileInstancedMesh), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoard_Statics::NewProp_WhiteTileInstancedMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::NewProp_WhiteTileInstancedMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoard_Statics::NewProp_BlackTileInstancedMesh_MetaData[] = {
		{ "Category", "Board" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Board.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoard_Statics::NewProp_BlackTileInstancedMesh = { "BlackTileInstancedMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoard, BlackTileInstancedMesh), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoard_Statics::NewProp_BlackTileInstancedMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::NewProp_BlackTileInstancedMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoard_Statics::NewProp_WhiteTileMesh_MetaData[] = {
		{ "ModuleRelativePath", "Board.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoard_Statics::NewProp_WhiteTileMesh = { "WhiteTileMesh", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoard, WhiteTileMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoard_Statics::NewProp_WhiteTileMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::NewProp_WhiteTileMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoard_Statics::NewProp_BlackTileMesh_MetaData[] = {
		{ "ModuleRelativePath", "Board.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoard_Statics::NewProp_BlackTileMesh = { "BlackTileMesh", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoard, BlackTileMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoard_Statics::NewProp_BlackTileMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::NewProp_BlackTileMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABoard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoard_Statics::NewProp_SizeX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoard_Statics::NewProp_SizeY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoard_Statics::NewProp_AssetSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoard_Statics::NewProp_WhiteTileInstancedMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoard_Statics::NewProp_BlackTileInstancedMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoard_Statics::NewProp_WhiteTileMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoard_Statics::NewProp_BlackTileMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoard>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABoard_Statics::ClassParams = {
		&ABoard::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABoard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABoard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABoard()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABoard_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABoard, 1594986947);
	template<> CHESS_API UClass* StaticClass<ABoard>()
	{
		return ABoard::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABoard(Z_Construct_UClass_ABoard, &ABoard::StaticClass, TEXT("/Script/Chess"), TEXT("ABoard"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoard);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
