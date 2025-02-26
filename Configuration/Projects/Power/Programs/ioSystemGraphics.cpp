// !!! This C++ file is generated by ioStudio !!!
#include "pch.h"
#pragma hdrstop
#include "ioSystemGraphics.h"
ioSystemGraphics::ioSystemGraphics()
{
}
ioSystemGraphics::~ioSystemGraphics()
{
}
Int32 ioSystemGraphics::GetGraphicsID(ioSystemGraphicsType puid)
{
    return (Int32)puid;
}
ioSystemGraphicsType ioSystemGraphics::GetGraphicsType(Int32 puidValue)
{
    switch (puidValue)
    {
    default: return Puid_NotDefined; 
    case 0: return Puid_NotDefined; 
    case 65: return Puid_Ids_Consume_GridPanelCommand; 
    case 84: return Puid_Ids_Consume_GridPanelMode; 
    case 1: return Puid_Ids_Consume_HeaderCommandPanelPow; 
    case 2: return Puid_Ids_Consume_ShapeCommandStatusPow; 
    case 3: return Puid_Ids_Consume_LabelPowerMode; 
    case 4: return Puid_Ids_Consume_TextCommandStatusPow; 
    case 5: return Puid_Ids_Consume_ButtTakeRequestPow; 
    case 6: return Puid_Ids_Consume_ButtReleasePow; 
    case 7: return Puid_Ids_Consume_GridChInd1; 
    case 8: return Puid_Ids_Consume_ShpOnOffInd1; 
    case 9: return Puid_Ids_Consume_LabelNameInd1; 
    case 10: return Puid_Ids_Consume_GridChInd2; 
    case 11: return Puid_Ids_Consume_ShpOnOffInd2; 
    case 12: return Puid_Ids_Consume_LabelNameInd2; 
    case 13: return Puid_Ids_Consume_GridChInd3; 
    case 14: return Puid_Ids_Consume_ShpOnOffInd3; 
    case 15: return Puid_Ids_Consume_LabelNameInd3; 
    case 16: return Puid_Ids_Consume_GridChInd4; 
    case 17: return Puid_Ids_Consume_ShpOnOffInd4; 
    case 18: return Puid_Ids_Consume_LabelNameInd4; 
    case 19: return Puid_Ids_Consume_GridChInd5; 
    case 20: return Puid_Ids_Consume_ShpOnOffInd5; 
    case 21: return Puid_Ids_Consume_LabelNameInd5; 
    case 22: return Puid_Ids_Consume_GridChInd6; 
    case 23: return Puid_Ids_Consume_ShpOnOffInd6; 
    case 24: return Puid_Ids_Consume_LabelNameInd6; 
    case 25: return Puid_Ids_Consume_GridChInd7; 
    case 26: return Puid_Ids_Consume_ShpOnOffInd7; 
    case 27: return Puid_Ids_Consume_LabelNameInd7; 
    case 28: return Puid_Ids_Consume_GridChInd8; 
    case 29: return Puid_Ids_Consume_ShpOnOffInd8; 
    case 30: return Puid_Ids_Consume_LabelNameInd8; 
    case 31: return Puid_Ids_Consume_ButtDockIdle; 
    case 32: return Puid_Ids_Consume_ButtDockConnectedShore; 
    case 33: return Puid_Ids_Consume_ButtDockNotConnected; 
    case 34: return Puid_Ids_Consume_ButtInTransit; 
    case 35: return Puid_Ids_Consume_ButtInTransitEngine; 
    case 36: return Puid_Ids_Consume_ButtInTransitSailing; 
    case 40: return Puid_Ids_Consume_GridCh1; 
    case 41: return Puid_Ids_Consume_ButtOffCh1; 
    case 42: return Puid_Ids_Consume_ButtOnCh1; 
    case 43: return Puid_Ids_Consume_GridCh2; 
    case 44: return Puid_Ids_Consume_ButtOffCh2; 
    case 45: return Puid_Ids_Consume_ButtOnCh2; 
    case 46: return Puid_Ids_Consume_GridCh3; 
    case 47: return Puid_Ids_Consume_ButtOffCh3; 
    case 48: return Puid_Ids_Consume_ButtOnCh3; 
    case 49: return Puid_Ids_Consume_GridCh4; 
    case 50: return Puid_Ids_Consume_ButtOffCh4; 
    case 51: return Puid_Ids_Consume_ButtOnCh4; 
    case 52: return Puid_Ids_Consume_GridCh5; 
    case 53: return Puid_Ids_Consume_ButtOffCh5; 
    case 54: return Puid_Ids_Consume_ButtOnCh5; 
    case 55: return Puid_Ids_Consume_GridCh6; 
    case 56: return Puid_Ids_Consume_ButtOffCh6; 
    case 57: return Puid_Ids_Consume_ButtOnCh6; 
    case 58: return Puid_Ids_Consume_GridCh7; 
    case 59: return Puid_Ids_Consume_ButtOffCh7; 
    case 60: return Puid_Ids_Consume_ButtOnCh7; 
    case 61: return Puid_Ids_Consume_GridCh8; 
    case 62: return Puid_Ids_Consume_ButtOffCh8; 
    case 63: return Puid_Ids_Consume_ButtOnCh8; 
    case 64: return Puid_Ids_Consume_IndOutPwr; 
    case 81: return Puid_Ids_Convert_LabelHeaderChargerName; 
    case 66: return Puid_Ids_Convert_LabelHeaderChargeInput; 
    case 82: return Puid_Ids_Convert_LabelHeaderChargeInputUnit; 
    case 68: return Puid_Ids_Convert_InstrVoltInputAc; 
    case 67: return Puid_Ids_Convert_LabelHeaderChargeOutput; 
    case 83: return Puid_Ids_Convert_LabelHeaderChargeOutputUnit; 
    case 69: return Puid_Ids_Convert_InstVoltOutputDc; 
    case 78: return Puid_Ids_Convert_LabelNameDcDcConv; 
    case 70: return Puid_Ids_Convert_LabelHeaderDcDcInput; 
    case 79: return Puid_Ids_Convert_LabelHeaderDcDcInputUnit; 
    case 72: return Puid_Ids_Convert_InstrVoltInputDcDc; 
    case 71: return Puid_Ids_Convert_LabelHeaderDcDcOutput; 
    case 80: return Puid_Ids_Convert_LabelHeaderDcDcOutputUnit; 
    case 73: return Puid_Ids_Convert_InstrVoltOutputDcDc; 
    case 37: return Puid_Ids_Source_LabelHeaderNameBatteryMonitor; 
    case 92: return Puid_Ids_Source_GridHeader; 
    case 74: return Puid_Ids_Source_LabelHeaderVoltBattery; 
    case 38: return Puid_Ids_Source_LabelHeaderVoltBatteryUnit; 
    case 75: return Puid_Ids_Source_InstrVoltBattery; 
    case 76: return Puid_Ids_Source_LabelHeaderCurrBattery; 
    case 39: return Puid_Ids_Source_LabelHeaderCurrBatteryUnit; 
    case 77: return Puid_Ids_Source_InstrCurrBattery; 
    case 85: return Puid_Ids_Source_LabelHeaderSocBattery; 
    case 86: return Puid_Ids_Source_LabelHeaderSocBatteryUnit; 
    case 87: return Puid_Ids_Source_InstrSocBattery; 
    case 88: return Puid_Ids_Source_LabelHeaderTtDischrgBattery; 
    case 89: return Puid_Ids_Source_InstrTtDischrgBattery; 
    } // switch
}
