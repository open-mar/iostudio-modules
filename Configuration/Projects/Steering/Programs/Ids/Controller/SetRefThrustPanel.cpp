// !!! This C++ file is generated by ioStudio !!!
#include "pch.h"
#pragma hdrstop
#include "SetRefThrustPanel.h"
#include "Programs/ioSystemGraphics.h"
SetRefThrustPanel::SetRefThrustPanel()
{
}
SetRefThrustPanel::~SetRefThrustPanel()
{
}
void SetRefThrustPanel::InitializeData(void)
{
    m_PanelGraphics.SetListData((ioItem**)m_SetRefThrustPanelGraphics, 8);
    AddGraphics(&ButtonThrustLeftSmall, Puid_Ids_Controller_ButtonThrustLeftSmall);
    ButtonThrustLeftSmall.SetTextForced((ioChars)"-1");
    AddGraphics(&LabelThrustCmdHeader, Puid_Ids_Controller_LabelThrustCmdHeader);
    LabelThrustCmdHeader.SetTextForced((ioChars)"THRUST CMD");
    AddGraphics(&LabelThrustCmdHeaderUnit, Puid_Ids_Controller_LabelThrustCmdHeaderUnit);
    LabelThrustCmdHeaderUnit.SetTextForced((ioChars)"%");
    AddGraphics(&InstrThrustCmd, Puid_Ids_Controller_InstrThrustCmd);
    InstrThrustCmd.SetTextForced((ioChars)"0");
    InstrThrustCmd.SetDecimals(1);
    AddGraphics(&ButtThrustRightSmall, Puid_Ids_Controller_ButtThrustRightSmall);
    ButtThrustRightSmall.SetTextForced((ioChars)"+1");
    AddGraphics(&ButtThrustLeftBig, Puid_Ids_Controller_ButtThrustLeftBig);
    ButtThrustLeftBig.SetTextForced((ioChars)"-10");
    AddGraphics(&ButtThrustMidZero, Puid_Ids_Controller_ButtThrustMidZero);
    ButtThrustMidZero.SetTextForced((ioChars)"0");
    AddGraphics(&ButtRThrustightBig, Puid_Ids_Controller_ButtRThrustightBig);
    ButtRThrustightBig.SetTextForced((ioChars)"+10");
}
