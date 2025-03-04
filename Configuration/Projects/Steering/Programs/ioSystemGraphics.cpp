// !!! This C++ file is generated by ioStudio !!!
#include "pch.h"
#pragma hdrstop
#include "ioSystemGraphics.h"
ioSystemGraphics::ioSystemGraphics()
{
}
ioSystemGraphics::~ioSystemGraphics()
{
}
Int32 ioSystemGraphics::GetGraphicsID(ioSystemGraphicsType puid)
{
    return (Int32)puid;
}
ioSystemGraphicsType ioSystemGraphics::GetGraphicsType(Int32 puidValue)
{
    switch (puidValue)
    {
    default: return Puid_NotDefined; 
    case 0: return Puid_NotDefined; 
    case 1: return Puid_Ids_Controller_CommandNoRef; 
    case 2: return Puid_Ids_Controller_ModeNoRef; 
    case 3: return Puid_Ids_Controller_Command; 
    case 4: return Puid_Ids_Controller_Mode; 
    case 5: return Puid_Ids_Controller_Reference; 
    case 6: return Puid_Ids_Controller_HeaderCommandPanelSteer; 
    case 7: return Puid_Ids_Controller_ShapeCommandStatusSteer; 
    case 8: return Puid_Ids_Controller_LabelSteerMode; 
    case 9: return Puid_Ids_Controller_TextCommandStatusSteer; 
    case 10: return Puid_Ids_Controller_ButtTakeRequestSteer; 
    case 11: return Puid_Ids_Controller_ButtReleaseSteer; 
    case 12: return Puid_Ids_Controller_HeaderModeControl; 
    case 13: return Puid_Ids_Controller_ButtDp; 
    case 14: return Puid_Ids_Controller_ButtTrack; 
    case 15: return Puid_Ids_Controller_ButtRiver; 
    case 16: return Puid_Ids_Controller_ButtWork; 
    case 17: return Puid_Ids_Controller_ButtCourse; 
    case 18: return Puid_Ids_Controller_ButtStandby; 
    case 155: return Puid_Ids_Controller_GridHdgCmdHeader; 
    case 156: return Puid_Ids_Controller_LabelHdgCmdHeader; 
    case 157: return Puid_Ids_Controller_LabelhdgCmdHeaderUnit; 
    case 158: return Puid_Ids_Controller_GridHdgCmd; 
    case 159: return Puid_Ids_Controller_InstrHdgCmd; 
    case 20: return Puid_Ids_Controller_ButtonLeftSmall; 
    case 19: return Puid_Ids_Controller_ButtMidTrn; 
    case 22: return Puid_Ids_Controller_ButtRightSmall; 
    case 24: return Puid_Ids_Controller_ButtLeftBig; 
    case 25: return Puid_Ids_Controller_ButtRightBig; 
    case 160: return Puid_Ids_Controller_ButtonLeftThrust; 
    case 161: return Puid_Ids_Controller_GridThrustmd; 
    case 162: return Puid_Ids_Controller_InstrThrustCmd; 
    case 163: return Puid_Ids_Controller_ButtonRightThrust; 
    case 45: return Puid_Ids_Pilot_GridSteerApPanel; 
    case 46: return Puid_Ids_Pilot_GridWindCmdHeader; 
    case 47: return Puid_Ids_Pilot_LabelWindCmdHeader; 
    case 48: return Puid_Ids_Pilot_LabelWindCmdHeaderUnit; 
    case 51: return Puid_Ids_Pilot_GridSetAngleHeader; 
    case 52: return Puid_Ids_Pilot_LabelSetAngleHeader; 
    case 53: return Puid_Ids_Pilot_LabelSetAngleHeaderUnit; 
    case 56: return Puid_Ids_Pilot_GridDriftHeader; 
    case 57: return Puid_Ids_Pilot_LabelDriftHeader; 
    case 58: return Puid_Ids_Pilot_LabelDriftHeaderUnit; 
    case 61: return Puid_Ids_Pilot_GridCogHeader; 
    case 62: return Puid_Ids_Pilot_LabelCogHeader; 
    case 65: return Puid_Ids_Pilot_LabelCogHeaderUnit; 
    case 66: return Puid_Ids_Pilot_GridSogHeader; 
    case 67: return Puid_Ids_Pilot_LabelSogHeader; 
    case 68: return Puid_Ids_Pilot_LabelSogHeaderUnit; 
    case 69: return Puid_Ids_Pilot_GridHdgHeader; 
    case 70: return Puid_Ids_Pilot_LabelHdgHeader; 
    case 71: return Puid_Ids_Pilot_LabelHdgHeaderUnit; 
    case 49: return Puid_Ids_Pilot_GridWindCmd; 
    case 76: return Puid_Ids_Pilot_IconWcmdLeft; 
    case 50: return Puid_Ids_Pilot_InstrWindCmd; 
    case 77: return Puid_Ids_Pilot_IconWcmdRight; 
    case 54: return Puid_Ids_Pilot_GridSetAngle; 
    case 55: return Puid_Ids_Pilot_InstrSetAngle; 
    case 59: return Puid_Ids_Pilot_GridDrift; 
    case 60: return Puid_Ids_Pilot_InstrDrift; 
    case 63: return Puid_Ids_Pilot_GridCog; 
    case 64: return Puid_Ids_Pilot_InstrCog; 
    case 72: return Puid_Ids_Pilot_GridSog; 
    case 73: return Puid_Ids_Pilot_InstrSog; 
    case 74: return Puid_Ids_Pilot_GridHdg; 
    case 75: return Puid_Ids_Pilot_InstrHdg; 
    case 78: return Puid_Ids_Pilot_GridAwaHeader; 
    case 79: return Puid_Ids_Pilot_LabelAwaHeader; 
    case 80: return Puid_Ids_Pilot_LabelAwaHeaderUnit; 
    case 85: return Puid_Ids_Pilot_GridTwaHeader; 
    case 86: return Puid_Ids_Pilot_LabelTwaHeader; 
    case 87: return Puid_Ids_Pilot_LabelTwaHeaderUnit; 
    case 88: return Puid_Ids_Pilot_GridAwsHeader; 
    case 89: return Puid_Ids_Pilot_LabelAwsHeader; 
    case 90: return Puid_Ids_Pilot_LabelAwsHeaderUnit; 
    case 91: return Puid_Ids_Pilot_GridWdirHeader; 
    case 92: return Puid_Ids_Pilot_LabelWdirHeader; 
    case 93: return Puid_Ids_Pilot_LabelWdirHeaderUnit; 
    case 94: return Puid_Ids_Pilot_GridDepthHeader; 
    case 95: return Puid_Ids_Pilot_LabelDepthHeader; 
    case 96: return Puid_Ids_Pilot_LabelDepthHeaderUnit; 
    case 97: return Puid_Ids_Pilot_GridSpeedHeader; 
    case 98: return Puid_Ids_Pilot_LabelSpeedHeader; 
    case 99: return Puid_Ids_Pilot_LabelSpeedHeaderUnit; 
    case 81: return Puid_Ids_Pilot_GridAwa; 
    case 82: return Puid_Ids_Pilot_IconAwaLeft; 
    case 83: return Puid_Ids_Pilot_InstrAwa; 
    case 84: return Puid_Ids_Pilot_IconAwaRight; 
    case 100: return Puid_Ids_Pilot_GridTwa; 
    case 101: return Puid_Ids_Pilot_IconTwaLeft; 
    case 102: return Puid_Ids_Pilot_InstrTwa; 
    case 103: return Puid_Ids_Pilot_IconTwaRight; 
    case 104: return Puid_Ids_Pilot_GridAws; 
    case 105: return Puid_Ids_Pilot_InstrAws; 
    case 106: return Puid_Ids_Pilot_GridWdir; 
    case 107: return Puid_Ids_Pilot_InstrWdir; 
    case 108: return Puid_Ids_Pilot_GridDepth; 
    case 109: return Puid_Ids_Pilot_InstrDepth; 
    case 110: return Puid_Ids_Pilot_GridSpeed; 
    case 111: return Puid_Ids_Pilot_InstrSpeed; 
    case 26: return Puid_Ids_Pilot_GridAutopilot; 
    case 27: return Puid_Ids_Pilot_LabelApSteer; 
    case 28: return Puid_Ids_Pilot_InstrHeadingRef; 
    case 29: return Puid_Ids_Pilot_LabelHeading; 
    case 30: return Puid_Ids_Pilot_InstrHeading; 
    case 31: return Puid_Ids_Pilot_ShapeContourShip; 
    case 32: return Puid_Ids_Pilot_CompThruster; 
    case 33: return Puid_Ids_Pilot_CompRudder; 
    case 34: return Puid_Ids_Pilot_CompRateOfTurn; 
    case 35: return Puid_Ids_Pilot_CompEngine; 
    case 36: return Puid_Ids_Pilot_GridRotMeas; 
    case 37: return Puid_Ids_Pilot_TextRotValue; 
    case 38: return Puid_Ids_Pilot_LabelRot; 
    case 39: return Puid_Ids_Pilot_GridEngineMeas; 
    case 40: return Puid_Ids_Pilot_TextEngineValue; 
    case 41: return Puid_Ids_Pilot_LabelEngine; 
    case 42: return Puid_Ids_Pilot_GridThrustMeas; 
    case 43: return Puid_Ids_Pilot_TextThrustValue; 
    case 44: return Puid_Ids_Pilot_LabelThrust; 
    case 112: return Puid_Ids_Track_GridBtwHeader; 
    case 113: return Puid_Ids_Track_LabelBtwHeader; 
    case 114: return Puid_Ids_Track_LabelBtwHeaderUnit; 
    case 115: return Puid_Ids_Track_GridXteHeader; 
    case 116: return Puid_Ids_Track_LabelXteHeader; 
    case 117: return Puid_Ids_Track_LabelXteHeaderUnit; 
    case 124: return Puid_Ids_Track_GridCogHeader; 
    case 125: return Puid_Ids_Track_LabelCogHeader; 
    case 126: return Puid_Ids_Track_LabelCogHeaderUnit; 
    case 127: return Puid_Ids_Track_GridSogHeader; 
    case 128: return Puid_Ids_Track_LabelSogHeader; 
    case 129: return Puid_Ids_Track_LabelSogHeaderUnit; 
    case 118: return Puid_Ids_Track_GridBtw; 
    case 119: return Puid_Ids_Track_InstrBtw; 
    case 120: return Puid_Ids_Track_GridXte; 
    case 121: return Puid_Ids_Track_IconXteLeft; 
    case 122: return Puid_Ids_Track_InstrXte; 
    case 123: return Puid_Ids_Track_IconXteRight; 
    case 130: return Puid_Ids_Track_GridCog; 
    case 131: return Puid_Ids_Track_InstrCog; 
    case 132: return Puid_Ids_Track_GridSog; 
    case 133: return Puid_Ids_Track_InstrSog; 
    case 139: return Puid_Ids_Track_GridEtaWptHeader; 
    case 140: return Puid_Ids_Track_LabelEtaWptHeader; 
    case 141: return Puid_Ids_Track_LabelEtaWptHeaderUnit; 
    case 134: return Puid_Ids_Track_GridEtaRteHeader; 
    case 135: return Puid_Ids_Track_LabelEtaRteHeader; 
    case 136: return Puid_Ids_Track_LabelEtaRteHeaderUnit; 
    case 146: return Puid_Ids_Track_GridTtgWptHeader; 
    case 147: return Puid_Ids_Track_LabelTtgWpthHeader; 
    case 148: return Puid_Ids_Track_GridDptHeader; 
    case 149: return Puid_Ids_Track_LabeDptlDepthHeader; 
    case 150: return Puid_Ids_Track_LabelDptHeaderUnit; 
    case 142: return Puid_Ids_Track_GridEtaWpt; 
    case 143: return Puid_Ids_Track_InstrEtaWptDate; 
    case 144: return Puid_Ids_Track_InstrEtaWptTime; 
    case 137: return Puid_Ids_Track_GridEtaRte; 
    case 138: return Puid_Ids_Track_InstrEtaRteDate; 
    case 145: return Puid_Ids_Track_InstrEtaRteTime; 
    case 151: return Puid_Ids_Track_GridTtgWpt; 
    case 152: return Puid_Ids_Track_InstrTtgWpt; 
    case 153: return Puid_Ids_Track_GridDpt; 
    case 154: return Puid_Ids_Track_InstrDpt; 
    } // switch
}
