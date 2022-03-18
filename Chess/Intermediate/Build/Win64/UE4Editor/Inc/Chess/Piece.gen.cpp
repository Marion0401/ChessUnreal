// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Chess/Piece.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePiece() {}
// Cross Module References
	CHESS_API UClass* Z_Construct_UClass_APiece_NoRegister();
	CHESS_API UClass* Z_Construct_UClass_APiece();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Chess();
// End Cross Module References
	void APiece::StaticRegisterNativesAPiece()
	{
	}
	UClass* Z_Construct_UClass_APiece_NoRegister()
	{
		return APiece::StaticClass();
	}
	struct Z_Construct_UClass_APiece_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APiece_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Chess,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APiece_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Piece.h" },
		{ "ModuleRelativePath", "Piece.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APiece_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APiece>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APiece_Statics::ClassParams = {
		&APiece::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APiece_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APiece_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APiece()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APiece_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APiece, 1307337953);
	template<> CHESS_API UClass* StaticClass<APiece>()
	{
		return APiece::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APiece(Z_Construct_UClass_APiece, &APiece::StaticClass, TEXT("/Script/Chess"), TEXT("APiece"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APiece);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
