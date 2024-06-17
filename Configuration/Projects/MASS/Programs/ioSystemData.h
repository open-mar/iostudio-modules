// !!! This C++ file is generated by ioStudio !!!
#if !defined(__IOSYSTEMDATA_H)
#define __IOSYSTEMDATA_H
#include "ioSystem/Core/ioTypes.h"
typedef enum
{
    Duid_NotDefined = 0,
    Duid_Batt_ChargeInputVolt = 1,
    Duid_Batt_IsChargActive12V = 2,
    Duid_Batt_IsChargActive24V = 3,
    Duid_Batt_StatusOfCharge = 4,
    Duid_Batt_TimeTo10Percent = 5,
    Duid_Batt_RequestBattData = 6,
    Duid_Batt_ResponseBattData = 7,
    Duid_Batt_Dc12_BattVolt = 8,
    Duid_Batt_Dc12_BattAmpOut = 9,
    Duid_Batt_Dc12_BattAmpIn = 10,
    Duid_Batt_Dc12_BattAmpAvg = 11,
    Duid_Batt_Dc12_RequestDcData = 12,
    Duid_Batt_Dc12_ResponseDcData = 13,
    Duid_Batt_Dc24_BattVolt = 14,
    Duid_Batt_Dc24_BattAmpOut = 15,
    Duid_Batt_Dc24_BattAmpIn = 16,
    Duid_Batt_Dc24_BattAmpAvg = 17,
    Duid_Batt_Dc24_RequestDcData = 18,
    Duid_Batt_Dc24_ResponseDcData = 19,
    Duid_Pow_Out12M_OnCh1 = 20,
    Duid_Pow_Out12M_OnCh2 = 21,
    Duid_Pow_Out12M_OnCh3 = 22,
    Duid_Pow_Out12M_OnCh4 = 23,
    Duid_Pow_Out12M_OnCh5 = 24,
    Duid_Pow_Out12M_OnCh6 = 25,
    Duid_Pow_Out12M_OnCh7 = 26,
    Duid_Pow_Out12M_OnCh8 = 27,
    Duid_Pow_Out12M_SwitchOnCh1 = 28,
    Duid_Pow_Out12M_SwitchOnCh2 = 29,
    Duid_Pow_Out12M_SwitchOnCh3 = 30,
    Duid_Pow_Out12M_SwitchOnCh4 = 31,
    Duid_Pow_Out12M_SwitchOnCh5 = 32,
    Duid_Pow_Out12M_SwitchOnCh6 = 33,
    Duid_Pow_Out12M_SwitchOnCh7 = 34,
    Duid_Pow_Out12M_SwitchOnCh8 = 35,
    Duid_Pow_Out12M_SwitchOffCh1 = 36,
    Duid_Pow_Out12M_SwitchOffCh2 = 37,
    Duid_Pow_Out12M_SwitchOffCh3 = 38,
    Duid_Pow_Out12M_SwitchOffCh4 = 39,
    Duid_Pow_Out12M_SwitchOffCh5 = 40,
    Duid_Pow_Out12M_SwitchOffCh6 = 41,
    Duid_Pow_Out12M_SwitchOffCh7 = 42,
    Duid_Pow_Out12M_SwitchOffCh8 = 43,
    Duid_Pow_Out12M_OutStatus = 44,
    Duid_Pow_Out12F_OnCh1 = 45,
    Duid_Pow_Out12F_OnCh2 = 46,
    Duid_Pow_Out12F_OnCh3 = 47,
    Duid_Pow_Out12F_OnCh4 = 48,
    Duid_Pow_Out12F_OnCh5 = 49,
    Duid_Pow_Out12F_OnCh6 = 50,
    Duid_Pow_Out12F_OnCh7 = 51,
    Duid_Pow_Out12F_OnCh8 = 52,
    Duid_Pow_Out12F_SwitchOnCh1 = 53,
    Duid_Pow_Out12F_SwitchOnCh2 = 54,
    Duid_Pow_Out12F_SwitchOnCh3 = 55,
    Duid_Pow_Out12F_SwitchOnCh4 = 56,
    Duid_Pow_Out12F_SwitchOnCh5 = 57,
    Duid_Pow_Out12F_SwitchOnCh6 = 58,
    Duid_Pow_Out12F_SwitchOnCh7 = 59,
    Duid_Pow_Out12F_SwitchOnCh8 = 60,
    Duid_Pow_Out12F_SwitchOffCh1 = 61,
    Duid_Pow_Out12F_SwitchOffCh2 = 62,
    Duid_Pow_Out12F_SwitchOffCh3 = 63,
    Duid_Pow_Out12F_SwitchOffCh4 = 64,
    Duid_Pow_Out12F_SwitchOffCh5 = 65,
    Duid_Pow_Out12F_SwitchOffCh6 = 66,
    Duid_Pow_Out12F_SwitchOffCh7 = 67,
    Duid_Pow_Out12F_SwitchOffCh8 = 68,
    Duid_Pow_Out12F_OutStatus = 69,
    Duid_Pow_Out12A_OnCh1 = 70,
    Duid_Pow_Out12A_OnCh2 = 71,
    Duid_Pow_Out12A_OnCh3 = 72,
    Duid_Pow_Out12A_OnCh4 = 73,
    Duid_Pow_Out12A_OnCh5 = 74,
    Duid_Pow_Out12A_OnCh6 = 75,
    Duid_Pow_Out12A_OnCh7 = 76,
    Duid_Pow_Out12A_OnCh8 = 77,
    Duid_Pow_Out12A_SwitchOnCh1 = 78,
    Duid_Pow_Out12A_SwitchOnCh2 = 79,
    Duid_Pow_Out12A_SwitchOnCh3 = 80,
    Duid_Pow_Out12A_SwitchOnCh4 = 81,
    Duid_Pow_Out12A_SwitchOnCh5 = 82,
    Duid_Pow_Out12A_SwitchOnCh6 = 83,
    Duid_Pow_Out12A_SwitchOnCh7 = 84,
    Duid_Pow_Out12A_SwitchOnCh8 = 85,
    Duid_Pow_Out12A_SwitchOffCh1 = 86,
    Duid_Pow_Out12A_SwitchOffCh2 = 87,
    Duid_Pow_Out12A_SwitchOffCh3 = 88,
    Duid_Pow_Out12A_SwitchOffCh4 = 89,
    Duid_Pow_Out12A_SwitchOffCh5 = 90,
    Duid_Pow_Out12A_SwitchOffCh6 = 91,
    Duid_Pow_Out12A_SwitchOffCh7 = 92,
    Duid_Pow_Out12A_SwitchOffCh8 = 93,
    Duid_Pow_Out12A_OutStatus = 94,
    Duid_Pow_Out24M_OnCh1 = 95,
    Duid_Pow_Out24M_OnCh2 = 96,
    Duid_Pow_Out24M_OnCh3 = 97,
    Duid_Pow_Out24M_OnCh4 = 98,
    Duid_Pow_Out24M_OnCh5 = 99,
    Duid_Pow_Out24M_OnCh6 = 100,
    Duid_Pow_Out24M_OnCh7 = 101,
    Duid_Pow_Out24M_OnCh8 = 102,
    Duid_Pow_Out24M_SwitchOnCh1 = 103,
    Duid_Pow_Out24M_SwitchOnCh2 = 104,
    Duid_Pow_Out24M_SwitchOnCh3 = 105,
    Duid_Pow_Out24M_SwitchOnCh4 = 106,
    Duid_Pow_Out24M_SwitchOnCh5 = 107,
    Duid_Pow_Out24M_SwitchOnCh6 = 108,
    Duid_Pow_Out24M_SwitchOnCh7 = 109,
    Duid_Pow_Out24M_SwitchOnCh8 = 110,
    Duid_Pow_Out24M_SwitchOffCh1 = 111,
    Duid_Pow_Out24M_SwitchOffCh2 = 112,
    Duid_Pow_Out24M_SwitchOffCh3 = 113,
    Duid_Pow_Out24M_SwitchOffCh4 = 114,
    Duid_Pow_Out24M_SwitchOffCh5 = 115,
    Duid_Pow_Out24M_SwitchOffCh6 = 116,
    Duid_Pow_Out24M_SwitchOffCh7 = 117,
    Duid_Pow_Out24M_SwitchOffCh8 = 118,
    Duid_Pow_Out24M_OutStatus = 119,
    Duid_Pow_Out24F_OnCh1 = 120,
    Duid_Pow_Out24F_OnCh2 = 121,
    Duid_Pow_Out24F_OnCh3 = 122,
    Duid_Pow_Out24F_OnCh4 = 123,
    Duid_Pow_Out24F_OnCh5 = 124,
    Duid_Pow_Out24F_OnCh6 = 125,
    Duid_Pow_Out24F_OnCh7 = 126,
    Duid_Pow_Out24F_OnCh8 = 127,
    Duid_Pow_Out24F_SwitchOnCh1 = 128,
    Duid_Pow_Out24F_SwitchOnCh2 = 129,
    Duid_Pow_Out24F_SwitchOnCh3 = 130,
    Duid_Pow_Out24F_SwitchOnCh4 = 131,
    Duid_Pow_Out24F_SwitchOnCh5 = 132,
    Duid_Pow_Out24F_SwitchOnCh6 = 133,
    Duid_Pow_Out24F_SwitchOnCh7 = 134,
    Duid_Pow_Out24F_SwitchOnCh8 = 135,
    Duid_Pow_Out24F_SwitchOffCh1 = 136,
    Duid_Pow_Out24F_SwitchOffCh2 = 137,
    Duid_Pow_Out24F_SwitchOffCh3 = 138,
    Duid_Pow_Out24F_SwitchOffCh4 = 139,
    Duid_Pow_Out24F_SwitchOffCh5 = 140,
    Duid_Pow_Out24F_SwitchOffCh6 = 141,
    Duid_Pow_Out24F_SwitchOffCh7 = 142,
    Duid_Pow_Out24F_SwitchOffCh8 = 143,
    Duid_Pow_Out24F_OutStatus = 144,
    Duid_Pow_Out24A_OnCh1 = 145,
    Duid_Pow_Out24A_OnCh2 = 146,
    Duid_Pow_Out24A_OnCh3 = 147,
    Duid_Pow_Out24A_OnCh4 = 148,
    Duid_Pow_Out24A_OnCh5 = 149,
    Duid_Pow_Out24A_OnCh6 = 150,
    Duid_Pow_Out24A_OnCh7 = 151,
    Duid_Pow_Out24A_OnCh8 = 152,
    Duid_Pow_Out24A_SwitchOnCh1 = 153,
    Duid_Pow_Out24A_SwitchOnCh2 = 154,
    Duid_Pow_Out24A_SwitchOnCh3 = 155,
    Duid_Pow_Out24A_SwitchOnCh4 = 156,
    Duid_Pow_Out24A_SwitchOnCh5 = 157,
    Duid_Pow_Out24A_SwitchOnCh6 = 158,
    Duid_Pow_Out24A_SwitchOnCh7 = 159,
    Duid_Pow_Out24A_SwitchOnCh8 = 160,
    Duid_Pow_Out24A_SwitchOffCh1 = 161,
    Duid_Pow_Out24A_SwitchOffCh2 = 162,
    Duid_Pow_Out24A_SwitchOffCh3 = 163,
    Duid_Pow_Out24A_SwitchOffCh4 = 164,
    Duid_Pow_Out24A_SwitchOffCh5 = 165,
    Duid_Pow_Out24A_SwitchOffCh6 = 166,
    Duid_Pow_Out24A_SwitchOffCh7 = 167,
    Duid_Pow_Out24A_SwitchOffCh8 = 168,
    Duid_Pow_Out24A_OutStatus = 169,
    Duid_Pow_Out220M_OnCh1 = 170,
    Duid_Pow_Out220M_OnCh2 = 171,
    Duid_Pow_Out220M_OnCh3 = 172,
    Duid_Pow_Out220M_OnCh4 = 173,
    Duid_Pow_Out220M_OnCh5 = 174,
    Duid_Pow_Out220M_OnCh6 = 175,
    Duid_Pow_Out220M_OnCh7 = 176,
    Duid_Pow_Out220M_OnCh8 = 177,
    Duid_Pow_Out220M_SwitchOnCh1 = 178,
    Duid_Pow_Out220M_SwitchOnCh2 = 179,
    Duid_Pow_Out220M_SwitchOnCh3 = 180,
    Duid_Pow_Out220M_SwitchOnCh4 = 181,
    Duid_Pow_Out220M_SwitchOnCh5 = 182,
    Duid_Pow_Out220M_SwitchOnCh6 = 183,
    Duid_Pow_Out220M_SwitchOnCh7 = 184,
    Duid_Pow_Out220M_SwitchOnCh8 = 185,
    Duid_Pow_Out220M_SwitchOffCh1 = 186,
    Duid_Pow_Out220M_SwitchOffCh2 = 187,
    Duid_Pow_Out220M_SwitchOffCh3 = 188,
    Duid_Pow_Out220M_SwitchOffCh4 = 189,
    Duid_Pow_Out220M_SwitchOffCh5 = 190,
    Duid_Pow_Out220M_SwitchOffCh6 = 191,
    Duid_Pow_Out220M_SwitchOffCh7 = 192,
    Duid_Pow_Out220M_SwitchOffCh8 = 193,
    Duid_Pow_Out220M_OutStatus = 194,
    Duid_Pow_Out220F_OnCh1 = 195,
    Duid_Pow_Out220F_OnCh2 = 196,
    Duid_Pow_Out220F_OnCh3 = 197,
    Duid_Pow_Out220F_OnCh4 = 198,
    Duid_Pow_Out220F_OnCh5 = 199,
    Duid_Pow_Out220F_OnCh6 = 200,
    Duid_Pow_Out220F_OnCh7 = 201,
    Duid_Pow_Out220F_OnCh8 = 202,
    Duid_Pow_Out220F_SwitchOnCh1 = 203,
    Duid_Pow_Out220F_SwitchOnCh2 = 204,
    Duid_Pow_Out220F_SwitchOnCh3 = 205,
    Duid_Pow_Out220F_SwitchOnCh4 = 206,
    Duid_Pow_Out220F_SwitchOnCh5 = 207,
    Duid_Pow_Out220F_SwitchOnCh6 = 208,
    Duid_Pow_Out220F_SwitchOnCh7 = 209,
    Duid_Pow_Out220F_SwitchOnCh8 = 210,
    Duid_Pow_Out220F_SwitchOffCh1 = 211,
    Duid_Pow_Out220F_SwitchOffCh2 = 212,
    Duid_Pow_Out220F_SwitchOffCh3 = 213,
    Duid_Pow_Out220F_SwitchOffCh4 = 214,
    Duid_Pow_Out220F_SwitchOffCh5 = 215,
    Duid_Pow_Out220F_SwitchOffCh6 = 216,
    Duid_Pow_Out220F_SwitchOffCh7 = 217,
    Duid_Pow_Out220F_SwitchOffCh8 = 218,
    Duid_Pow_Out220F_OutStatus = 219,
    Duid_Pow_Out220A_OnCh1 = 220,
    Duid_Pow_Out220A_OnCh2 = 221,
    Duid_Pow_Out220A_OnCh3 = 222,
    Duid_Pow_Out220A_OnCh4 = 223,
    Duid_Pow_Out220A_OnCh5 = 224,
    Duid_Pow_Out220A_OnCh6 = 225,
    Duid_Pow_Out220A_OnCh7 = 226,
    Duid_Pow_Out220A_OnCh8 = 227,
    Duid_Pow_Out220A_SwitchOnCh1 = 228,
    Duid_Pow_Out220A_SwitchOnCh2 = 229,
    Duid_Pow_Out220A_SwitchOnCh3 = 230,
    Duid_Pow_Out220A_SwitchOnCh4 = 231,
    Duid_Pow_Out220A_SwitchOnCh5 = 232,
    Duid_Pow_Out220A_SwitchOnCh6 = 233,
    Duid_Pow_Out220A_SwitchOnCh7 = 234,
    Duid_Pow_Out220A_SwitchOnCh8 = 235,
    Duid_Pow_Out220A_SwitchOffCh1 = 236,
    Duid_Pow_Out220A_SwitchOffCh2 = 237,
    Duid_Pow_Out220A_SwitchOffCh3 = 238,
    Duid_Pow_Out220A_SwitchOffCh4 = 239,
    Duid_Pow_Out220A_SwitchOffCh5 = 240,
    Duid_Pow_Out220A_SwitchOffCh6 = 241,
    Duid_Pow_Out220A_SwitchOffCh7 = 242,
    Duid_Pow_Out220A_SwitchOffCh8 = 243,
    Duid_Pow_Out220A_OutStatus = 244,
    Duid_Steer_Ap1_RudderAngleMeas = 245,
    Duid_Steer_Ap1_FrontThrustMeas = 246,
    Duid_Steer_Ap1_RateOfTurnMeas = 247,
    Duid_Steer_Ap1_HeadingMeas = 248,
    Duid_Steer_Ap1_FrontThrustRef = 249,
    Duid_Steer_Ap1_OnChangeRef = 250,
    Duid_Steer_Ap1_HeadingRef = 251,
    Duid_Steer_Ap1_RateOfTurnRef = 252,
    Duid_Steer_Ap1_RudderAngleRef = 253,
    Duid_Steer_Ap1_OnRequestSteerData = 254,
    Duid_Steer_Ap1_OnChangeCompass = 255,
    Duid_Steer_Ap1_OnChangeRudder = 256,
    Duid_Steer_Ap1_OnChangeThrust = 257,
    Duid_Steer_Ap1_EngineRpmMeas = 258,
    Duid_Steer_Ap1_EngineRpmRef = 259,
    Duid_Steer_Ap1_OnChangeEngine = 260,
    Duid_Steer_Cp1_TakeCommand = 261,
    Duid_Steer_Cp1_ModeDp = 262,
    Duid_Steer_Cp1_ModeRiver = 263,
    Duid_Steer_Cp1_ModeTrack = 264,
    Duid_Steer_Cp1_ModeWork = 265,
    Duid_Steer_Cp1_ModeAuto = 266,
    Duid_Steer_Cp1_ModeStandby = 267,
    Duid_Steer_Cp1_SteerMode = 268,
    Duid_Steer_Cp1_Release = 269,
    Duid_Steer_Cp1_OnChangeCommand = 270,
    Duid_Steer_Cp1_OnChangeSteerMode = 271,
    Duid_Steer_Cp1_LeftSmall = 272,
    Duid_Steer_Cp1_MidZero = 273,
    Duid_Steer_Cp1_RightSmall = 274,
    Duid_Steer_Cp1_LeftBig = 275,
    Duid_Steer_Cp1_RightBig = 276,
    Duid_Steer_Cp1_EncoderNumber = 277,
    Duid_Steer_Cp2_TakeCommand = 278,
    Duid_Steer_Cp2_ModeDp = 279,
    Duid_Steer_Cp2_ModeRiver = 280,
    Duid_Steer_Cp2_ModeTrack = 281,
    Duid_Steer_Cp2_ModeWork = 282,
    Duid_Steer_Cp2_ModeAuto = 283,
    Duid_Steer_Cp2_ModeStandby = 284,
    Duid_Steer_Cp2_SteerMode = 285,
    Duid_Steer_Cp2_Release = 286,
    Duid_Steer_Cp2_OnChangeCommand = 287,
    Duid_Steer_Cp2_OnChangeSteerMode = 288,
    Duid_Steer_Cp2_LeftSmall = 289,
    Duid_Steer_Cp2_MidZero = 290,
    Duid_Steer_Cp2_RightSmall = 291,
    Duid_Steer_Cp2_LeftBig = 292,
    Duid_Steer_Cp2_RightBig = 293,
    Duid_Steer_Cp2_EncoderNumber = 294,
} ioSystemDataType;
class ioSystemData
{
public:
    ioSystemData();
    virtual ~ioSystemData();
    static Int32 GetDataID(ioSystemDataType duid);
    static ioSystemDataType GetDataType(Int32 dataID);
};
#endif // __IOSYSTEMDATA_H
