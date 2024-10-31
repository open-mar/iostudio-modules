// !!! This C++ file is generated by ioStudio !!!
#if !defined(__IOSYSTEMGRAPHICS_H)
#define __IOSYSTEMGRAPHICS_H
#include "ioSystem/Core/ioTypes.h"
typedef enum
{
    Puid_NotDefined = 0,
    Puid_Batt_PanelCharge = 9,
    Puid_Batt_PanelCharge = 9,
    Puid_Victron_Charge_SelectCharger = 11,
    Puid_Victron_Charge_InstrVoltOutput = 10,
    Puid_Victron_Charge_LabelHeaderChargeInput = 1,
    Puid_Victron_Charge_LabelHeaderChargeOutput = 4,
    Puid_Victron_Charge_InstrVoltInput = 2,
    Puid_Victron_Charge_InstVoltOutput = 3,
    Puid_Victron_DcDc_PanelDcDc_SelectDcDc = 12,
    Puid_Victron_DcDc_LabelHeaderDcDcInput = 5,
    Puid_Victron_DcDc_LabelHeaderDcDcOutput = 6,
    Puid_Victron_DcDc_InstrVoltInput = 7,
    Puid_Victron_DcDc_InstVoltOutput = 8,
} ioSystemGraphicsType;
class ioSystemGraphics
{
public:
    ioSystemGraphics();
    virtual ~ioSystemGraphics();
    static Int32 GetGraphicsID(ioSystemGraphicsType puid);
    static ioSystemGraphicsType GetGraphicsType(Int32 puidValue);
};
#endif // __IOSYSTEMGRAPHICS_H
