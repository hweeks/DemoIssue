// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGFluidIntegrantInterface.h"

bool FFluidBox::Serialize(FArchive& ar){ 
	if (ar.ArIsSaveGame) {

        ar << Content;
    }
	return true;
}
bool FFluidBox::operator==(const FFluidBox& other) const{ 
	return !this->operator!=(other);
}
bool FFluidBox::operator!=(const FFluidBox& other) const{ 
	return (bool)FPlatformMemory::Memcmp(this, &other, sizeof(FFluidBox));
}
void IFGFluidIntegrantInterface::OnFluidDescriptorSet(){ }
