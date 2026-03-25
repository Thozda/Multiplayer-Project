// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/Flag.h"

#include "Character/BlasterCharacter.h"
#include "Components/SphereComponent.h"
#include "Components/WidgetComponent.h"

AFlag::AFlag()
{
	SetRootComponent(RootComponent);
	
	FlagMesh = CreateDefaultSubobject<UChildActorComponent>(TEXT("FlagMesh"));
	FlagMesh->SetupAttachment(GetRootComponent());
	FlagMesh->SetChildActorClass(FlagMeshClass);

	GetAreaSphere()->SetupAttachment(FlagMesh);

	GetPickupWidget()->SetupAttachment(GetAreaSphere());
}

void AFlag::Dropped()
{
	SetWeaponState(EWeaponState::EWS_Dropped);
	DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
	DroppedLocation = FlagMesh->GetRelativeLocation();
	SetOwner(nullptr);
	BlasterOwnerCharacter = nullptr;
	BlasterOwnerController = nullptr;
}

void AFlag::BeginPlay()
{
	Super::BeginPlay();
	
	InitialTransform = GetActorTransform();
}

void AFlag::OnEquipped()
{
	ShowPickupWidget(false);
	GetAreaSphere()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void AFlag::OnDropped()
{
	if (HasAuthority())
	{
		GetAreaSphere()->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
		GetAreaSphere()->SetRelativeLocation(DroppedLocation);
	}
	SetActorRotation(FRotator::ZeroRotator);
}

void AFlag::ResetFlag()
{
	ABlasterCharacter* FlagBearer = Cast<ABlasterCharacter>(GetOwner());
	if (FlagBearer)
	{
		FlagBearer->SetHoldingTheFlag(false);
		FlagBearer->SetOverlappingWeapon(nullptr);
		FlagBearer->UnCrouch();
	}

	if (!HasAuthority()) return;
	
	SetWeaponState(EWeaponState::EWS_Dropped);
	DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
	
	GetAreaSphere()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	GetAreaSphere()->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);

	SetWeaponState(EWeaponState::EWS_Initial);
	SetOwner(nullptr);
	BlasterOwnerCharacter = nullptr;
	BlasterOwnerController = nullptr;
	
	SetActorTransform(InitialTransform);
}
