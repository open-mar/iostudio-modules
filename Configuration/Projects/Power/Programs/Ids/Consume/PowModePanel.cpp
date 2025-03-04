// !!! This C++ file is generated by ioStudio !!!
#include "pch.h"
#pragma hdrstop
#include "PowModePanel.h"
#include "Programs/ioSystemGraphics.h"
PowModePanel::PowModePanel()
{
}
PowModePanel::~PowModePanel()
{
}
void PowModePanel::InitializeData(void)
{
    m_PanelGraphics.SetListData((ioItem**)m_PowModePanelGraphics, 6);
    AddGraphics(&ButtDockIdle, Puid_Ids_Consume_ButtDockIdle);
    ButtDockIdle.SetTextForced((ioChars)"Docking and idle (IDLE)");
    AddGraphics(&ButtDockConnectedShore, Puid_Ids_Consume_ButtDockConnectedShore);
    ButtDockConnectedShore.SetTextForced((ioChars)"Docking connected to shore power (SHORE)");
    AddGraphics(&ButtDockNotConnected, Puid_Ids_Consume_ButtDockNotConnected);
    ButtDockNotConnected.SetTextForced((ioChars)"Docking not connected (DISCONNECT)");
    AddGraphics(&ButtInTransit, Puid_Ids_Consume_ButtInTransit);
    ButtInTransit.SetTextForced((ioChars)"In transit daylight (TRANSIT)");
    AddGraphics(&ButtInTransitEngine, Puid_Ids_Consume_ButtInTransitEngine);
    ButtInTransitEngine.SetTextForced((ioChars)"In transit night using engine (ENGINE)");
    AddGraphics(&ButtInTransitSailing, Puid_Ids_Consume_ButtInTransitSailing);
    ButtInTransitSailing.SetTextForced((ioChars)"In transit night sailing (SAILING)");
}
