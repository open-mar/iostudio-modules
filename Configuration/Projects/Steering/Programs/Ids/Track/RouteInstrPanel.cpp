// !!! This C++ file is generated by ioStudio !!!
#include "pch.h"
#pragma hdrstop
#include "RouteInstrPanel.h"
#include "Programs/ioSystemGraphics.h"
RouteInstrPanel::RouteInstrPanel()
{
}
RouteInstrPanel::~RouteInstrPanel()
{
}
void RouteInstrPanel::InitializeData(void)
{
    m_PanelGraphics.SetListData((ioItem**)m_RouteInstrPanelGraphics, 22);
    AddGraphics(&LabelBtwHeader, Puid_Ids_Track_LabelBtwHeader);
    LabelBtwHeader.SetTextForced((ioChars)"BTW");
    AddGraphics(&LabelBtwHeaderUnit, Puid_Ids_Track_LabelBtwHeaderUnit);
    LabelBtwHeaderUnit.SetTextForced((ioChars)"°T");
    AddGraphics(&LabelXteHeader, Puid_Ids_Track_LabelXteHeader);
    LabelXteHeader.SetTextForced((ioChars)"XTE");
    AddGraphics(&LabelXteHeaderUnit, Puid_Ids_Track_LabelXteHeaderUnit);
    LabelXteHeaderUnit.SetTextForced((ioChars)"m");
    AddGraphics(&LabelCogHeader, Puid_Ids_Track_LabelCogHeader);
    LabelCogHeader.SetTextForced((ioChars)"COG");
    AddGraphics(&LabelCogHeaderUnit, Puid_Ids_Track_LabelCogHeaderUnit);
    LabelCogHeaderUnit.SetTextForced((ioChars)"°T");
    AddGraphics(&LabelSogHeader, Puid_Ids_Track_LabelSogHeader);
    LabelSogHeader.SetTextForced((ioChars)"SOG");
    AddGraphics(&LabelSogHeaderUnit, Puid_Ids_Track_LabelSogHeaderUnit);
    LabelSogHeaderUnit.SetTextForced((ioChars)"kn");
    AddGraphics(&InstrBtw, Puid_Ids_Track_InstrBtw);
    InstrBtw.SetTextForced((ioChars)"000");
    InstrBtw.SetDecimals(1);
    AddGraphics(&IconXteLeft, Puid_Ids_Track_IconXteLeft);
    AddGraphics(&InstrXte, Puid_Ids_Track_InstrXte);
    InstrXte.SetTextForced((ioChars)"0.0");
    InstrXte.SetDecimals(1);
    AddGraphics(&IconXteRight, Puid_Ids_Track_IconXteRight);
    AddGraphics(&InstrCog, Puid_Ids_Track_InstrCog);
    InstrCog.SetTextForced((ioChars)"000");
    InstrCog.SetDecimals(1);
    AddGraphics(&InstrSog, Puid_Ids_Track_InstrSog);
    InstrSog.SetTextForced((ioChars)"0.0");
    InstrSog.SetDecimals(1);
    AddGraphics(&LabelEtaWptHeader, Puid_Ids_Track_LabelEtaWptHeader);
    LabelEtaWptHeader.SetTextForced((ioChars)"ETA WPT");
    AddGraphics(&LabelEtaWptHeaderUnit, Puid_Ids_Track_LabelEtaWptHeaderUnit);
    LabelEtaWptHeaderUnit.SetTextForced((ioChars)"LOC");
    AddGraphics(&LabelEtaRteHeader, Puid_Ids_Track_LabelEtaRteHeader);
    LabelEtaRteHeader.SetTextForced((ioChars)"ETA RTE");
    AddGraphics(&LabelEtaRteHeaderUnit, Puid_Ids_Track_LabelEtaRteHeaderUnit);
    LabelEtaRteHeaderUnit.SetTextForced((ioChars)"LOC");
    AddGraphics(&InstrEtaWptDate, Puid_Ids_Track_InstrEtaWptDate);
    InstrEtaWptDate.SetTextForced((ioChars)"01-Jan");
    InstrEtaWptDate.SetDecimals(1);
    AddGraphics(&InstrEtaWptTime, Puid_Ids_Track_InstrEtaWptTime);
    InstrEtaWptTime.SetTextForced((ioChars)"00:00:00");
    InstrEtaWptTime.SetDecimals(1);
    AddGraphics(&InstrEtaRteDate, Puid_Ids_Track_InstrEtaRteDate);
    InstrEtaRteDate.SetTextForced((ioChars)"02-Feb");
    InstrEtaRteDate.SetDecimals(1);
    AddGraphics(&InstrEtaRteTime, Puid_Ids_Track_InstrEtaRteTime);
    InstrEtaRteTime.SetTextForced((ioChars)"00:00:00");
    InstrEtaRteTime.SetDecimals(1);
}
