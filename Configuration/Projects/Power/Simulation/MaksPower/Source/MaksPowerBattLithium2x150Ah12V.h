// !!! This C++ file is generated by ioStudio !!!
#if !defined(__MAKSPOWERBATTLITHIUM2X150AH12V_H)
#define __MAKSPOWERBATTLITHIUM2X150AH12V_H
#include "ioSystem/Simulation/ioModel.h"
#include "Programs/Ids/Source/DataBattery.h"
#include "Programs/Ids/Source/DataBatteryModel.h"
class MaksPowerBattLithium2x150Ah12V : public ioModel
{
public:
    MaksPowerBattLithium2x150Ah12V();
    virtual ~MaksPowerBattLithium2x150Ah12V();
    virtual void InitializeItem(void);
    virtual void DoSimulation_100ms(Int32 slotCounter_100ms);
    DataBattery BatteryData;
    DataBatteryModel ModelData;
};
#endif // __MAKSPOWERBATTLITHIUM2X150AH12V_H
