// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGC4Explosive.h"
#include "FGDamageType.h"

AFGC4Explosive::AFGC4Explosive() : Super() {
	this->mBaseDamage = 100;
	this->mDamageRadius = 1000;
	this->mDamageType = UFGDamageType::StaticClass();
	this->bReplicateMovement = true;
	this->bReplicates = true;
}
void AFGC4Explosive::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGC4Explosive::Detonate(){ }
void AFGC4Explosive::PlayExplosionEffects_Implementation(){ }
void AFGC4Explosive::OnRep_IsDetonated(){ }
