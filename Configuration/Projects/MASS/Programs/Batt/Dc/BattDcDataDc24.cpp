// !!! This C++ file is generated by ioStudio !!!
#include "pch.h"
#pragma hdrstop
#include "BattDcDataDc24.h"
BattDcDataDc24::BattDcDataDc24()
{
    InitializeData();
}
BattDcDataDc24::~BattDcDataDc24()
{
}
void BattDcDataDc24::InitializeData(void)
{
    BattDcData::InitializeData();
    BattVolt.SetValue((Float)24);
    AddData((ioData*)&BattVolt, Duid_Batt_Dc24_BattVolt);
    BattAmpOut.SetValue((Float)0);
    AddData((ioData*)&BattAmpOut, Duid_Batt_Dc24_BattAmpOut);
    BattAmpIn.SetValue((Float)0);
    AddData((ioData*)&BattAmpIn, Duid_Batt_Dc24_BattAmpIn);
    BattAmpAvg.SetValue((Float)0.00);
    AddData((ioData*)&BattAmpAvg, Duid_Batt_Dc24_BattAmpAvg);
    AddData((ioData*)&RequestDcData, Duid_Batt_Dc24_RequestDcData);
    AddData((ioData*)&ResponseDcData, Duid_Batt_Dc24_ResponseDcData);
}
