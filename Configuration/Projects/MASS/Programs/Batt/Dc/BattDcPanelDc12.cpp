// !!! This C++ file is generated by ioStudio !!!
#include "pch.h"
#pragma hdrstop
#include "BattDcPanelDc12.h"
#include "Programs/ioSystemGraphics.h"
BattDcPanelDc12::BattDcPanelDc12()
{
    InitializeData();
}
BattDcPanelDc12::~BattDcPanelDc12()
{
}
void BattDcPanelDc12::InitializeData(void)
{
    BattDcPanel::InitializeData();
    AddGraphics(&LabelBatt, Puid_Batt_Dc12_LabelBatt);
    LabelBatt.SetTextForced((ioChars)"BATTERY 12V");
    AddGraphics(&InstrVolt, Puid_Batt_Dc12_InstrVolt);
    InstrVolt.SetTextForced((ioChars)"12.12");
    InstrVolt.SetDecimals(2);
    AddGraphics(&InstrAmpAvg, Puid_Batt_Dc12_InstrAmpAvg);
    InstrAmpAvg.SetTextForced((ioChars)"2.12");
    InstrAmpAvg.SetDecimals(1);
    AddGraphics(&InstrSoc, Puid_Batt_Dc12_InstrSoc);
    InstrSoc.SetTextForced((ioChars)"99.9");
    InstrSoc.SetDecimals(1);
    AddGraphics(&LabelVolt, Puid_Batt_Dc12_LabelVolt);
    LabelVolt.SetTextForced((ioChars)"Voltage [VDC]");
    AddGraphics(&LabelAmpAvg, Puid_Batt_Dc12_LabelAmpAvg);
    LabelAmpAvg.SetTextForced((ioChars)"Current [A]");
    AddGraphics(&LabelSoc, Puid_Batt_Dc12_LabelSoc);
    LabelSoc.SetTextForced((ioChars)"SOC [%]");
}
