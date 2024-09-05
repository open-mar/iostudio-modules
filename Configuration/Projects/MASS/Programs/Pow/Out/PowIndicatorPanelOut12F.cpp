// !!! This C++ file is generated by ioStudio !!!
#include "pch.h"
#pragma hdrstop
#include "PowIndicatorPanelOut12F.h"
#include "Programs/ioSystemGraphics.h"
PowIndicatorPanelOut12F::PowIndicatorPanelOut12F()
{
    InitializeData();
}
PowIndicatorPanelOut12F::~PowIndicatorPanelOut12F()
{
}
void PowIndicatorPanelOut12F::InitializeData(void)
{
    PowIndicatorPanel::InitializeData();
    AddGraphics(&ShpOnOffInd1, Puid_Pow_Out12F_ShpOnOffInd1);
    AddGraphics(&LabelNameInd1, Puid_Pow_Out12F_LabelNameInd1);
    LabelNameInd1.SetTextForced((ioChars)"NameChannel_12F1");
    AddGraphics(&ShpOnOffInd2, Puid_Pow_Out12F_ShpOnOffInd2);
    AddGraphics(&LabelNameInd2, Puid_Pow_Out12F_LabelNameInd2);
    LabelNameInd2.SetTextForced((ioChars)"NameChannel_12F2");
    AddGraphics(&ShpOnOffInd3, Puid_Pow_Out12F_ShpOnOffInd3);
    AddGraphics(&LabelNameInd3, Puid_Pow_Out12F_LabelNameInd3);
    LabelNameInd3.SetTextForced((ioChars)"NameChannel_12F3");
    AddGraphics(&ShpOnOffInd4, Puid_Pow_Out12F_ShpOnOffInd4);
    AddGraphics(&LabelNameInd4, Puid_Pow_Out12F_LabelNameInd4);
    LabelNameInd4.SetTextForced((ioChars)"NameChannel_12F4");
    AddGraphics(&ShpOnOffInd5, Puid_Pow_Out12F_ShpOnOffInd5);
    AddGraphics(&LabelNameInd5, Puid_Pow_Out12F_LabelNameInd5);
    LabelNameInd5.SetTextForced((ioChars)"NameChannel_12F5");
    AddGraphics(&ShpOnOffInd6, Puid_Pow_Out12F_ShpOnOffInd6);
    AddGraphics(&LabelNameInd6, Puid_Pow_Out12F_LabelNameInd6);
    LabelNameInd6.SetTextForced((ioChars)"NameChannel_12F6");
    AddGraphics(&ShpOnOffInd7, Puid_Pow_Out12F_ShpOnOffInd7);
    AddGraphics(&LabelNameInd7, Puid_Pow_Out12F_LabelNameInd7);
    LabelNameInd7.SetTextForced((ioChars)"NameChannel_12F7");
    AddGraphics(&ShpOnOffInd8, Puid_Pow_Out12F_ShpOnOffInd8);
    AddGraphics(&LabelNameInd8, Puid_Pow_Out12F_LabelNameInd8);
    LabelNameInd8.SetTextForced((ioChars)"NameChannel_12F8");
}
