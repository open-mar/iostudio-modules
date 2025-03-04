// !!! This C++ file is generated by ioStudio !!!
#if !defined(__FUSEMODEL_H)
#define __FUSEMODEL_H
#include "ioSystem/Simulation/ioModel.h"
#include "Programs/Ops/Isolate/FuseModelData.h"
class FuseModel : public ioModel
{
public:
    FuseModel();
    virtual ~FuseModel();
    // Initialize simulation model
    virtual void InitializeItem(void);
    // Do simulation every 100ms (slotCounter_100ms: Slot ID for simulation task)
    virtual void DoSimulation_100ms(Int32 slotCounter_100ms);
    FuseModelData ModelData;
};
#endif // __FUSEMODEL_H
