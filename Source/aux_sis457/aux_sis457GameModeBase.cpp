// Copyright Epic Games, Inc. All Rights Reserved.


#include "aux_sis457GameModeBase.h"
#include "SafeBox.h"

Aaux_sis457GameModeBase::Aaux_sis457GameModeBase()
{
}

void Aaux_sis457GameModeBase::BeginPlay()
{
	Super::BeginPlay();
	FVector posx = FVector(-150.0f, -30.0f, 20);
	for (int i = 0; i<=5; i++) {
		SafeBox = GetWorld()->SpawnActor<ASafeBox>
			(ASafeBox::StaticClass(),posx,FRotator::ZeroRotator);
		posx += FVector(50.0f, 0.0f, 0.0f);
	}

}
	
