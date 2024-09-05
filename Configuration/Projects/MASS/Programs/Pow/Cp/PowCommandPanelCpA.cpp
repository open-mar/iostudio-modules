// !!! This C++ file is generated by ioStudio !!!
#include "pch.h"
#pragma hdrstop
#include "PowCommandPanelCpA.h"
#include "Programs/ioSystemGraphics.h"
PowCommandPanelCpA::PowCommandPanelCpA()
{
    InitializeData();
}
PowCommandPanelCpA::~PowCommandPanelCpA()
{
}
void PowCommandPanelCpA::InitializeData(void)
{
    PowCommandPanel::InitializeData();
    AddGraphics(&HeaderCommandPanelPow, Puid_Pow_CpA_HeaderCommandPanelPow);
    HeaderCommandPanelPow.SetTextForced((ioChars)"COMMAND POWER AFT COCKPIT");
    AddGraphics(&ShapeCommandStatusPow, Puid_Pow_CpA_ShapeCommandStatusPow);
    AddGraphics(&LabelPowerMode, Puid_Pow_CpA_LabelPowerMode);
    LabelPowerMode.SetTextForced((ioChars)"NO POWER");
    AddGraphics(&TextCommandStatusPow, Puid_Pow_CpA_TextCommandStatusPow);
    TextCommandStatusPow.SetTextForced((ioChars)"No station in command");
    TextCommandStatusPow.SetDecimals(1);
    AddGraphics(&ButtTakeRequestPow, Puid_Pow_CpA_ButtTakeRequestPow);
    ButtTakeRequestPow.SetTextForced((ioChars)"Take");
    AddGraphics(&ButtReleasePow, Puid_Pow_CpA_ButtReleasePow);
    ButtReleasePow.SetTextForced((ioChars)"Release");
}
