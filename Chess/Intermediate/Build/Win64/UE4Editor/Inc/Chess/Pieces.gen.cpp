// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Chess/Pieces.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePieces() {}
// Cross Module References
	CHESS_API UClass* Z_Construct_UClass_APieces_NoRegister();
	CHESS_API UClass* Z_Construct_UClass_APieces();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Chess();
// End Cross Module References
	void APieces::StaticRegisterNativesAPieces()
	{
	}
	UClass* Z_Construct_UClass_APieces_NoRegister()
	{
		return APieces::StaticClass();
	}
	struct Z_Construct_UClass_APieces_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APieces_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Chess,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APieces_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Pieces.h" },
		{ "ModuleRelativePath", "Pieces.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APieces_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APieces>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APieces_Statics::ClassParams = {
		&APieces::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APieces_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APieces_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APieces()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APieces_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APieces, 2780123328);
	template<> CHESS_API UClass* StaticClass<APieces>()
	{
		return APieces::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APieces(Z_Construct_UClass_APieces, &APieces::StaticClass, TEXT("/Script/Chess"), TEXT("APieces"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APieces);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
