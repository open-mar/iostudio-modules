// !!! This C++ file is generated by ioStudio !!!
#include "pch.h"
#pragma hdrstop
#include "InstrumentDepth.h"
#include "Programs/ioSystemGraphics.h"
InstrumentDepth::InstrumentDepth()
{
}
InstrumentDepth::~InstrumentDepth()
{
}
void InstrumentDepth::InitializeData(void)
{
    m_PanelGraphics.SetListData((ioItem**)m_InstrumentDepthGraphics, 4);
    AddGraphics(&LabeDptInstrHeader, Puid_Ids_Track_LabeDptInstrHeader);
    LabeDptInstrHeader.SetTextForced((ioChars)"DPT");
    AddGraphics(&LabelDptInstrHeaderUnit, Puid_Ids_Track_LabelDptInstrHeaderUnit);
    LabelDptInstrHeaderUnit.SetTextForced((ioChars)"m");
    AddGraphics(&InstrDptInstr, Puid_Ids_Track_InstrDptInstr);
    InstrDptInstr.SetTextForced((ioChars)"0.0");
    InstrDptInstr.SetDecimals(1);
    AddGraphics(&CompDepth, Puid_Ids_Track_CompDepth);
}
