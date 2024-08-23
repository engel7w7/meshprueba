// Fill out your copyright notice in the Description page of Project Settings.


#include "SafeBox.h"

// Sets default values
ASafeBox::ASafeBox()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> 
		BoxMesh(TEXT("StaticMesh'/Game/Meshs/CajaFuerte/cajaStaticMesh.cajaStaticMesh'"));
	SafeBoxMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SafeBoxMesh"));
	SafeBoxMesh->SetStaticMesh(BoxMesh.Object);
	SetRootComponent(SafeBoxMesh);

}

// Called when the game starts or when spawned
void ASafeBox::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASafeBox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

