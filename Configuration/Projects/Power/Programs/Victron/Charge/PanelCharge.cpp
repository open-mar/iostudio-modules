// !!! This C++ file is generated by ioStudio !!!
#include "pch.h"
#pragma hdrstop
#include "PanelCharge.h"
#include "Programs/ioSystemGraphics.h"
PanelCharge::PanelCharge()
{
}
PanelCharge::~PanelCharge()
{
}
void PanelCharge::InitializeData(void)
{
    m_PanelGraphics.SetListData((ioItem**)m_PanelChargeGraphics, 6);
    AddGraphics(&SelectCharger, Puid_Victron_Charge_SelectCharger);
    AddGraphics(&InstrVoltOutput, Puid_Victron_Charge_InstrVoltOutput);
    InstrVoltOutput.SetTextForced((ioChars)"14.2");
    InstrVoltOutput.SetDecimals(1);
    AddGraphics(&LabelHeaderChargeInput, Puid_Victron_Charge_LabelHeaderChargeInput);
    LabelHeaderChargeInput.SetTextForced((ioChars)"CHARGE INPUT [VAC]");
    AddGraphics(&LabelHeaderChargeOutput, Puid_Victron_Charge_LabelHeaderChargeOutput);
    LabelHeaderChargeOutput.SetTextForced((ioChars)"CHARGE OUTPUT [VDC]");
    AddGraphics(&InstrVoltInput, Puid_Victron_Charge_InstrVoltInput);
    InstrVoltInput.SetTextForced((ioChars)"220.1");
    InstrVoltInput.SetDecimals(1);
    AddGraphics(&InstVoltOutput, Puid_Victron_Charge_InstVoltOutput);
    InstVoltOutput.SetTextForced((ioChars)"14.3");
    InstVoltOutput.SetDecimals(1);
}
