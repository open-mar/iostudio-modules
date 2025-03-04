// !!! This C++ file is generated by ioStudio !!!
#if !defined(__IOSYSTEMGRAPHICS_H)
#define __IOSYSTEMGRAPHICS_H
#include "ioSystem/Core/ioTypes.h"
typedef enum
{
    Puid_NotDefined = 0,
    Puid_Ids_Controller_CommandNoRef = 1,
    Puid_Ids_Controller_ModeNoRef = 2,
    Puid_Ids_Controller_Command = 3,
    Puid_Ids_Controller_Mode = 4,
    Puid_Ids_Controller_Reference = 5,
    Puid_Ids_Controller_HeaderCommandPanelSteer = 6,
    Puid_Ids_Controller_ShapeCommandStatusSteer = 7,
    Puid_Ids_Controller_LabelSteerMode = 8,
    Puid_Ids_Controller_TextCommandStatusSteer = 9,
    Puid_Ids_Controller_ButtTakeRequestSteer = 10,
    Puid_Ids_Controller_ButtReleaseSteer = 11,
    Puid_Ids_Controller_HeaderModeControl = 12,
    Puid_Ids_Controller_ButtDp = 13,
    Puid_Ids_Controller_ButtTrack = 14,
    Puid_Ids_Controller_ButtRiver = 15,
    Puid_Ids_Controller_ButtWork = 16,
    Puid_Ids_Controller_ButtCourse = 17,
    Puid_Ids_Controller_ButtStandby = 18,
    Puid_Ids_Controller_GridHdgCmdHeader = 155,
    Puid_Ids_Controller_LabelHdgCmdHeader = 156,
    Puid_Ids_Controller_LabelhdgCmdHeaderUnit = 157,
    Puid_Ids_Controller_GridHdgCmd = 158,
    Puid_Ids_Controller_InstrHdgCmd = 159,
    Puid_Ids_Controller_ButtonLeftSmall = 20,
    Puid_Ids_Controller_ButtMidTrn = 19,
    Puid_Ids_Controller_ButtRightSmall = 22,
    Puid_Ids_Controller_ButtLeftBig = 24,
    Puid_Ids_Controller_ButtRightBig = 25,
    Puid_Ids_Controller_ButtonLeftThrust = 160,
    Puid_Ids_Controller_GridThrustmd = 161,
    Puid_Ids_Controller_InstrThrustCmd = 162,
    Puid_Ids_Controller_ButtonRightThrust = 163,
    Puid_Ids_Pilot_GridSteerApPanel = 45,
    Puid_Ids_Pilot_GridWindCmdHeader = 46,
    Puid_Ids_Pilot_LabelWindCmdHeader = 47,
    Puid_Ids_Pilot_LabelWindCmdHeaderUnit = 48,
    Puid_Ids_Pilot_GridSetAngleHeader = 51,
    Puid_Ids_Pilot_LabelSetAngleHeader = 52,
    Puid_Ids_Pilot_LabelSetAngleHeaderUnit = 53,
    Puid_Ids_Pilot_GridDriftHeader = 56,
    Puid_Ids_Pilot_LabelDriftHeader = 57,
    Puid_Ids_Pilot_LabelDriftHeaderUnit = 58,
    Puid_Ids_Pilot_GridCogHeader = 61,
    Puid_Ids_Pilot_LabelCogHeader = 62,
    Puid_Ids_Pilot_LabelCogHeaderUnit = 65,
    Puid_Ids_Pilot_GridSogHeader = 66,
    Puid_Ids_Pilot_LabelSogHeader = 67,
    Puid_Ids_Pilot_LabelSogHeaderUnit = 68,
    Puid_Ids_Pilot_GridHdgHeader = 69,
    Puid_Ids_Pilot_LabelHdgHeader = 70,
    Puid_Ids_Pilot_LabelHdgHeaderUnit = 71,
    Puid_Ids_Pilot_GridWindCmd = 49,
    Puid_Ids_Pilot_IconWcmdLeft = 76,
    Puid_Ids_Pilot_InstrWindCmd = 50,
    Puid_Ids_Pilot_IconWcmdRight = 77,
    Puid_Ids_Pilot_GridSetAngle = 54,
    Puid_Ids_Pilot_InstrSetAngle = 55,
    Puid_Ids_Pilot_GridDrift = 59,
    Puid_Ids_Pilot_InstrDrift = 60,
    Puid_Ids_Pilot_GridCog = 63,
    Puid_Ids_Pilot_InstrCog = 64,
    Puid_Ids_Pilot_GridSog = 72,
    Puid_Ids_Pilot_InstrSog = 73,
    Puid_Ids_Pilot_GridHdg = 74,
    Puid_Ids_Pilot_InstrHdg = 75,
    Puid_Ids_Pilot_GridAwaHeader = 78,
    Puid_Ids_Pilot_LabelAwaHeader = 79,
    Puid_Ids_Pilot_LabelAwaHeaderUnit = 80,
    Puid_Ids_Pilot_GridTwaHeader = 85,
    Puid_Ids_Pilot_LabelTwaHeader = 86,
    Puid_Ids_Pilot_LabelTwaHeaderUnit = 87,
    Puid_Ids_Pilot_GridAwsHeader = 88,
    Puid_Ids_Pilot_LabelAwsHeader = 89,
    Puid_Ids_Pilot_LabelAwsHeaderUnit = 90,
    Puid_Ids_Pilot_GridWdirHeader = 91,
    Puid_Ids_Pilot_LabelWdirHeader = 92,
    Puid_Ids_Pilot_LabelWdirHeaderUnit = 93,
    Puid_Ids_Pilot_GridDepthHeader = 94,
    Puid_Ids_Pilot_LabelDepthHeader = 95,
    Puid_Ids_Pilot_LabelDepthHeaderUnit = 96,
    Puid_Ids_Pilot_GridSpeedHeader = 97,
    Puid_Ids_Pilot_LabelSpeedHeader = 98,
    Puid_Ids_Pilot_LabelSpeedHeaderUnit = 99,
    Puid_Ids_Pilot_GridAwa = 81,
    Puid_Ids_Pilot_IconAwaLeft = 82,
    Puid_Ids_Pilot_InstrAwa = 83,
    Puid_Ids_Pilot_IconAwaRight = 84,
    Puid_Ids_Pilot_GridTwa = 100,
    Puid_Ids_Pilot_IconTwaLeft = 101,
    Puid_Ids_Pilot_InstrTwa = 102,
    Puid_Ids_Pilot_IconTwaRight = 103,
    Puid_Ids_Pilot_GridAws = 104,
    Puid_Ids_Pilot_InstrAws = 105,
    Puid_Ids_Pilot_GridWdir = 106,
    Puid_Ids_Pilot_InstrWdir = 107,
    Puid_Ids_Pilot_GridDepth = 108,
    Puid_Ids_Pilot_InstrDepth = 109,
    Puid_Ids_Pilot_GridSpeed = 110,
    Puid_Ids_Pilot_InstrSpeed = 111,
    Puid_Ids_Pilot_GridAutopilot = 26,
    Puid_Ids_Pilot_LabelApSteer = 27,
    Puid_Ids_Pilot_InstrHeadingRef = 28,
    Puid_Ids_Pilot_LabelHeading = 29,
    Puid_Ids_Pilot_InstrHeading = 30,
    Puid_Ids_Pilot_ShapeContourShip = 31,
    Puid_Ids_Pilot_CompThruster = 32,
    Puid_Ids_Pilot_CompRudder = 33,
    Puid_Ids_Pilot_CompRateOfTurn = 34,
    Puid_Ids_Pilot_CompEngine = 35,
    Puid_Ids_Pilot_GridRotMeas = 36,
    Puid_Ids_Pilot_TextRotValue = 37,
    Puid_Ids_Pilot_LabelRot = 38,
    Puid_Ids_Pilot_GridEngineMeas = 39,
    Puid_Ids_Pilot_TextEngineValue = 40,
    Puid_Ids_Pilot_LabelEngine = 41,
    Puid_Ids_Pilot_GridThrustMeas = 42,
    Puid_Ids_Pilot_TextThrustValue = 43,
    Puid_Ids_Pilot_LabelThrust = 44,
    Puid_Ids_Track_GridBtwHeader = 112,
    Puid_Ids_Track_LabelBtwHeader = 113,
    Puid_Ids_Track_LabelBtwHeaderUnit = 114,
    Puid_Ids_Track_GridXteHeader = 115,
    Puid_Ids_Track_LabelXteHeader = 116,
    Puid_Ids_Track_LabelXteHeaderUnit = 117,
    Puid_Ids_Track_GridCogHeader = 124,
    Puid_Ids_Track_LabelCogHeader = 125,
    Puid_Ids_Track_LabelCogHeaderUnit = 126,
    Puid_Ids_Track_GridSogHeader = 127,
    Puid_Ids_Track_LabelSogHeader = 128,
    Puid_Ids_Track_LabelSogHeaderUnit = 129,
    Puid_Ids_Track_GridBtw = 118,
    Puid_Ids_Track_InstrBtw = 119,
    Puid_Ids_Track_GridXte = 120,
    Puid_Ids_Track_IconXteLeft = 121,
    Puid_Ids_Track_InstrXte = 122,
    Puid_Ids_Track_IconXteRight = 123,
    Puid_Ids_Track_GridCog = 130,
    Puid_Ids_Track_InstrCog = 131,
    Puid_Ids_Track_GridSog = 132,
    Puid_Ids_Track_InstrSog = 133,
    Puid_Ids_Track_GridEtaWptHeader = 139,
    Puid_Ids_Track_LabelEtaWptHeader = 140,
    Puid_Ids_Track_LabelEtaWptHeaderUnit = 141,
    Puid_Ids_Track_GridEtaRteHeader = 134,
    Puid_Ids_Track_LabelEtaRteHeader = 135,
    Puid_Ids_Track_LabelEtaRteHeaderUnit = 136,
    Puid_Ids_Track_GridTtgWptHeader = 146,
    Puid_Ids_Track_LabelTtgWpthHeader = 147,
    Puid_Ids_Track_GridDptHeader = 148,
    Puid_Ids_Track_LabeDptlDepthHeader = 149,
    Puid_Ids_Track_LabelDptHeaderUnit = 150,
    Puid_Ids_Track_GridEtaWpt = 142,
    Puid_Ids_Track_InstrEtaWptDate = 143,
    Puid_Ids_Track_InstrEtaWptTime = 144,
    Puid_Ids_Track_GridEtaRte = 137,
    Puid_Ids_Track_InstrEtaRteDate = 138,
    Puid_Ids_Track_InstrEtaRteTime = 145,
    Puid_Ids_Track_GridTtgWpt = 151,
    Puid_Ids_Track_InstrTtgWpt = 152,
    Puid_Ids_Track_GridDpt = 153,
    Puid_Ids_Track_InstrDpt = 154,
} ioSystemGraphicsType;
class ioSystemGraphics
{
public:
    ioSystemGraphics();
    virtual ~ioSystemGraphics();
    static Int32 GetGraphicsID(ioSystemGraphicsType puid);
    static ioSystemGraphicsType GetGraphicsType(Int32 puidValue);
};
#endif // __IOSYSTEMGRAPHICS_H
