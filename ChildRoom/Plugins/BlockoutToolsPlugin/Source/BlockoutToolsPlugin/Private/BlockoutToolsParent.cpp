// Copyright 2020 Dmitry Karpukhin. All Rights Reserved.

#include "BlockoutToolsParent.h"
#include "Components/SceneComponent.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"

// Sets default values
ABlockoutToolsParent::ABlockoutToolsParent(const FObjectInitializer  &ObjectInitializer)
	: Super(ObjectInitializer)
{
	//Structure to hold one-time initialization
	struct FConstructorStatics
	{
		//Find billboard icon texture
		ConstructorHelpers::FObjectFinderOptional<UTexture2D> BillboardIcon;
		//Find material objects
		ConstructorHelpers::FObjectFinderOptional<UMaterialInterface> BlockoutGridParentMaterial;
		ConstructorHelpers::FObjectFinderOptional<UMaterialInterface> BlockoutCustomMaterial;

		FConstructorStatics()
			: BillboardIcon(TEXT("Texture2D'/BlockoutToolsPlugin/Textures/T_Blockout_Actor_Icon'"))
			, BlockoutGridParentMaterial(TEXT("MaterialInterface'/BlockoutToolsPlugin/Materials/MI_BlockoutTools_Grid.MI_BlockoutTools_Grid'"))
			, BlockoutCustomMaterial(TEXT("MaterialInterface'/BlockoutToolsPlugin/Materials/MI_BlockoutTools_Custom.MI_BlockoutTools_Custom'"))
		{
		}
	};
	static FConstructorStatics ConstructorStatics;

	//Set default values
	PrimaryActorTick.bStartWithTickEnabled = false;
	PrimaryActorTick.bAllowTickOnDedicatedServer = false;

	bNetUseOwnerRelevancy = true;

	BlockoutGridParent = ConstructorStatics.BlockoutGridParentMaterial.Get();
	CustomMaterial = ConstructorStatics.BlockoutCustomMaterial.Get();
	bBlockoutCastShadows = true;

//	bRunConstructionScriptOnDrag = false;

	//Set root
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	Root->SetMobility(EComponentMobility::Type::Static);
	RootComponent = Root;

#if WITH_EDITOR
	//Set billboard
	Billboard = CreateEditorOnlyDefaultSubobject<UBillboardComponent>(TEXT("Billboard"));
	if (Billboard)
	{
		Billboard->SetMobility(EComponentMobility::Type::Static);
		Billboard->SetupAttachment(RootComponent);
		Billboard->Sprite = ConstructorStatics.BillboardIcon.Get();
		Billboard->bIsScreenSizeScaled = true;
		Billboard->ScreenSize = 0.0005f;
	}
#endif
}

// Called when the game starts or when spawned
void ABlockoutToolsParent::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABlockoutToolsParent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABlockoutToolsParent::BlockoutSetMaterial(bool bUseGrid, FLinearColor Color, bool bUseTopColor, FLinearColor TopColor)
{
	// Create MID of a blockout parent grid material
	if (BlockoutGridParent != NULL)
	{
		BlockoutGridMID = UMaterialInstanceDynamic::Create(BlockoutGridParent, this);
	}

	// Set material parameters
	if (bUseCustomMaterial)
	{
//		StaticMesh->SetMaterial(0, CustomMaterial);
		BlockoutCurrentMaterial = CustomMaterial;
	}
	else if (BlockoutGridMID != NULL)
	{
		if (bUseGrid == true)
		{
			BlockoutGridMID->SetScalarParameterValue("GridAlpha", 1.0f);
		}
		else {
			BlockoutGridMID->SetScalarParameterValue("GridAlpha", 0.0f);
		}

//		MID->SetScalarParameterValue("GridSize", GridSize);

		BlockoutGridMID->SetVectorParameterValue("Color", Color);

		if (bUseTopColor == true)
		{
			BlockoutGridMID->SetScalarParameterValue("TopColorAlpha", 1.0f);
		}
		else {
			BlockoutGridMID->SetScalarParameterValue("TopColorAlpha", 0.0f);
		}

		BlockoutGridMID->SetVectorParameterValue("TopColor", TopColor);

//		StaticMesh->SetMaterial(0, MID);
		BlockoutCurrentMaterial = BlockoutGridMID;
	}

	// Assign material and shadow to meshes
	this->GetComponents(BlockoutMeshComponents);
	for (auto StaticMeshComponent : BlockoutMeshComponents)
	{
		StaticMeshComponent->SetMaterial(0, BlockoutCurrentMaterial);
		StaticMeshComponent->SetCastShadow(bBlockoutCastShadows);
	}
}
/*
void ABlockoutToolsParent::RoundVariables(bool bRoundSize, float InFloat, FVector InVector, FVector2D InVector2D)
{

}*/
