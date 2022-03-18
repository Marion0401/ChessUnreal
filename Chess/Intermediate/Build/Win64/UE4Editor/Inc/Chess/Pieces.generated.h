// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHESS_Pieces_generated_h
#error "Pieces.generated.h already included, missing '#pragma once' in Pieces.h"
#endif
#define CHESS_Pieces_generated_h

#define Chess_Source_Chess_Pieces_h_12_SPARSE_DATA
#define Chess_Source_Chess_Pieces_h_12_RPC_WRAPPERS
#define Chess_Source_Chess_Pieces_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Chess_Source_Chess_Pieces_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPieces(); \
	friend struct Z_Construct_UClass_APieces_Statics; \
public: \
	DECLARE_CLASS(APieces, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Chess"), NO_API) \
	DECLARE_SERIALIZER(APieces)


#define Chess_Source_Chess_Pieces_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPieces(); \
	friend struct Z_Construct_UClass_APieces_Statics; \
public: \
	DECLARE_CLASS(APieces, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Chess"), NO_API) \
	DECLARE_SERIALIZER(APieces)


#define Chess_Source_Chess_Pieces_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APieces(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APieces) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APieces); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APieces); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APieces(APieces&&); \
	NO_API APieces(const APieces&); \
public:


#define Chess_Source_Chess_Pieces_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APieces(APieces&&); \
	NO_API APieces(const APieces&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APieces); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APieces); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APieces)


#define Chess_Source_Chess_Pieces_h_12_PRIVATE_PROPERTY_OFFSET
#define Chess_Source_Chess_Pieces_h_9_PROLOG
#define Chess_Source_Chess_Pieces_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Chess_Source_Chess_Pieces_h_12_PRIVATE_PROPERTY_OFFSET \
	Chess_Source_Chess_Pieces_h_12_SPARSE_DATA \
	Chess_Source_Chess_Pieces_h_12_RPC_WRAPPERS \
	Chess_Source_Chess_Pieces_h_12_INCLASS \
	Chess_Source_Chess_Pieces_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Chess_Source_Chess_Pieces_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Chess_Source_Chess_Pieces_h_12_PRIVATE_PROPERTY_OFFSET \
	Chess_Source_Chess_Pieces_h_12_SPARSE_DATA \
	Chess_Source_Chess_Pieces_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Chess_Source_Chess_Pieces_h_12_INCLASS_NO_PURE_DECLS \
	Chess_Source_Chess_Pieces_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHESS_API UClass* StaticClass<class APieces>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Chess_Source_Chess_Pieces_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
