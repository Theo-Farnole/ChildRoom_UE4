// Copyright 2020 Dmitry Karpukhin. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
//#include "BlockoutToolsPluginSettings.h"
#include "GameFramework/Actor.h"
#include "Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"

#include "BlockoutToolsParent.generated.h"

UCLASS()
class BLOCKOUTTOOLSPLUGIN_API ABlockoutToolsParent : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABlockoutToolsParent();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	ABlockoutToolsParent(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(BlueprintReadOnly, Category = "Blockout Tools")
		USceneComponent* Root;

	UPROPERTY(BlueprintReadOnly, Category = "Blockout Tools")
		UBillboardComponent* Billboard;

	UPROPERTY(BlueprintReadOnly, Category = "Blockout Tools")
		UMaterialInterface* BlockoutGridParent;

	UPROPERTY(BlueprintReadOnly, Category = "Blockout Tools")
		UMaterialInstanceDynamic* BlockoutGridMID;

	UPROPERTY(BlueprintReadOnly, Category = "Blockout Tools")
		UMaterialInterface* BlockoutCurrentMaterial;

	UPROPERTY(BlueprintReadOnly, Category = "Blockout Tools")
		TArray<UStaticMeshComponent*> BlockoutMeshComponents;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Blockout Tools|Custom Material", DisplayName = "Use Custom Material")
		bool bUseCustomMaterial;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Blockout Tools|Custom Material", DisplayName = "Custom Material", meta = (EditCondition = "bUseCustomMaterial") )
		UMaterialInterface* CustomMaterial;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Blockout Tools|Rendering", DisplayName = "Cast Shadows")
		bool bBlockoutCastShadows;

private:

	UFUNCTION(BlueprintCallable, Category = "Blockout Tools")
		void BlockoutSetMaterial(bool bUseGrid, FLinearColor Color, bool bUseTopColor, FLinearColor TopColor);

/*	UFUNCTION(BlueprintCallable, Category = "Blockout Tools")
		void RoundVariables(bool bRoundSize, float InFloat, FVector InVector, FVector2D InVector2D); */

};