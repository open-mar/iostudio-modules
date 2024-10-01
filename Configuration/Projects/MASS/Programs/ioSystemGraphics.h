// !!! This C++ file is generated by ioStudio !!!
#if !defined(__IOSYSTEMGRAPHICS_H)
#define __IOSYSTEMGRAPHICS_H
#include "ioSystem/Core/ioTypes.h"
typedef enum
{
    Puid_NotDefined = 0,
    Puid_Batt_LabelBattCharging = 1,
    Puid_Batt_GridChargerInput = 2,
    Puid_Batt_InstrChargeInputVolt = 3,
    Puid_Batt_LabelChargeInputVolt = 4,
    Puid_Batt_GridChargeActive12V = 5,
    Puid_Batt_ShapeActiveCharge12V = 6,
    Puid_Batt_LabelActiveCharge12V = 7,
    Puid_Batt_GridChargeActive24V = 8,
    Puid_Batt_ShapeActiveCharge24V = 9,
    Puid_Batt_LabelActiveCharge24V = 10,
    Puid_Batt_BattPanel12V = 11,
    Puid_Batt_BattPanel24V = 12,
    Puid_Batt_BattStatusGrid = 13,
    Puid_Batt_BattChargingGrid = 14,
    Puid_Batt_LabelStatus = 15,
    Puid_Batt_GridSoc = 16,
    Puid_Batt_InstrSoc = 17,
    Puid_Batt_LabelSoc = 18,
    Puid_Batt_GridTime = 19,
    Puid_Batt_InstrTime = 20,
    Puid_Batt_LabelTime = 21,
    Puid_Batt_Dc12_LabelBatt = 22,
    Puid_Batt_Dc12_GridVolt = 23,
    Puid_Batt_Dc12_InstrVolt = 24,
    Puid_Batt_Dc12_LabelVolt = 25,
    Puid_Batt_Dc12_GridBattAmp = 26,
    Puid_Batt_Dc12_InstrAmpAvg = 27,
    Puid_Batt_Dc12_LabelAmpAvg = 28,
    Puid_Batt_Dc12_InstrAmpDiff = 29,
    Puid_Batt_Dc24_LabelBatt = 30,
    Puid_Batt_Dc24_GridVolt = 31,
    Puid_Batt_Dc24_InstrVolt = 32,
    Puid_Batt_Dc24_LabelVolt = 33,
    Puid_Batt_Dc24_GridBattAmp = 34,
    Puid_Batt_Dc24_InstrAmpAvg = 35,
    Puid_Batt_Dc24_LabelAmpAvg = 36,
    Puid_Batt_Dc24_InstrAmpDiff = 37,
    Puid_Ids_GridStatusCcF = 38,
    Puid_Ids_GridStatusCcM = 39,
    Puid_Ids_GridStatusCcA = 40,
    Puid_Ids_CcF_LabelIdsCc = 41,
    Puid_Ids_CcF_ShapeWiFi = 42,
    Puid_Ids_CcF_ShapeEthernet = 43,
    Puid_Ids_CcF_ShapeIO = 44,
    Puid_Ids_CcF_ShapeInCommand = 45,
    Puid_Ids_CcM_LabelIdsCc = 46,
    Puid_Ids_CcM_ShapeWiFi = 47,
    Puid_Ids_CcM_ShapeEthernet = 48,
    Puid_Ids_CcM_ShapeIO = 49,
    Puid_Ids_CcM_ShapeInCommand = 50,
    Puid_Ids_CcA_LabelIdsCc = 51,
    Puid_Ids_CcA_ShapeWiFi = 52,
    Puid_Ids_CcA_ShapeEthernet = 53,
    Puid_Ids_CcA_ShapeIO = 54,
    Puid_Ids_CcA_ShapeInCommand = 55,
    Puid_Pow_PowPanelRow1 = 56,
    Puid_Pow_PowPanelCol1 = 57,
    Puid_Pow_CpM_CommandNoRef = 58,
    Puid_Pow_CpM_ModeNoRef = 59,
    Puid_Pow_CpA_CommandNoRef = 60,
    Puid_Pow_CpA_ModeNoRef = 61,
    Puid_Pow_CpM_HeaderCommandPanelPow = 62,
    Puid_Pow_CpM_ShapeCommandStatusPow = 63,
    Puid_Pow_CpM_LabelPowerMode = 64,
    Puid_Pow_CpM_TextCommandStatusPow = 65,
    Puid_Pow_CpM_ButtTakeRequestPow = 66,
    Puid_Pow_CpM_ButtReleasePow = 67,
    Puid_Pow_CpA_HeaderCommandPanelPow = 68,
    Puid_Pow_CpA_ShapeCommandStatusPow = 69,
    Puid_Pow_CpA_LabelPowerMode = 70,
    Puid_Pow_CpA_TextCommandStatusPow = 71,
    Puid_Pow_CpA_ButtTakeRequestPow = 72,
    Puid_Pow_CpA_ButtReleasePow = 73,
    Puid_Pow_CpM_ButtDockIdle = 74,
    Puid_Pow_CpM_ButtDockConnectedShore = 75,
    Puid_Pow_CpM_ButtDockNotConnected = 76,
    Puid_Pow_CpM_ButtInTransit = 77,
    Puid_Pow_CpM_ButtInTransitEngine = 78,
    Puid_Pow_CpM_ButtInTransitSailing = 79,
    Puid_Pow_CpA_ButtInTransit = 80,
    Puid_Pow_CpA_ButtInTransitEngine = 81,
    Puid_Pow_CpA_ButtInTransitSailing = 82,
    Puid_Pow_Out12V_GridAftPowOutput = 83,
    Puid_Pow_Out12V_GridMidPowOutput = 84,
    Puid_Pow_Out12V_GridFwdPowOutput = 85,
    Puid_Pow_Out24V_GridAftPowOutput = 86,
    Puid_Pow_Out24V_GridMidPowOutput = 87,
    Puid_Pow_Out24V_GridFwdPowOutput = 88,
    Puid_Pow_Out220V_GridAftPowOutput = 89,
    Puid_Pow_Out220V_GridMidPowOutput = 90,
    Puid_Pow_Out220V_GridFwdPowOutput = 91,
    Puid_Pow_Out12M_GridChInd1New = 92,
    Puid_Pow_Out12M_ShpOnOffInd1 = 93,
    Puid_Pow_Out12M_LabelNameInd1 = 94,
    Puid_Pow_Out12M_GridChInd2 = 95,
    Puid_Pow_Out12M_ShpOnOffInd2 = 96,
    Puid_Pow_Out12M_LabelNameInd2 = 97,
    Puid_Pow_Out12M_GridChInd3 = 98,
    Puid_Pow_Out12M_ShpOnOffInd3 = 99,
    Puid_Pow_Out12M_LabelNameInd3 = 100,
    Puid_Pow_Out12M_GridChInd4 = 101,
    Puid_Pow_Out12M_ShpOnOffInd4 = 102,
    Puid_Pow_Out12M_LabelNameInd4 = 103,
    Puid_Pow_Out12M_GridChInd5 = 104,
    Puid_Pow_Out12M_ShpOnOffInd5 = 105,
    Puid_Pow_Out12M_LabelNameInd5 = 106,
    Puid_Pow_Out12M_GridChInd6 = 107,
    Puid_Pow_Out12M_ShpOnOffInd6 = 108,
    Puid_Pow_Out12M_LabelNameInd6 = 109,
    Puid_Pow_Out12M_GridChInd7 = 110,
    Puid_Pow_Out12M_ShpOnOffInd7 = 111,
    Puid_Pow_Out12M_LabelNameInd7 = 112,
    Puid_Pow_Out12M_GridChInd8 = 113,
    Puid_Pow_Out12M_ShpOnOffInd8 = 114,
    Puid_Pow_Out12M_LabelNameInd8 = 115,
    Puid_Pow_Out12F_GridChInd1 = 116,
    Puid_Pow_Out12F_ShpOnOffInd1 = 117,
    Puid_Pow_Out12F_LabelNameInd1 = 118,
    Puid_Pow_Out12F_GridChInd2 = 119,
    Puid_Pow_Out12F_ShpOnOffInd2 = 120,
    Puid_Pow_Out12F_LabelNameInd2 = 121,
    Puid_Pow_Out12F_GridChInd3 = 122,
    Puid_Pow_Out12F_ShpOnOffInd3 = 123,
    Puid_Pow_Out12F_LabelNameInd3 = 124,
    Puid_Pow_Out12F_GridChInd4 = 125,
    Puid_Pow_Out12F_ShpOnOffInd4 = 126,
    Puid_Pow_Out12F_LabelNameInd4 = 127,
    Puid_Pow_Out12F_GridChInd5 = 128,
    Puid_Pow_Out12F_ShpOnOffInd5 = 129,
    Puid_Pow_Out12F_LabelNameInd5 = 130,
    Puid_Pow_Out12F_GridChInd6 = 131,
    Puid_Pow_Out12F_ShpOnOffInd6 = 132,
    Puid_Pow_Out12F_LabelNameInd6 = 133,
    Puid_Pow_Out12F_GridChInd7 = 134,
    Puid_Pow_Out12F_ShpOnOffInd7 = 135,
    Puid_Pow_Out12F_LabelNameInd7 = 136,
    Puid_Pow_Out12F_GridChInd8 = 137,
    Puid_Pow_Out12F_ShpOnOffInd8 = 138,
    Puid_Pow_Out12F_LabelNameInd8 = 139,
    Puid_Pow_Out12A_GridChInd1 = 140,
    Puid_Pow_Out12A_ShpOnOffInd1 = 141,
    Puid_Pow_Out12A_LabelNameInd1 = 142,
    Puid_Pow_Out12A_GridChInd2 = 143,
    Puid_Pow_Out12A_ShpOnOffInd2 = 144,
    Puid_Pow_Out12A_LabelNameInd2 = 145,
    Puid_Pow_Out12A_GridChInd3 = 146,
    Puid_Pow_Out12A_ShpOnOffInd3 = 147,
    Puid_Pow_Out12A_LabelNameInd3 = 148,
    Puid_Pow_Out12A_GridChInd4 = 149,
    Puid_Pow_Out12A_ShpOnOffInd4 = 150,
    Puid_Pow_Out12A_LabelNameInd4 = 151,
    Puid_Pow_Out12A_GridChInd5 = 152,
    Puid_Pow_Out12A_ShpOnOffInd5 = 153,
    Puid_Pow_Out12A_LabelNameInd5 = 154,
    Puid_Pow_Out12A_GridChInd6 = 155,
    Puid_Pow_Out12A_ShpOnOffInd6 = 156,
    Puid_Pow_Out12A_LabelNameInd6 = 157,
    Puid_Pow_Out12A_GridChInd7 = 158,
    Puid_Pow_Out12A_ShpOnOffInd7 = 159,
    Puid_Pow_Out12A_LabelNameInd7 = 160,
    Puid_Pow_Out12A_GridChInd8 = 161,
    Puid_Pow_Out12A_ShpOnOffInd8 = 162,
    Puid_Pow_Out12A_LabelNameInd8 = 163,
    Puid_Pow_Out24M_GridChInd1 = 164,
    Puid_Pow_Out24M_ShpOnOffInd1 = 165,
    Puid_Pow_Out24M_LabelNameInd1 = 166,
    Puid_Pow_Out24M_GridChInd2 = 167,
    Puid_Pow_Out24M_ShpOnOffInd2 = 168,
    Puid_Pow_Out24M_LabelNameInd2 = 169,
    Puid_Pow_Out24M_GridChInd3 = 170,
    Puid_Pow_Out24M_ShpOnOffInd3 = 171,
    Puid_Pow_Out24M_LabelNameInd3 = 172,
    Puid_Pow_Out24M_GridChInd4 = 173,
    Puid_Pow_Out24M_ShpOnOffInd4 = 174,
    Puid_Pow_Out24M_LabelNameInd4 = 175,
    Puid_Pow_Out24M_GridChInd5 = 176,
    Puid_Pow_Out24M_ShpOnOffInd5 = 177,
    Puid_Pow_Out24M_LabelNameInd5 = 178,
    Puid_Pow_Out24M_GridChInd6 = 179,
    Puid_Pow_Out24M_ShpOnOffInd6 = 180,
    Puid_Pow_Out24M_LabelNameInd6 = 181,
    Puid_Pow_Out24M_GridChInd7 = 182,
    Puid_Pow_Out24M_ShpOnOffInd7 = 183,
    Puid_Pow_Out24M_LabelNameInd7 = 184,
    Puid_Pow_Out24M_GridChInd8 = 185,
    Puid_Pow_Out24M_ShpOnOffInd8 = 186,
    Puid_Pow_Out24M_LabelNameInd8 = 187,
    Puid_Pow_Out24F_GridChInd1 = 188,
    Puid_Pow_Out24F_ShpOnOffInd1 = 189,
    Puid_Pow_Out24F_LabelNameInd1 = 190,
    Puid_Pow_Out24F_GridChInd2 = 191,
    Puid_Pow_Out24F_ShpOnOffInd2 = 192,
    Puid_Pow_Out24F_LabelNameInd2 = 193,
    Puid_Pow_Out24F_GridChInd3 = 194,
    Puid_Pow_Out24F_ShpOnOffInd3 = 195,
    Puid_Pow_Out24F_LabelNameInd3 = 196,
    Puid_Pow_Out24F_GridChInd4 = 197,
    Puid_Pow_Out24F_ShpOnOffInd4 = 198,
    Puid_Pow_Out24F_LabelNameInd4 = 199,
    Puid_Pow_Out24F_GridChInd5 = 200,
    Puid_Pow_Out24F_ShpOnOffInd5 = 201,
    Puid_Pow_Out24F_LabelNameInd5 = 202,
    Puid_Pow_Out24F_GridChInd6 = 203,
    Puid_Pow_Out24F_ShpOnOffInd6 = 204,
    Puid_Pow_Out24F_LabelNameInd6 = 205,
    Puid_Pow_Out24F_GridChInd7 = 206,
    Puid_Pow_Out24F_ShpOnOffInd7 = 207,
    Puid_Pow_Out24F_LabelNameInd7 = 208,
    Puid_Pow_Out24F_GridChInd8 = 209,
    Puid_Pow_Out24F_ShpOnOffInd8 = 210,
    Puid_Pow_Out24F_LabelNameInd8 = 211,
    Puid_Pow_Out24A_GridChInd1 = 212,
    Puid_Pow_Out24A_ShpOnOffInd1 = 213,
    Puid_Pow_Out24A_LabelNameInd1 = 214,
    Puid_Pow_Out24A_GridChInd2 = 215,
    Puid_Pow_Out24A_ShpOnOffInd2 = 216,
    Puid_Pow_Out24A_LabelNameInd2 = 217,
    Puid_Pow_Out24A_GridChInd3 = 218,
    Puid_Pow_Out24A_ShpOnOffInd3 = 219,
    Puid_Pow_Out24A_LabelNameInd3 = 220,
    Puid_Pow_Out24A_GridChInd4 = 221,
    Puid_Pow_Out24A_ShpOnOffInd4 = 222,
    Puid_Pow_Out24A_LabelNameInd4 = 223,
    Puid_Pow_Out24A_GridChInd5 = 224,
    Puid_Pow_Out24A_ShpOnOffInd5 = 225,
    Puid_Pow_Out24A_LabelNameInd5 = 226,
    Puid_Pow_Out24A_GridChInd6 = 227,
    Puid_Pow_Out24A_ShpOnOffInd6 = 228,
    Puid_Pow_Out24A_LabelNameInd6 = 229,
    Puid_Pow_Out24A_GridChInd7 = 230,
    Puid_Pow_Out24A_ShpOnOffInd7 = 231,
    Puid_Pow_Out24A_LabelNameInd7 = 232,
    Puid_Pow_Out24A_GridChInd8 = 233,
    Puid_Pow_Out24A_ShpOnOffInd8 = 234,
    Puid_Pow_Out24A_LabelNameInd8 = 235,
    Puid_Pow_Out220M_GridChInd1 = 236,
    Puid_Pow_Out220M_ShpOnOffInd1 = 237,
    Puid_Pow_Out220M_LabelNameInd1 = 238,
    Puid_Pow_Out220M_GridChInd2 = 239,
    Puid_Pow_Out220M_ShpOnOffInd2 = 240,
    Puid_Pow_Out220M_LabelNameInd2 = 241,
    Puid_Pow_Out220M_GridChInd3 = 242,
    Puid_Pow_Out220M_ShpOnOffInd3 = 243,
    Puid_Pow_Out220M_LabelNameInd3 = 244,
    Puid_Pow_Out220M_GridChInd4 = 245,
    Puid_Pow_Out220M_ShpOnOffInd4 = 246,
    Puid_Pow_Out220M_LabelNameInd4 = 247,
    Puid_Pow_Out220M_GridChInd5 = 248,
    Puid_Pow_Out220M_ShpOnOffInd5 = 249,
    Puid_Pow_Out220M_LabelNameInd5 = 250,
    Puid_Pow_Out220M_GridChInd6 = 251,
    Puid_Pow_Out220M_ShpOnOffInd6 = 252,
    Puid_Pow_Out220M_LabelNameInd6 = 253,
    Puid_Pow_Out220M_GridChInd7 = 254,
    Puid_Pow_Out220M_ShpOnOffInd7 = 255,
    Puid_Pow_Out220M_LabelNameInd7 = 256,
    Puid_Pow_Out220M_GridChInd8 = 257,
    Puid_Pow_Out220M_ShpOnOffInd8 = 258,
    Puid_Pow_Out220M_LabelNameInd8 = 259,
    Puid_Pow_Out220F_GridChInd1 = 260,
    Puid_Pow_Out220F_ShpOnOffInd1 = 261,
    Puid_Pow_Out220F_LabelNameInd1 = 262,
    Puid_Pow_Out220F_GridChInd2 = 263,
    Puid_Pow_Out220F_ShpOnOffInd2 = 264,
    Puid_Pow_Out220F_LabelNameInd2 = 265,
    Puid_Pow_Out220F_GridChInd3 = 266,
    Puid_Pow_Out220F_ShpOnOffInd3 = 267,
    Puid_Pow_Out220F_LabelNameInd3 = 268,
    Puid_Pow_Out220F_GridChInd4 = 269,
    Puid_Pow_Out220F_ShpOnOffInd4 = 270,
    Puid_Pow_Out220F_LabelNameInd4 = 271,
    Puid_Pow_Out220F_GridChInd5 = 272,
    Puid_Pow_Out220F_ShpOnOffInd5 = 273,
    Puid_Pow_Out220F_LabelNameInd5 = 274,
    Puid_Pow_Out220F_GridChInd6 = 275,
    Puid_Pow_Out220F_ShpOnOffInd6 = 276,
    Puid_Pow_Out220F_LabelNameInd6 = 277,
    Puid_Pow_Out220F_GridChInd7 = 278,
    Puid_Pow_Out220F_ShpOnOffInd7 = 279,
    Puid_Pow_Out220F_LabelNameInd7 = 280,
    Puid_Pow_Out220F_GridChInd8 = 281,
    Puid_Pow_Out220F_ShpOnOffInd8 = 282,
    Puid_Pow_Out220F_LabelNameInd8 = 283,
    Puid_Pow_Out220A_GridChInd1 = 284,
    Puid_Pow_Out220A_ShpOnOffInd1 = 285,
    Puid_Pow_Out220A_LabelNameInd1 = 286,
    Puid_Pow_Out220A_GridChInd2 = 287,
    Puid_Pow_Out220A_ShpOnOffInd2 = 288,
    Puid_Pow_Out220A_LabelNameInd2 = 289,
    Puid_Pow_Out220A_GridChInd3 = 290,
    Puid_Pow_Out220A_ShpOnOffInd3 = 291,
    Puid_Pow_Out220A_LabelNameInd3 = 292,
    Puid_Pow_Out220A_GridChInd4 = 293,
    Puid_Pow_Out220A_ShpOnOffInd4 = 294,
    Puid_Pow_Out220A_LabelNameInd4 = 295,
    Puid_Pow_Out220A_GridChInd5 = 296,
    Puid_Pow_Out220A_ShpOnOffInd5 = 297,
    Puid_Pow_Out220A_LabelNameInd5 = 298,
    Puid_Pow_Out220A_GridChInd6 = 299,
    Puid_Pow_Out220A_ShpOnOffInd6 = 300,
    Puid_Pow_Out220A_LabelNameInd6 = 301,
    Puid_Pow_Out220A_GridChInd7 = 302,
    Puid_Pow_Out220A_ShpOnOffInd7 = 303,
    Puid_Pow_Out220A_LabelNameInd7 = 304,
    Puid_Pow_Out220A_GridChInd8 = 305,
    Puid_Pow_Out220A_ShpOnOffInd8 = 306,
    Puid_Pow_Out220A_LabelNameInd8 = 307,
    Puid_Pow_Out12M_GridCh1 = 308,
    Puid_Pow_Out12M_ButtOffCh1 = 309,
    Puid_Pow_Out12M_ButtOnCh1 = 310,
    Puid_Pow_Out12M_GridCh2 = 311,
    Puid_Pow_Out12M_ButtOffCh2 = 312,
    Puid_Pow_Out12M_ButtOnCh2 = 313,
    Puid_Pow_Out12M_GridCh3 = 314,
    Puid_Pow_Out12M_ButtOffCh3 = 315,
    Puid_Pow_Out12M_ButtOnCh3 = 316,
    Puid_Pow_Out12M_GridCh4 = 317,
    Puid_Pow_Out12M_ButtOffCh4 = 318,
    Puid_Pow_Out12M_ButtOnCh4 = 319,
    Puid_Pow_Out12M_GridCh5 = 320,
    Puid_Pow_Out12M_ButtOffCh5 = 321,
    Puid_Pow_Out12M_ButtOnCh5 = 322,
    Puid_Pow_Out12M_GridCh6 = 323,
    Puid_Pow_Out12M_ButtOffCh6 = 324,
    Puid_Pow_Out12M_ButtOnCh6 = 325,
    Puid_Pow_Out12M_GridCh7 = 326,
    Puid_Pow_Out12M_ButtOffCh7 = 327,
    Puid_Pow_Out12M_ButtOnCh7 = 328,
    Puid_Pow_Out12M_GridCh8 = 329,
    Puid_Pow_Out12M_ButtOffCh8 = 330,
    Puid_Pow_Out12M_ButtOnCh8 = 331,
    Puid_Pow_Out12M_Ind12M = 332,
    Puid_Pow_Out12F_GridCh1 = 333,
    Puid_Pow_Out12F_ButtOffCh1 = 334,
    Puid_Pow_Out12F_ButtOnCh1 = 335,
    Puid_Pow_Out12F_GridCh2 = 336,
    Puid_Pow_Out12F_ButtOffCh2 = 337,
    Puid_Pow_Out12F_ButtOnCh2 = 338,
    Puid_Pow_Out12F_GridCh3 = 339,
    Puid_Pow_Out12F_ButtOffCh3 = 340,
    Puid_Pow_Out12F_ButtOnCh3 = 341,
    Puid_Pow_Out12F_GridCh4 = 342,
    Puid_Pow_Out12F_ButtOffCh4 = 343,
    Puid_Pow_Out12F_ButtOnCh4 = 344,
    Puid_Pow_Out12F_GridCh5 = 345,
    Puid_Pow_Out12F_ButtOffCh5 = 346,
    Puid_Pow_Out12F_ButtOnCh5 = 347,
    Puid_Pow_Out12F_GridCh6 = 348,
    Puid_Pow_Out12F_ButtOffCh6 = 349,
    Puid_Pow_Out12F_ButtOnCh6 = 350,
    Puid_Pow_Out12F_GridCh7 = 351,
    Puid_Pow_Out12F_ButtOffCh7 = 352,
    Puid_Pow_Out12F_ButtOnCh7 = 353,
    Puid_Pow_Out12F_GridCh8 = 354,
    Puid_Pow_Out12F_ButtOffCh8 = 355,
    Puid_Pow_Out12F_ButtOnCh8 = 356,
    Puid_Pow_Out12F_Ind12F = 357,
    Puid_Pow_Out12A_GridCh1 = 358,
    Puid_Pow_Out12A_ButtOffCh1 = 359,
    Puid_Pow_Out12A_ButtOnCh1 = 360,
    Puid_Pow_Out12A_GridCh2 = 361,
    Puid_Pow_Out12A_ButtOffCh2 = 362,
    Puid_Pow_Out12A_ButtOnCh2 = 363,
    Puid_Pow_Out12A_GridCh3 = 364,
    Puid_Pow_Out12A_ButtOffCh3 = 365,
    Puid_Pow_Out12A_ButtOnCh3 = 366,
    Puid_Pow_Out12A_GridCh4 = 367,
    Puid_Pow_Out12A_ButtOffCh4 = 368,
    Puid_Pow_Out12A_ButtOnCh4 = 369,
    Puid_Pow_Out12A_GridCh5 = 370,
    Puid_Pow_Out12A_ButtOffCh5 = 371,
    Puid_Pow_Out12A_ButtOnCh5 = 372,
    Puid_Pow_Out12A_GridCh6 = 373,
    Puid_Pow_Out12A_ButtOffCh6 = 374,
    Puid_Pow_Out12A_ButtOnCh6 = 375,
    Puid_Pow_Out12A_GridCh7 = 376,
    Puid_Pow_Out12A_ButtOffCh7 = 377,
    Puid_Pow_Out12A_ButtOnCh7 = 378,
    Puid_Pow_Out12A_GridCh8 = 379,
    Puid_Pow_Out12A_ButtOffCh8 = 380,
    Puid_Pow_Out12A_ButtOnCh8 = 381,
    Puid_Pow_Out12A_Ind12A = 382,
    Puid_Pow_Out24M_GridCh1 = 383,
    Puid_Pow_Out24M_ButtOffCh1 = 384,
    Puid_Pow_Out24M_ButtOnCh1 = 385,
    Puid_Pow_Out24M_GridCh2 = 386,
    Puid_Pow_Out24M_ButtOffCh2 = 387,
    Puid_Pow_Out24M_ButtOnCh2 = 388,
    Puid_Pow_Out24M_GridCh3 = 389,
    Puid_Pow_Out24M_ButtOffCh3 = 390,
    Puid_Pow_Out24M_ButtOnCh3 = 391,
    Puid_Pow_Out24M_GridCh4 = 392,
    Puid_Pow_Out24M_ButtOffCh4 = 393,
    Puid_Pow_Out24M_ButtOnCh4 = 394,
    Puid_Pow_Out24M_GridCh5 = 395,
    Puid_Pow_Out24M_ButtOffCh5 = 396,
    Puid_Pow_Out24M_ButtOnCh5 = 397,
    Puid_Pow_Out24M_GridCh6 = 398,
    Puid_Pow_Out24M_ButtOffCh6 = 399,
    Puid_Pow_Out24M_ButtOnCh6 = 400,
    Puid_Pow_Out24M_GridCh7 = 401,
    Puid_Pow_Out24M_ButtOffCh7 = 402,
    Puid_Pow_Out24M_ButtOnCh7 = 403,
    Puid_Pow_Out24M_GridCh8 = 404,
    Puid_Pow_Out24M_ButtOffCh8 = 405,
    Puid_Pow_Out24M_ButtOnCh8 = 406,
    Puid_Pow_Out24M_Ind24M = 407,
    Puid_Pow_Out24F_GridCh1 = 408,
    Puid_Pow_Out24F_ButtOffCh1 = 409,
    Puid_Pow_Out24F_ButtOnCh1 = 410,
    Puid_Pow_Out24F_GridCh2 = 411,
    Puid_Pow_Out24F_ButtOffCh2 = 412,
    Puid_Pow_Out24F_ButtOnCh2 = 413,
    Puid_Pow_Out24F_GridCh3 = 414,
    Puid_Pow_Out24F_ButtOffCh3 = 415,
    Puid_Pow_Out24F_ButtOnCh3 = 416,
    Puid_Pow_Out24F_GridCh4 = 417,
    Puid_Pow_Out24F_ButtOffCh4 = 418,
    Puid_Pow_Out24F_ButtOnCh4 = 419,
    Puid_Pow_Out24F_GridCh5 = 420,
    Puid_Pow_Out24F_ButtOffCh5 = 421,
    Puid_Pow_Out24F_ButtOnCh5 = 422,
    Puid_Pow_Out24F_GridCh6 = 423,
    Puid_Pow_Out24F_ButtOffCh6 = 424,
    Puid_Pow_Out24F_ButtOnCh6 = 425,
    Puid_Pow_Out24F_GridCh7 = 426,
    Puid_Pow_Out24F_ButtOffCh7 = 427,
    Puid_Pow_Out24F_ButtOnCh7 = 428,
    Puid_Pow_Out24F_GridCh8 = 429,
    Puid_Pow_Out24F_ButtOffCh8 = 430,
    Puid_Pow_Out24F_ButtOnCh8 = 431,
    Puid_Pow_Out24F_Ind24F = 432,
    Puid_Pow_Out24A_GridCh1 = 433,
    Puid_Pow_Out24A_ButtOffCh1 = 434,
    Puid_Pow_Out24A_ButtOnCh1 = 435,
    Puid_Pow_Out24A_GridCh2 = 436,
    Puid_Pow_Out24A_ButtOffCh2 = 437,
    Puid_Pow_Out24A_ButtOnCh2 = 438,
    Puid_Pow_Out24A_GridCh3 = 439,
    Puid_Pow_Out24A_ButtOffCh3 = 440,
    Puid_Pow_Out24A_ButtOnCh3 = 441,
    Puid_Pow_Out24A_GridCh4 = 442,
    Puid_Pow_Out24A_ButtOffCh4 = 443,
    Puid_Pow_Out24A_ButtOnCh4 = 444,
    Puid_Pow_Out24A_GridCh5 = 445,
    Puid_Pow_Out24A_ButtOffCh5 = 446,
    Puid_Pow_Out24A_ButtOnCh5 = 447,
    Puid_Pow_Out24A_GridCh6 = 448,
    Puid_Pow_Out24A_ButtOffCh6 = 449,
    Puid_Pow_Out24A_ButtOnCh6 = 450,
    Puid_Pow_Out24A_GridCh7 = 451,
    Puid_Pow_Out24A_ButtOffCh7 = 452,
    Puid_Pow_Out24A_ButtOnCh7 = 453,
    Puid_Pow_Out24A_GridCh8 = 454,
    Puid_Pow_Out24A_ButtOffCh8 = 455,
    Puid_Pow_Out24A_ButtOnCh8 = 456,
    Puid_Pow_Out24A_Ind24A = 457,
    Puid_Pow_Out220M_GridCh1 = 458,
    Puid_Pow_Out220M_ButtOffCh1 = 459,
    Puid_Pow_Out220M_ButtOnCh1 = 460,
    Puid_Pow_Out220M_GridCh2 = 461,
    Puid_Pow_Out220M_ButtOffCh2 = 462,
    Puid_Pow_Out220M_ButtOnCh2 = 463,
    Puid_Pow_Out220M_GridCh3 = 464,
    Puid_Pow_Out220M_ButtOffCh3 = 465,
    Puid_Pow_Out220M_ButtOnCh3 = 466,
    Puid_Pow_Out220M_GridCh4 = 467,
    Puid_Pow_Out220M_ButtOffCh4 = 468,
    Puid_Pow_Out220M_ButtOnCh4 = 469,
    Puid_Pow_Out220M_GridCh5 = 470,
    Puid_Pow_Out220M_ButtOffCh5 = 471,
    Puid_Pow_Out220M_ButtOnCh5 = 472,
    Puid_Pow_Out220M_GridCh6 = 473,
    Puid_Pow_Out220M_ButtOffCh6 = 474,
    Puid_Pow_Out220M_ButtOnCh6 = 475,
    Puid_Pow_Out220M_GridCh7 = 476,
    Puid_Pow_Out220M_ButtOffCh7 = 477,
    Puid_Pow_Out220M_ButtOnCh7 = 478,
    Puid_Pow_Out220M_GridCh8 = 479,
    Puid_Pow_Out220M_ButtOffCh8 = 480,
    Puid_Pow_Out220M_ButtOnCh8 = 481,
    Puid_Pow_Out220M_Ind220M = 482,
    Puid_Pow_Out220F_GridCh1 = 483,
    Puid_Pow_Out220F_ButtOffCh1 = 484,
    Puid_Pow_Out220F_ButtOnCh1 = 485,
    Puid_Pow_Out220F_GridCh2 = 486,
    Puid_Pow_Out220F_ButtOffCh2 = 487,
    Puid_Pow_Out220F_ButtOnCh2 = 488,
    Puid_Pow_Out220F_GridCh3 = 489,
    Puid_Pow_Out220F_ButtOffCh3 = 490,
    Puid_Pow_Out220F_ButtOnCh3 = 491,
    Puid_Pow_Out220F_GridCh4 = 492,
    Puid_Pow_Out220F_ButtOffCh4 = 493,
    Puid_Pow_Out220F_ButtOnCh4 = 494,
    Puid_Pow_Out220F_GridCh5 = 495,
    Puid_Pow_Out220F_ButtOffCh5 = 496,
    Puid_Pow_Out220F_ButtOnCh5 = 497,
    Puid_Pow_Out220F_GridCh6 = 498,
    Puid_Pow_Out220F_ButtOffCh6 = 499,
    Puid_Pow_Out220F_ButtOnCh6 = 500,
    Puid_Pow_Out220F_GridCh7 = 501,
    Puid_Pow_Out220F_ButtOffCh7 = 502,
    Puid_Pow_Out220F_ButtOnCh7 = 503,
    Puid_Pow_Out220F_GridCh8 = 504,
    Puid_Pow_Out220F_ButtOffCh8 = 505,
    Puid_Pow_Out220F_ButtOnCh8 = 506,
    Puid_Pow_Out220F_Ind220F = 507,
    Puid_Pow_Out220A_GridCh1 = 508,
    Puid_Pow_Out220A_ButtOffCh1 = 509,
    Puid_Pow_Out220A_ButtOnCh1 = 510,
    Puid_Pow_Out220A_GridCh2 = 511,
    Puid_Pow_Out220A_ButtOffCh2 = 512,
    Puid_Pow_Out220A_ButtOnCh2 = 513,
    Puid_Pow_Out220A_GridCh3 = 514,
    Puid_Pow_Out220A_ButtOffCh3 = 515,
    Puid_Pow_Out220A_ButtOnCh3 = 516,
    Puid_Pow_Out220A_GridCh4 = 517,
    Puid_Pow_Out220A_ButtOffCh4 = 518,
    Puid_Pow_Out220A_ButtOnCh4 = 519,
    Puid_Pow_Out220A_GridCh5 = 520,
    Puid_Pow_Out220A_ButtOffCh5 = 521,
    Puid_Pow_Out220A_ButtOnCh5 = 522,
    Puid_Pow_Out220A_GridCh6 = 523,
    Puid_Pow_Out220A_ButtOffCh6 = 524,
    Puid_Pow_Out220A_ButtOnCh6 = 525,
    Puid_Pow_Out220A_GridCh7 = 526,
    Puid_Pow_Out220A_ButtOffCh7 = 527,
    Puid_Pow_Out220A_ButtOnCh7 = 528,
    Puid_Pow_Out220A_GridCh8 = 529,
    Puid_Pow_Out220A_ButtOffCh8 = 530,
    Puid_Pow_Out220A_ButtOnCh8 = 531,
    Puid_Pow_Out220A_Ind220A = 532,
    Puid_Steer_GridCommandCpM = 533,
    Puid_Steer_GridModeCpM = 534,
    Puid_Steer_GridSetRefCpM = 535,
    Puid_Steer_GridCommandCpA = 536,
    Puid_Steer_GridModeCpA = 537,
    Puid_Steer_GridSetRefCpA = 538,
    Puid_Steer_GridApMPanel = 539,
    Puid_Steer_ApM_GridAutopilot = 540,
    Puid_Steer_ApM_LabelApSteer = 541,
    Puid_Steer_ApM_InstrHeadingRef = 542,
    Puid_Steer_ApM_LabelHeading = 543,
    Puid_Steer_ApM_InstrHeading = 544,
    Puid_Steer_ApM_ShapeContourShip = 545,
    Puid_Steer_ApM_CompThruster = 546,
    Puid_Steer_ApM_CompRudder = 547,
    Puid_Steer_ApM_CompRateOfTurn = 548,
    Puid_Steer_ApM_CompEngine = 549,
    Puid_Steer_ApM_GridRotMeas = 550,
    Puid_Steer_ApM_TextRotValue = 551,
    Puid_Steer_ApM_LabelRot = 552,
    Puid_Steer_ApM_GridEngineMeas = 553,
    Puid_Steer_ApM_TextEngineValue = 554,
    Puid_Steer_ApM_LabelEngine = 555,
    Puid_Steer_ApM_GridThrustMeas = 556,
    Puid_Steer_ApM_TextThrustValue = 557,
    Puid_Steer_ApM_LabelThrust = 558,
    Puid_Steer_ApA_GridAutopilot = 559,
    Puid_Steer_ApA_LabelApSteer = 560,
    Puid_Steer_ApA_InstrHeadingRef = 561,
    Puid_Steer_ApA_LabelHeading = 562,
    Puid_Steer_ApA_InstrHeading = 563,
    Puid_Steer_ApA_ShapeContourShip = 564,
    Puid_Steer_ApA_CompThruster = 565,
    Puid_Steer_ApA_CompRudder = 566,
    Puid_Steer_ApA_CompRateOfTurn = 567,
    Puid_Steer_ApA_CompEngine = 568,
    Puid_Steer_ApA_GridRotMeas = 569,
    Puid_Steer_ApA_TextRotValue = 570,
    Puid_Steer_ApA_LabelRot = 571,
    Puid_Steer_ApA_GridEngineMeas = 572,
    Puid_Steer_ApA_TextEngineValue = 573,
    Puid_Steer_ApA_LabelEngine = 574,
    Puid_Steer_ApA_GridThrustMeas = 575,
    Puid_Steer_ApA_TextThrustValue = 576,
    Puid_Steer_ApA_LabelThrust = 577,
    Puid_Steer_CpM_CommandNoRef = 578,
    Puid_Steer_CpM_ModeNoRef = 579,
    Puid_Steer_CpA_CommandNoRef = 580,
    Puid_Steer_CpA_ModeNoRef = 581,
    Puid_Steer_CpM_Command = 582,
    Puid_Steer_CpM_Mode = 583,
    Puid_Steer_CpM_Reference = 584,
    Puid_Steer_CpA_Command = 585,
    Puid_Steer_CpA_Mode = 586,
    Puid_Steer_CpA_Reference = 587,
    Puid_Steer_CpM_HeaderCommandPanelSteer = 588,
    Puid_Steer_CpM_ShapeCommandStatusSteer = 589,
    Puid_Steer_CpM_LabelSteerMode = 590,
    Puid_Steer_CpM_TextCommandStatusSteer = 591,
    Puid_Steer_CpM_ButtTakeRequestSteer = 592,
    Puid_Steer_CpM_ButtReleaseSteer = 593,
    Puid_Steer_CpA_HeaderCommandPanelSteer = 594,
    Puid_Steer_CpA_ShapeCommandStatusSteer = 595,
    Puid_Steer_CpA_LabelSteerMode = 596,
    Puid_Steer_CpA_TextCommandStatusSteer = 597,
    Puid_Steer_CpA_ButtTakeRequestSteer = 598,
    Puid_Steer_CpA_ButtReleaseSteer = 599,
    Puid_Steer_CpM_HeaderModeControl = 600,
    Puid_Steer_CpM_ButtDp = 601,
    Puid_Steer_CpM_ButtTrack = 602,
    Puid_Steer_CpM_ButtRiver = 603,
    Puid_Steer_CpM_ButtWork = 604,
    Puid_Steer_CpM_ButtCourse = 605,
    Puid_Steer_CpM_ButtStandby = 606,
    Puid_Steer_CpA_HeaderModeControl = 607,
    Puid_Steer_CpA_ButtDp = 608,
    Puid_Steer_CpA_ButtTrack = 609,
    Puid_Steer_CpA_ButtRiver = 610,
    Puid_Steer_CpA_ButtWork = 611,
    Puid_Steer_CpA_ButtCourse = 612,
    Puid_Steer_CpA_ButtStandby = 613,
    Puid_Steer_CpM_LabelHeader = 614,
    Puid_Steer_CpM_ButtonLeftSmall = 615,
    Puid_Steer_CpM_ButtMidZero = 616,
    Puid_Steer_CpM_ButtRightSmall = 617,
    Puid_Steer_CpM_EncoderNumber = 618,
    Puid_Steer_CpM_ButtLeftBig = 619,
    Puid_Steer_CpM_ButtRightBig = 620,
    Puid_Steer_CpA_LabelHeader = 621,
    Puid_Steer_CpA_ButtonLeftSmall = 622,
    Puid_Steer_CpA_ButtMidZero = 623,
    Puid_Steer_CpA_ButtRightSmall = 624,
    Puid_Steer_CpA_EncoderNumber = 625,
    Puid_Steer_CpA_ButtLeftBig = 626,
    Puid_Steer_CpA_ButtRightBig = 627,
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
