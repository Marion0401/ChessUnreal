// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHESS_MyGameModeBase_generated_h
#error "MyGameModeBase.generated.h already included, missing '#pragma once' in MyGameModeBase.h"
#endif
#define CHESS_MyGameModeBase_generated_h

#define Chess_Source_Chess_MyGameModeBase_h_16_SPARSE_DATA
#define Chess_Source_Chess_MyGameModeBase_h_16_RPC_WRAPPERS
#define Chess_Source_Chess_MyGameModeBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Chess_Source_Chess_MyGameModeBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyGameModeBase(); \
	friend struct Z_Construct_UClass_AMyGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AMyGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Chess"), NO_API) \
	DECLARE_SERIALIZER(AMyGameModeBase)


#define Chess_Source_Chess_MyGameModeBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAMyGameModeBase(); \
	friend struct Z_Construct_UClass_AMyGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AMyGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Chess"), NO_API) \
	DECLARE_SERIALIZER(AMyGameModeBase)


#define Chess_Source_Chess_MyGameModeBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyGameModeBase(AMyGameModeBase&&); \
	NO_API AMyGameModeBase(const AMyGameModeBase&); \
public:


#define Chess_Source_Chess_MyGameModeBase_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyGameModeBase(AMyGameModeBase&&); \
	NO_API AMyGameModeBase(const AMyGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyGameModeBase)


#define Chess_Source_Chess_MyGameModeBase_h_16_PRIVATE_PROPERTY_OFFSET
#define Chess_Source_Chess_MyGameModeBase_h_13_PROLOG
#define Chess_Source_Chess_MyGameModeBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Chess_Source_Chess_MyGameModeBase_h_16_PRIVATE_PROPERTY_OFFSET \
	Chess_Source_Chess_MyGameModeBase_h_16_SPARSE_DATA \
	Chess_Source_Chess_MyGameModeBase_h_16_RPC_WRAPPERS \
	Chess_Source_Chess_MyGameModeBase_h_16_INCLASS \
	Chess_Source_Chess_MyGameModeBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Chess_Source_Chess_MyGameModeBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Chess_Source_Chess_MyGameModeBase_h_16_PRIVATE_PROPERTY_OFFSET \
	Chess_Source_Chess_MyGameModeBase_h_16_SPARSE_DATA \
	Chess_Source_Chess_MyGameModeBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Chess_Source_Chess_MyGameModeBase_h_16_INCLASS_NO_PURE_DECLS \
	Chess_Source_Chess_MyGameModeBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHESS_API UClass* StaticClass<class AMyGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Chess_Source_Chess_MyGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
