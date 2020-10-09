// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlockoutToolsPlugin/Private/BlockoutToolsParent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlockoutToolsParent() {}
// Cross Module References
	BLOCKOUTTOOLSPLUGIN_API UClass* Z_Construct_UClass_ABlockoutToolsParent_NoRegister();
	BLOCKOUTTOOLSPLUGIN_API UClass* Z_Construct_UClass_ABlockoutToolsParent();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BlockoutToolsPlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABlockoutToolsParent::execBlockoutSetMaterial)
	{
		P_GET_UBOOL(Z_Param_bUseGrid);
		P_GET_STRUCT(FLinearColor,Z_Param_Color);
		P_GET_UBOOL(Z_Param_bUseTopColor);
		P_GET_STRUCT(FLinearColor,Z_Param_TopColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BlockoutSetMaterial(Z_Param_bUseGrid,Z_Param_Color,Z_Param_bUseTopColor,Z_Param_TopColor);
		P_NATIVE_END;
	}
	void ABlockoutToolsParent::StaticRegisterNativesABlockoutToolsParent()
	{
		UClass* Class = ABlockoutToolsParent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BlockoutSetMaterial", &ABlockoutToolsParent::execBlockoutSetMaterial },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABlockoutToolsParent_BlockoutSetMaterial_Statics
	{
		struct BlockoutToolsParent_eventBlockoutSetMaterial_Parms
		{
			bool bUseGrid;
			FLinearColor Color;
			bool bUseTopColor;
			FLinearColor TopColor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TopColor;
		static void NewProp_bUseTopColor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseTopColor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static void NewProp_bUseGrid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseGrid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABlockoutToolsParent_BlockoutSetMaterial_Statics::NewProp_TopColor = { "TopColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlockoutToolsParent_eventBlockoutSetMaterial_Parms, TopColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ABlockoutToolsParent_BlockoutSetMaterial_Statics::NewProp_bUseTopColor_SetBit(void* Obj)
	{
		((BlockoutToolsParent_eventBlockoutSetMaterial_Parms*)Obj)->bUseTopColor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABlockoutToolsParent_BlockoutSetMaterial_Statics::NewProp_bUseTopColor = { "bUseTopColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlockoutToolsParent_eventBlockoutSetMaterial_Parms), &Z_Construct_UFunction_ABlockoutToolsParent_BlockoutSetMaterial_Statics::NewProp_bUseTopColor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABlockoutToolsParent_BlockoutSetMaterial_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlockoutToolsParent_eventBlockoutSetMaterial_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ABlockoutToolsParent_BlockoutSetMaterial_Statics::NewProp_bUseGrid_SetBit(void* Obj)
	{
		((BlockoutToolsParent_eventBlockoutSetMaterial_Parms*)Obj)->bUseGrid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABlockoutToolsParent_BlockoutSetMaterial_Statics::NewProp_bUseGrid = { "bUseGrid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlockoutToolsParent_eventBlockoutSetMaterial_Parms), &Z_Construct_UFunction_ABlockoutToolsParent_BlockoutSetMaterial_Statics::NewProp_bUseGrid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlockoutToolsParent_BlockoutSetMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlockoutToolsParent_BlockoutSetMaterial_Statics::NewProp_TopColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlockoutToolsParent_BlockoutSetMaterial_Statics::NewProp_bUseTopColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlockoutToolsParent_BlockoutSetMaterial_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlockoutToolsParent_BlockoutSetMaterial_Statics::NewProp_bUseGrid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlockoutToolsParent_BlockoutSetMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Blockout Tools" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlockoutToolsParent_BlockoutSetMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlockoutToolsParent, nullptr, "BlockoutSetMaterial", nullptr, nullptr, sizeof(BlockoutToolsParent_eventBlockoutSetMaterial_Parms), Z_Construct_UFunction_ABlockoutToolsParent_BlockoutSetMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlockoutToolsParent_BlockoutSetMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABlockoutToolsParent_BlockoutSetMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlockoutToolsParent_BlockoutSetMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABlockoutToolsParent_BlockoutSetMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABlockoutToolsParent_BlockoutSetMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABlockoutToolsParent_NoRegister()
	{
		return ABlockoutToolsParent::StaticClass();
	}
	struct Z_Construct_UClass_ABlockoutToolsParent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBlockoutCastShadows_MetaData[];
#endif
		static void NewProp_bBlockoutCastShadows_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlockoutCastShadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCustomMaterial_MetaData[];
#endif
		static void NewProp_bUseCustomMaterial_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCustomMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockoutMeshComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BlockoutMeshComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockoutMeshComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockoutCurrentMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockoutCurrentMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockoutGridMID_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockoutGridMID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockoutGridParent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockoutGridParent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Billboard_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Billboard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABlockoutToolsParent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BlockoutToolsPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABlockoutToolsParent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABlockoutToolsParent_BlockoutSetMaterial, "BlockoutSetMaterial" }, // 622543007
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockoutToolsParent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlockoutToolsParent.h" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutCastShadows_MetaData[] = {
		{ "Category", "Blockout Tools|Rendering" },
		{ "DisplayName", "Cast Shadows" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
#endif
	void Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutCastShadows_SetBit(void* Obj)
	{
		((ABlockoutToolsParent*)Obj)->bBlockoutCastShadows = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutCastShadows = { "bBlockoutCastShadows", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABlockoutToolsParent), &Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutCastShadows_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutCastShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutCastShadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_CustomMaterial_MetaData[] = {
		{ "Category", "Blockout Tools|Custom Material" },
		{ "DisplayName", "Custom Material" },
		{ "EditCondition", "bUseCustomMaterial" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_CustomMaterial = { "CustomMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlockoutToolsParent, CustomMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_CustomMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_CustomMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bUseCustomMaterial_MetaData[] = {
		{ "Category", "Blockout Tools|Custom Material" },
		{ "DisplayName", "Use Custom Material" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
#endif
	void Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bUseCustomMaterial_SetBit(void* Obj)
	{
		((ABlockoutToolsParent*)Obj)->bUseCustomMaterial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bUseCustomMaterial = { "bUseCustomMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABlockoutToolsParent), &Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bUseCustomMaterial_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bUseCustomMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bUseCustomMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutMeshComponents_MetaData[] = {
		{ "Category", "Blockout Tools" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutMeshComponents = { "BlockoutMeshComponents", nullptr, (EPropertyFlags)0x001000800000001c, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlockoutToolsParent, BlockoutMeshComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutMeshComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutMeshComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutMeshComponents_Inner = { "BlockoutMeshComponents", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutCurrentMaterial_MetaData[] = {
		{ "Category", "Blockout Tools" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutCurrentMaterial = { "BlockoutCurrentMaterial", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlockoutToolsParent, BlockoutCurrentMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutCurrentMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutCurrentMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutGridMID_MetaData[] = {
		{ "Category", "Blockout Tools" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutGridMID = { "BlockoutGridMID", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlockoutToolsParent, BlockoutGridMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutGridMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutGridMID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutGridParent_MetaData[] = {
		{ "Category", "Blockout Tools" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutGridParent = { "BlockoutGridParent", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlockoutToolsParent, BlockoutGridParent), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutGridParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutGridParent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_Billboard_MetaData[] = {
		{ "Category", "Blockout Tools" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_Billboard = { "Billboard", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlockoutToolsParent, Billboard), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_Billboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_Billboard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "Blockout Tools" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlockoutToolsParent, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_Root_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlockoutToolsParent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutCastShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_CustomMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bUseCustomMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutMeshComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutMeshComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutCurrentMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutGridMID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutGridParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_Billboard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_Root,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABlockoutToolsParent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlockoutToolsParent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABlockoutToolsParent_Statics::ClassParams = {
		&ABlockoutToolsParent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABlockoutToolsParent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABlockoutToolsParent_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABlockoutToolsParent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockoutToolsParent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABlockoutToolsParent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABlockoutToolsParent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABlockoutToolsParent, 3297587093);
	template<> BLOCKOUTTOOLSPLUGIN_API UClass* StaticClass<ABlockoutToolsParent>()
	{
		return ABlockoutToolsParent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABlockoutToolsParent(Z_Construct_UClass_ABlockoutToolsParent, &ABlockoutToolsParent::StaticClass, TEXT("/Script/BlockoutToolsPlugin"), TEXT("ABlockoutToolsParent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlockoutToolsParent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
