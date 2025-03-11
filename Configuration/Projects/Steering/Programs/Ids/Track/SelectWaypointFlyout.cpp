// !!! This C++ file is generated by ioStudio !!!
#include "pch.h"
#pragma hdrstop
#include "SelectWaypointFlyout.h"
#include "Programs/ioSystemGraphics.h"
SelectWaypointFlyout::SelectWaypointFlyout()
{
}
SelectWaypointFlyout::~SelectWaypointFlyout()
{
}
void SelectWaypointFlyout::InitializeData(void)
{
    m_PanelGraphics.SetListData((ioItem**)m_SelectWaypointFlyoutGraphics, 12);
    AddGraphics(&LabelWptSelectHeader, Puid_Ids_Track_LabelWptSelectHeader);
    LabelWptSelectHeader.SetTextForced((ioChars)"WPT");
    AddGraphics(&CmbWptSelect, Puid_Ids_Track_CmbWptSelect);
    AddGraphics(&ButtonPrevWpt, Puid_Ids_Track_ButtonPrevWpt);
    ButtonPrevWpt.SetTextForced((ioChars)"Prev WPT");
    AddGraphics(&LabelBtwSelectWptHeader, Puid_Ids_Track_LabelBtwSelectWptHeader);
    LabelBtwSelectWptHeader.SetTextForced((ioChars)"BTW");
    AddGraphics(&LabelBtwSelectWptHeaderUnit, Puid_Ids_Track_LabelBtwSelectWptHeaderUnit);
    LabelBtwSelectWptHeaderUnit.SetTextForced((ioChars)"°T");
    AddGraphics(&LabelDtwSelectWptHeader, Puid_Ids_Track_LabelDtwSelectWptHeader);
    LabelDtwSelectWptHeader.SetTextForced((ioChars)"DTW");
    AddGraphics(&LabelDtwSelectWptHeaderUnit, Puid_Ids_Track_LabelDtwSelectWptHeaderUnit);
    LabelDtwSelectWptHeaderUnit.SetTextForced((ioChars)"m");
    AddGraphics(&ButtonCancelWptSelect, Puid_Ids_Track_ButtonCancelWptSelect);
    ButtonCancelWptSelect.SetTextForced((ioChars)"Cancel");
    AddGraphics(&ButtonNextWpt, Puid_Ids_Track_ButtonNextWpt);
    ButtonNextWpt.SetTextForced((ioChars)"Next WPT");
    AddGraphics(&InstrBtwSelectWpt, Puid_Ids_Track_InstrBtwSelectWpt);
    InstrBtwSelectWpt.SetTextForced((ioChars)"000");
    InstrBtwSelectWpt.SetDecimals(1);
    AddGraphics(&InstrDtwSelectWpt, Puid_Ids_Track_InstrDtwSelectWpt);
    InstrDtwSelectWpt.SetTextForced((ioChars)"0.0");
    InstrDtwSelectWpt.SetDecimals(1);
    AddGraphics(&ButtonSetActiveWpt, Puid_Ids_Track_ButtonSetActiveWpt);
    ButtonSetActiveWpt.SetTextForced((ioChars)"Set active WPT");
}
