// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGStorySubsystem.h"

void AFGStorySubsystem::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGStorySubsystem::PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGStorySubsystem::PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGStorySubsystem::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGStorySubsystem::GatherDependencies_Implementation(TArray< UObject* >& out_dependentObjects){ }
bool AFGStorySubsystem::NeedTransform_Implementation(){ return bool(); }
bool AFGStorySubsystem::ShouldSave_Implementation() const{ return bool(); }
void AFGStorySubsystem::BeginPlay(){ }
void AFGStorySubsystem::OnSchematicPurchased(TSubclassOf< UFGSchematic > newSchematic){ }
void AFGStorySubsystem::AddPlayer( AFGCharacterPlayer* inPlayer){ }
void AFGStorySubsystem::OnPlayerAddedItemToInventory(TSubclassOf<  UFGItemDescriptor > itemClass, int32 numAdded){ }
void AFGStorySubsystem::OnResearchRecipeTimerComplete(TSubclassOf<class UFGSchematic> schematic){ }
void AFGStorySubsystem::OnResearchTreeUnlocked(TSubclassOf<UFGResearchTree> researchTree){ }
void AFGStorySubsystem::OnMapAreaVisited(TSubclassOf<  UFGMapArea > mapArea){ }
void AFGStorySubsystem::SetupDelegates(){ }
