// !!! This C++ file is generated by ioStudio !!!
#include "pch.h"
#pragma hdrstop
#include "ioSystemData.h"
TypeUnit::TypeUnit()
{
}
TypeUnit::~TypeUnit()
{
}
Bool TypeUnit::GetActiveText(ioString* enumText)
{
    if (enumText == NULL) return FALSE;
    Int32 activeID = GetValueSigned();
    switch (activeID)
    {
    case 0: enumText->Set((ioChars)"m/s"); return TRUE;
    case 1: enumText->Set((ioChars)"kt"); return TRUE;
    case 2: enumText->Set((ioChars)"kg"); return TRUE;
    case 3: enumText->Set((ioChars)"nm"); return TRUE;
    case 4: enumText->Set((ioChars)"m"); return TRUE;
    case 5: enumText->Set((ioChars)"°C"); return TRUE;
    default: enumText->Set((ioChars)"NotDefined");  return FALSE;
    } // switch
}
StationModeType::StationModeType()
{
}
StationModeType::~StationModeType()
{
}
Bool StationModeType::GetActiveText(ioString* enumText)
{
    if (enumText == NULL) return FALSE;
    Int32 activeID = GetValueSigned();
    switch (activeID)
    {
    case 0: enumText->Set((ioChars)"No command"); return TRUE;
    case 1: enumText->Set((ioChars)"Taken"); return TRUE;
    case 2: enumText->Set((ioChars)"Remote control"); return TRUE;
    case 3: enumText->Set((ioChars)"Taken and locked"); return TRUE;
    case 4: enumText->Set((ioChars)"Take over request"); return TRUE;
    default: enumText->Set((ioChars)"NotDefined");  return FALSE;
    } // switch
}
ioSystemData::ioSystemData()
{
}
ioSystemData::~ioSystemData()
{
}
Int32 ioSystemData::GetDataID(ioSystemDataType duid)
{
    return (Int32)duid;
}
ioSystemDataType ioSystemData::GetDataType(Int32 duidValue)
{
    switch (duidValue)
    {
    default: return Duid_NotDefined; 
    case 0: return Duid_NotDefined; 
    case 32: return Duid_Ids_Consume_IsOutputOn; 
    case 33: return Duid_Ids_Consume_PowerConsumer; 
    case 20: return Duid_Ids_Convert_VoltageInputAc; 
    case 22: return Duid_Ids_Convert_IsChargingActive; 
    case 3: return Duid_Ids_Convert_CurrentOutputDc; 
    case 4: return Duid_Ids_Convert_VoltageOutputDc; 
    case 7: return Duid_Ids_Convert_CurrentInputAc; 
    case 23: return Duid_Ids_Convert_MaxOutCurrentDc; 
    case 24: return Duid_Ids_Convert_VoltageInputDcDc; 
    case 25: return Duid_Ids_Convert_VoltageOutputDcDc; 
    case 26: return Duid_Ids_Convert_IsDcDcOutputActive; 
    case 27: return Duid_Ids_Convert_MaxOutCurrentDcDc; 
    case 5: return Duid_Ids_Convert_CurrentInputDcDc; 
    case 6: return Duid_Ids_Convert_CurrentOutputDcDc; 
    case 37: return Duid_Ids_Isolate_MaxFuseCurrent; 
    case 35: return Duid_Ids_Isolate_IsFuseBlown; 
    case 38: return Duid_Ids_Isolate_ResetFuse; 
    case 21: return Duid_Ids_Source_VoltageBattery; 
    case 31: return Duid_Ids_Source_CurrentBattery; 
    case 34: return Duid_Ids_Source_StatusOfCharge; 
    case 36: return Duid_Ids_Source_BatteryChargeResistance; 
    case 39: return Duid_Ids_Source_BatteryEnergy; 
    case 28: return Duid_Ids_Source_VoltOutputGenerator; 
    case 30: return Duid_Ids_Source_IsGeneratorOutputActive; 
    case 29: return Duid_Ids_Source_MaxOutCurrentGenerator; 
    case 8: return Duid_Ids_Source_CurrentGenerator; 
    case 1: return Duid_Victron_RequestVictronData; 
    case 2: return Duid_Victron_ResponseVictronData; 
    case 9: return Duid_Victron_Io_RequestDataCgx; 
    case 10: return Duid_Victron_Io_ResponseDataCgx; 
    case 11: return Duid_Victron_Io_Dc0Voltage; 
    case 12: return Duid_Victron_Io_Dc0MidVoltage; 
    case 13: return Duid_Victron_Io_Dc0MidVoltageDeviation; 
    case 14: return Duid_Victron_Io_Dc0Current; 
    case 15: return Duid_Victron_Io_Dc0Power; 
    case 16: return Duid_Victron_Io_Dc1Voltage; 
    case 17: return Duid_Victron_Io_Soc; 
    case 18: return Duid_Victron_Io_ConsumedAmphours; 
    case 19: return Duid_Victron_Io_Dc0Temperature; 
    } // switch
}
