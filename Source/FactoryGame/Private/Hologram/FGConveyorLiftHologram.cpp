// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGConveyorLiftHologram.h"
#include "FGBuildable.h"
#include "FGBuildableRoad.h"
#include "FGBuildableRailroadTrack.h"
#include "FGBuildableFoundation.h"

AFGConveyorLiftHologram::AFGConveyorLiftHologram() : Super() {
	this->mArrowDirection = EFactoryConnectionDirection::FCD_ANY;
	this->mMaxPlacementFloorAngle = 35;
	this->mValidHitClasses.Add(AFGBuildableFoundation::StaticClass()); this->mValidHitClasses.Add(AFGBuildableRailroadTrack::StaticClass()); this->mValidHitClasses.Add(AFGBuildableRoad::StaticClass()); this->mValidHitClasses.Add(AFGBuildable::StaticClass());
	this->bHidden = true;
	this->bReplicates = true;
}
void AFGConveyorLiftHologram::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGConveyorLiftHologram::BeginPlay(){ }
void AFGConveyorLiftHologram::Destroyed(){ }
bool AFGConveyorLiftHologram::IsValidHitResult(const FHitResult& hitResult) const{ return bool(); }
void AFGConveyorLiftHologram::SetHologramLocationAndRotation(const FHitResult& hitResult){ }
bool AFGConveyorLiftHologram::DoMultiStepPlacement(bool isInputFromARelease){ return bool(); }
bool AFGConveyorLiftHologram::TryUpgrade(const FHitResult& hitResult){ return bool(); }
AActor* AFGConveyorLiftHologram::GetUpgradedActor() const{ return nullptr; }
int32 AFGConveyorLiftHologram::GetBaseCostMultiplier() const{ return int32(); }
void AFGConveyorLiftHologram::CheckClearance(){ }
void AFGConveyorLiftHologram::SerializeConstructMessage(FArchive& ar, FNetConstructionID id){ }
void AFGConveyorLiftHologram::ServerPostConstructMessageDeserialization(){ }
void AFGConveyorLiftHologram::OnPendingConstructionHologramCreated_Implementation(AFGHologram* fromHologram){ }
void AFGConveyorLiftHologram::CheckValidFloor(){ }
void AFGConveyorLiftHologram::ConfigureActor( AFGBuildable* inBuildable) const{ }
void AFGConveyorLiftHologram::ConfigureComponents( AFGBuildable* inBuildable) const{ }
int32 AFGConveyorLiftHologram::GetRotationStep() const{ return int32(); }
void AFGConveyorLiftHologram::CheckValidPlacement(){ }
void AFGConveyorLiftHologram::OnRep_TopTransform(){ }
void AFGConveyorLiftHologram::UpdateClearance(){ }
void AFGConveyorLiftHologram::OnRep_ArrowDirection(){ }
bool AFGConveyorLiftHologram::CanConnectToConnection(UFGFactoryConnectionComponent* from, UFGFactoryConnectionComponent* to) const{ return bool(); }
FVector AFGConveyorLiftHologram::GetGuideLinesBaseLocation() const{ return FVector(); }