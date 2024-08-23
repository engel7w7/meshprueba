// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "aux_sis457GameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class AUX_SIS457_API Aaux_sis457GameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	Aaux_sis457GameModeBase();
protected:
	virtual void BeginPlay() override;
private:
	class ASafeBox* SafeBox;
};
