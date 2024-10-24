// !!! This C++ file is generated by ioStudio !!!
#if !defined(__SMARTIP43_12V_50_2_H)
#define __SMARTIP43_12V_50_2_H
#include "ioSystem/Simulation/ioModel.h"
#include "Programs/Victron/Charge/DataCharge.h"
class SmartIp43_12V_50_2 : public ioModel
{
public:
    SmartIp43_12V_50_2();
    virtual ~SmartIp43_12V_50_2();
    virtual void InitializeItem(void);
    virtual void DoSimulation_100ms(Int32 slotCounter_100ms);
    virtual void SimulateVoltOutput(Float voltInputAc, Bool isOutputActive, Float* voltOutputDc);
    DataCharge Data;
};
#endif // __SMARTIP43_12V_50_2_H
