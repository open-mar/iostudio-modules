// !!! This C++ file is generated by ioStudio !!!
#if !defined(__SWITCHMODEL_H)
#define __SWITCHMODEL_H
#include "ioSystem/Simulation/ioModel.h"
class SwitchModel : public ioModel
{
public:
    SwitchModel();
    virtual ~SwitchModel();
    // Initialize simulation model
    virtual void InitializeItem(void);
    // Do simulation every 100ms (slotCounter_100ms: Slot ID for simulation task)
    virtual void DoSimulation_100ms(Int32 slotCounter_100ms);
};
#endif // __SWITCHMODEL_H
