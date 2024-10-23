// !!! This C++ file is generated by ioStudio !!!
#include "pch.h"
#pragma hdrstop
#include "BattDcDataDc12.h"
BattDcDataDc12::BattDcDataDc12()
{
    InitializeData();
}
BattDcDataDc12::~BattDcDataDc12()
{
}
void BattDcDataDc12::InitializeData(void)
{
    BattDcData::InitializeData();
    BattVolt.SetValue((Float)12.00);
    AddData((ioData*)&BattVolt, Duid_Batt_Dc12_BattVolt);
    BattAmpM.SetValue((Float)0);
    AddData((ioData*)&BattAmpM, Duid_Batt_Dc12_BattAmpM);
    BattAmpF.SetValue((Float)0);
    AddData((ioData*)&BattAmpF, Duid_Batt_Dc12_BattAmpF);
    BattAmpA.SetValue((Float)0.00);
    AddData((ioData*)&BattAmpA, Duid_Batt_Dc12_BattAmpA);
    BattAmpOut.SetValue((Float)0);
    AddData((ioData*)&BattAmpOut, Duid_Batt_Dc12_BattAmpOut);
    BattAmpIn.SetValue((Float)0);
    AddData((ioData*)&BattAmpIn, Duid_Batt_Dc12_BattAmpIn);
    BattAmpAvg.SetValue((Float)0);
    AddData((ioData*)&BattAmpAvg, Duid_Batt_Dc12_BattAmpAvg);
    IsChargeActive.SetValue(FALSE);
    AddData((ioData*)&IsChargeActive, Duid_Batt_Dc12_IsChargeActive);
    AddData((ioData*)&ResponseDcData, Duid_Batt_Dc12_ResponseDcData);
    BattSoc.SetValue((Float)99.9);
    AddData((ioData*)&BattSoc, Duid_Batt_Dc12_BattSoc);
}
