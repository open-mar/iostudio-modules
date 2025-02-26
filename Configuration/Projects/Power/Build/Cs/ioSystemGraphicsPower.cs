// !!! This C# file is generated by ioStudio !!!
using System;
namespace ioSystemNetworkNet
{
    public enum ioSystemGraphicsPowerType
    {
        Puid_NotDefined = 0,
        Puid_Ids_Consume_HeaderCommandPanelPow = 1,
        Puid_Ids_Consume_ShapeCommandStatusPow = 2,
        Puid_Ids_Consume_LabelPowerMode = 3,
        Puid_Ids_Consume_TextCommandStatusPow = 4,
        Puid_Ids_Consume_ButtTakeRequestPow = 5,
        Puid_Ids_Consume_ButtReleasePow = 6,
        Puid_Ids_Consume_GridChInd1 = 7,
        Puid_Ids_Consume_ShpOnOffInd1 = 8,
        Puid_Ids_Consume_LabelNameInd1 = 9,
        Puid_Ids_Consume_GridChInd2 = 10,
        Puid_Ids_Consume_ShpOnOffInd2 = 11,
        Puid_Ids_Consume_LabelNameInd2 = 12,
        Puid_Ids_Consume_GridChInd3 = 13,
        Puid_Ids_Consume_ShpOnOffInd3 = 14,
        Puid_Ids_Consume_LabelNameInd3 = 15,
        Puid_Ids_Consume_GridChInd4 = 16,
        Puid_Ids_Consume_ShpOnOffInd4 = 17,
        Puid_Ids_Consume_LabelNameInd4 = 18,
        Puid_Ids_Consume_GridChInd5 = 19,
        Puid_Ids_Consume_ShpOnOffInd5 = 20,
        Puid_Ids_Consume_LabelNameInd5 = 21,
        Puid_Ids_Consume_GridChInd6 = 22,
        Puid_Ids_Consume_ShpOnOffInd6 = 23,
        Puid_Ids_Consume_LabelNameInd6 = 24,
        Puid_Ids_Consume_GridChInd7 = 25,
        Puid_Ids_Consume_ShpOnOffInd7 = 26,
        Puid_Ids_Consume_LabelNameInd7 = 27,
        Puid_Ids_Consume_GridChInd8 = 28,
        Puid_Ids_Consume_ShpOnOffInd8 = 29,
        Puid_Ids_Consume_LabelNameInd8 = 30,
        Puid_Ids_Consume_ButtDockIdle = 31,
        Puid_Ids_Consume_ButtDockConnectedShore = 32,
        Puid_Ids_Consume_ButtDockNotConnected = 33,
        Puid_Ids_Consume_ButtInTransit = 34,
        Puid_Ids_Consume_ButtInTransitEngine = 35,
        Puid_Ids_Consume_ButtInTransitSailing = 36,
        Puid_Pow_CpA_ButtInTransit = 37,
        Puid_Pow_CpA_ButtInTransitEngine = 38,
        Puid_Pow_CpA_ButtInTransitSailing = 39,
        Puid_Ids_Consume_GridCh1 = 40,
        Puid_Ids_Consume_ButtOffCh1 = 41,
        Puid_Ids_Consume_ButtOnCh1 = 42,
        Puid_Ids_Consume_GridCh2 = 43,
        Puid_Ids_Consume_ButtOffCh2 = 44,
        Puid_Ids_Consume_ButtOnCh2 = 45,
        Puid_Ids_Consume_GridCh3 = 46,
        Puid_Ids_Consume_ButtOffCh3 = 47,
        Puid_Ids_Consume_ButtOnCh3 = 48,
        Puid_Ids_Consume_GridCh4 = 49,
        Puid_Ids_Consume_ButtOffCh4 = 50,
        Puid_Ids_Consume_ButtOnCh4 = 51,
        Puid_Ids_Consume_GridCh5 = 52,
        Puid_Ids_Consume_ButtOffCh5 = 53,
        Puid_Ids_Consume_ButtOnCh5 = 54,
        Puid_Ids_Consume_GridCh6 = 55,
        Puid_Ids_Consume_ButtOffCh6 = 56,
        Puid_Ids_Consume_ButtOnCh6 = 57,
        Puid_Ids_Consume_GridCh7 = 58,
        Puid_Ids_Consume_ButtOffCh7 = 59,
        Puid_Ids_Consume_ButtOnCh7 = 60,
        Puid_Ids_Consume_GridCh8 = 61,
        Puid_Ids_Consume_ButtOffCh8 = 62,
        Puid_Ids_Consume_ButtOnCh8 = 63,
        Puid_Ids_Consume_IndOutPwr = 64,
        Puid_Ids_Convert_InstrVoltOutputDc = 65,
        Puid_Ids_Convert_LabelHeaderChargeInput = 66,
        Puid_Ids_Convert_LabelHeaderChargeOutput = 67,
        Puid_Ids_Convert_InstrVoltInputAc = 68,
        Puid_Ids_Convert_InstVoltOutputDc = 69,
        Puid_Ids_Convert_LabelNameDcDcConv = 78,
        Puid_Ids_Convert_LabelHeaderDcDcInput = 70,
        Puid_Ids_Convert_LabelHeaderDcDcInputUnit = 79,
        Puid_Ids_Convert_InstrVoltInputDcDc = 72,
        Puid_Ids_Convert_LabelHeaderDcDcOutput = 71,
        Puid_Ids_Convert_LabelHeaderDcDcOutputUnit = 80,
        Puid_Ids_Convert_InstrVoltOutputDcDc = 73,
        Puid_Ids_Source_LabelHeaderVoltBattery = 74,
        Puid_Ids_Source_InstrVoltBattery = 75,
        Puid_Ids_Source_LabelHeaderCurrBattery = 76,
        Puid_Ids_Source_InstrCurrBattery = 77,
    } // enum
    public class ioSystemGraphicsPower
    {
        public static string GetGlobalID(ioSystemGraphicsPowerType puid)
        {
            switch (puid)
            {
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_HeaderCommandPanelPow: return "Ids.Consume.HeaderCommandPanelPow";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_ShapeCommandStatusPow: return "Ids.Consume.ShapeCommandStatusPow";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_LabelPowerMode: return "Ids.Consume.LabelPowerMode";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_TextCommandStatusPow: return "Ids.Consume.TextCommandStatusPow";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_ButtTakeRequestPow: return "Ids.Consume.ButtTakeRequestPow";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_ButtReleasePow: return "Ids.Consume.ButtReleasePow";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_GridChInd1: return "Ids.Consume.GridChInd1";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_ShpOnOffInd1: return "Ids.Consume.ShpOnOffInd1";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_LabelNameInd1: return "Ids.Consume.LabelNameInd1";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_GridChInd2: return "Ids.Consume.GridChInd2";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_ShpOnOffInd2: return "Ids.Consume.ShpOnOffInd2";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_LabelNameInd2: return "Ids.Consume.LabelNameInd2";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_GridChInd3: return "Ids.Consume.GridChInd3";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_ShpOnOffInd3: return "Ids.Consume.ShpOnOffInd3";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_LabelNameInd3: return "Ids.Consume.LabelNameInd3";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_GridChInd4: return "Ids.Consume.GridChInd4";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_ShpOnOffInd4: return "Ids.Consume.ShpOnOffInd4";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_LabelNameInd4: return "Ids.Consume.LabelNameInd4";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_GridChInd5: return "Ids.Consume.GridChInd5";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_ShpOnOffInd5: return "Ids.Consume.ShpOnOffInd5";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_LabelNameInd5: return "Ids.Consume.LabelNameInd5";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_GridChInd6: return "Ids.Consume.GridChInd6";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_ShpOnOffInd6: return "Ids.Consume.ShpOnOffInd6";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_LabelNameInd6: return "Ids.Consume.LabelNameInd6";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_GridChInd7: return "Ids.Consume.GridChInd7";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_ShpOnOffInd7: return "Ids.Consume.ShpOnOffInd7";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_LabelNameInd7: return "Ids.Consume.LabelNameInd7";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_GridChInd8: return "Ids.Consume.GridChInd8";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_ShpOnOffInd8: return "Ids.Consume.ShpOnOffInd8";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_LabelNameInd8: return "Ids.Consume.LabelNameInd8";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_ButtDockIdle: return "Ids.Consume.ButtDockIdle";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_ButtDockConnectedShore: return "Ids.Consume.ButtDockConnectedShore";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_ButtDockNotConnected: return "Ids.Consume.ButtDockNotConnected";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_ButtInTransit: return "Ids.Consume.ButtInTransit";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_ButtInTransitEngine: return "Ids.Consume.ButtInTransitEngine";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_ButtInTransitSailing: return "Ids.Consume.ButtInTransitSailing";
                case ioSystemGraphicsPowerType.Puid_Pow_CpA_ButtInTransit: return "Pow.CpA.ButtInTransit";
                case ioSystemGraphicsPowerType.Puid_Pow_CpA_ButtInTransitEngine: return "Pow.CpA.ButtInTransitEngine";
                case ioSystemGraphicsPowerType.Puid_Pow_CpA_ButtInTransitSailing: return "Pow.CpA.ButtInTransitSailing";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_GridCh1: return "Ids.Consume.GridCh1";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_ButtOffCh1: return "Ids.Consume.ButtOffCh1";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_ButtOnCh1: return "Ids.Consume.ButtOnCh1";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_GridCh2: return "Ids.Consume.GridCh2";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_ButtOffCh2: return "Ids.Consume.ButtOffCh2";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_ButtOnCh2: return "Ids.Consume.ButtOnCh2";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_GridCh3: return "Ids.Consume.GridCh3";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_ButtOffCh3: return "Ids.Consume.ButtOffCh3";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_ButtOnCh3: return "Ids.Consume.ButtOnCh3";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_GridCh4: return "Ids.Consume.GridCh4";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_ButtOffCh4: return "Ids.Consume.ButtOffCh4";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_ButtOnCh4: return "Ids.Consume.ButtOnCh4";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_GridCh5: return "Ids.Consume.GridCh5";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_ButtOffCh5: return "Ids.Consume.ButtOffCh5";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_ButtOnCh5: return "Ids.Consume.ButtOnCh5";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_GridCh6: return "Ids.Consume.GridCh6";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_ButtOffCh6: return "Ids.Consume.ButtOffCh6";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_ButtOnCh6: return "Ids.Consume.ButtOnCh6";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_GridCh7: return "Ids.Consume.GridCh7";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_ButtOffCh7: return "Ids.Consume.ButtOffCh7";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_ButtOnCh7: return "Ids.Consume.ButtOnCh7";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_GridCh8: return "Ids.Consume.GridCh8";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_ButtOffCh8: return "Ids.Consume.ButtOffCh8";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_ButtOnCh8: return "Ids.Consume.ButtOnCh8";
                case ioSystemGraphicsPowerType.Puid_Ids_Consume_IndOutPwr: return "Ids.Consume.IndOutPwr";
                case ioSystemGraphicsPowerType.Puid_Ids_Convert_InstrVoltOutputDc: return "Ids.Convert.InstrVoltOutputDc";
                case ioSystemGraphicsPowerType.Puid_Ids_Convert_LabelHeaderChargeInput: return "Ids.Convert.LabelHeaderChargeInput";
                case ioSystemGraphicsPowerType.Puid_Ids_Convert_LabelHeaderChargeOutput: return "Ids.Convert.LabelHeaderChargeOutput";
                case ioSystemGraphicsPowerType.Puid_Ids_Convert_InstrVoltInputAc: return "Ids.Convert.InstrVoltInputAc";
                case ioSystemGraphicsPowerType.Puid_Ids_Convert_InstVoltOutputDc: return "Ids.Convert.InstVoltOutputDc";
                case ioSystemGraphicsPowerType.Puid_Ids_Convert_LabelNameDcDcConv: return "Ids.Convert.LabelNameDcDcConv";
                case ioSystemGraphicsPowerType.Puid_Ids_Convert_LabelHeaderDcDcInput: return "Ids.Convert.LabelHeaderDcDcInput";
                case ioSystemGraphicsPowerType.Puid_Ids_Convert_LabelHeaderDcDcInputUnit: return "Ids.Convert.LabelHeaderDcDcInputUnit";
                case ioSystemGraphicsPowerType.Puid_Ids_Convert_InstrVoltInputDcDc: return "Ids.Convert.InstrVoltInputDcDc";
                case ioSystemGraphicsPowerType.Puid_Ids_Convert_LabelHeaderDcDcOutput: return "Ids.Convert.LabelHeaderDcDcOutput";
                case ioSystemGraphicsPowerType.Puid_Ids_Convert_LabelHeaderDcDcOutputUnit: return "Ids.Convert.LabelHeaderDcDcOutputUnit";
                case ioSystemGraphicsPowerType.Puid_Ids_Convert_InstrVoltOutputDcDc: return "Ids.Convert.InstrVoltOutputDcDc";
                case ioSystemGraphicsPowerType.Puid_Ids_Source_LabelHeaderVoltBattery: return "Ids.Source.LabelHeaderVoltBattery";
                case ioSystemGraphicsPowerType.Puid_Ids_Source_InstrVoltBattery: return "Ids.Source.InstrVoltBattery";
                case ioSystemGraphicsPowerType.Puid_Ids_Source_LabelHeaderCurrBattery: return "Ids.Source.LabelHeaderCurrBattery";
                case ioSystemGraphicsPowerType.Puid_Ids_Source_InstrCurrBattery: return "Ids.Source.InstrCurrBattery";
            } // switch
            return string.Empty;
        }
        public static ioSystemGraphicsPowerType GetPuid(string globalID)
        {
            switch (globalID)
            {
                case "Ids.Consume.HeaderCommandPanelPow": return ioSystemGraphicsPowerType.Puid_Ids_Consume_HeaderCommandPanelPow;
                case "Ids.Consume.ShapeCommandStatusPow": return ioSystemGraphicsPowerType.Puid_Ids_Consume_ShapeCommandStatusPow;
                case "Ids.Consume.LabelPowerMode": return ioSystemGraphicsPowerType.Puid_Ids_Consume_LabelPowerMode;
                case "Ids.Consume.TextCommandStatusPow": return ioSystemGraphicsPowerType.Puid_Ids_Consume_TextCommandStatusPow;
                case "Ids.Consume.ButtTakeRequestPow": return ioSystemGraphicsPowerType.Puid_Ids_Consume_ButtTakeRequestPow;
                case "Ids.Consume.ButtReleasePow": return ioSystemGraphicsPowerType.Puid_Ids_Consume_ButtReleasePow;
                case "Ids.Consume.GridChInd1": return ioSystemGraphicsPowerType.Puid_Ids_Consume_GridChInd1;
                case "Ids.Consume.ShpOnOffInd1": return ioSystemGraphicsPowerType.Puid_Ids_Consume_ShpOnOffInd1;
                case "Ids.Consume.LabelNameInd1": return ioSystemGraphicsPowerType.Puid_Ids_Consume_LabelNameInd1;
                case "Ids.Consume.GridChInd2": return ioSystemGraphicsPowerType.Puid_Ids_Consume_GridChInd2;
                case "Ids.Consume.ShpOnOffInd2": return ioSystemGraphicsPowerType.Puid_Ids_Consume_ShpOnOffInd2;
                case "Ids.Consume.LabelNameInd2": return ioSystemGraphicsPowerType.Puid_Ids_Consume_LabelNameInd2;
                case "Ids.Consume.GridChInd3": return ioSystemGraphicsPowerType.Puid_Ids_Consume_GridChInd3;
                case "Ids.Consume.ShpOnOffInd3": return ioSystemGraphicsPowerType.Puid_Ids_Consume_ShpOnOffInd3;
                case "Ids.Consume.LabelNameInd3": return ioSystemGraphicsPowerType.Puid_Ids_Consume_LabelNameInd3;
                case "Ids.Consume.GridChInd4": return ioSystemGraphicsPowerType.Puid_Ids_Consume_GridChInd4;
                case "Ids.Consume.ShpOnOffInd4": return ioSystemGraphicsPowerType.Puid_Ids_Consume_ShpOnOffInd4;
                case "Ids.Consume.LabelNameInd4": return ioSystemGraphicsPowerType.Puid_Ids_Consume_LabelNameInd4;
                case "Ids.Consume.GridChInd5": return ioSystemGraphicsPowerType.Puid_Ids_Consume_GridChInd5;
                case "Ids.Consume.ShpOnOffInd5": return ioSystemGraphicsPowerType.Puid_Ids_Consume_ShpOnOffInd5;
                case "Ids.Consume.LabelNameInd5": return ioSystemGraphicsPowerType.Puid_Ids_Consume_LabelNameInd5;
                case "Ids.Consume.GridChInd6": return ioSystemGraphicsPowerType.Puid_Ids_Consume_GridChInd6;
                case "Ids.Consume.ShpOnOffInd6": return ioSystemGraphicsPowerType.Puid_Ids_Consume_ShpOnOffInd6;
                case "Ids.Consume.LabelNameInd6": return ioSystemGraphicsPowerType.Puid_Ids_Consume_LabelNameInd6;
                case "Ids.Consume.GridChInd7": return ioSystemGraphicsPowerType.Puid_Ids_Consume_GridChInd7;
                case "Ids.Consume.ShpOnOffInd7": return ioSystemGraphicsPowerType.Puid_Ids_Consume_ShpOnOffInd7;
                case "Ids.Consume.LabelNameInd7": return ioSystemGraphicsPowerType.Puid_Ids_Consume_LabelNameInd7;
                case "Ids.Consume.GridChInd8": return ioSystemGraphicsPowerType.Puid_Ids_Consume_GridChInd8;
                case "Ids.Consume.ShpOnOffInd8": return ioSystemGraphicsPowerType.Puid_Ids_Consume_ShpOnOffInd8;
                case "Ids.Consume.LabelNameInd8": return ioSystemGraphicsPowerType.Puid_Ids_Consume_LabelNameInd8;
                case "Ids.Consume.ButtDockIdle": return ioSystemGraphicsPowerType.Puid_Ids_Consume_ButtDockIdle;
                case "Ids.Consume.ButtDockConnectedShore": return ioSystemGraphicsPowerType.Puid_Ids_Consume_ButtDockConnectedShore;
                case "Ids.Consume.ButtDockNotConnected": return ioSystemGraphicsPowerType.Puid_Ids_Consume_ButtDockNotConnected;
                case "Ids.Consume.ButtInTransit": return ioSystemGraphicsPowerType.Puid_Ids_Consume_ButtInTransit;
                case "Ids.Consume.ButtInTransitEngine": return ioSystemGraphicsPowerType.Puid_Ids_Consume_ButtInTransitEngine;
                case "Ids.Consume.ButtInTransitSailing": return ioSystemGraphicsPowerType.Puid_Ids_Consume_ButtInTransitSailing;
                case "Pow.CpA.ButtInTransit": return ioSystemGraphicsPowerType.Puid_Pow_CpA_ButtInTransit;
                case "Pow.CpA.ButtInTransitEngine": return ioSystemGraphicsPowerType.Puid_Pow_CpA_ButtInTransitEngine;
                case "Pow.CpA.ButtInTransitSailing": return ioSystemGraphicsPowerType.Puid_Pow_CpA_ButtInTransitSailing;
                case "Ids.Consume.GridCh1": return ioSystemGraphicsPowerType.Puid_Ids_Consume_GridCh1;
                case "Ids.Consume.ButtOffCh1": return ioSystemGraphicsPowerType.Puid_Ids_Consume_ButtOffCh1;
                case "Ids.Consume.ButtOnCh1": return ioSystemGraphicsPowerType.Puid_Ids_Consume_ButtOnCh1;
                case "Ids.Consume.GridCh2": return ioSystemGraphicsPowerType.Puid_Ids_Consume_GridCh2;
                case "Ids.Consume.ButtOffCh2": return ioSystemGraphicsPowerType.Puid_Ids_Consume_ButtOffCh2;
                case "Ids.Consume.ButtOnCh2": return ioSystemGraphicsPowerType.Puid_Ids_Consume_ButtOnCh2;
                case "Ids.Consume.GridCh3": return ioSystemGraphicsPowerType.Puid_Ids_Consume_GridCh3;
                case "Ids.Consume.ButtOffCh3": return ioSystemGraphicsPowerType.Puid_Ids_Consume_ButtOffCh3;
                case "Ids.Consume.ButtOnCh3": return ioSystemGraphicsPowerType.Puid_Ids_Consume_ButtOnCh3;
                case "Ids.Consume.GridCh4": return ioSystemGraphicsPowerType.Puid_Ids_Consume_GridCh4;
                case "Ids.Consume.ButtOffCh4": return ioSystemGraphicsPowerType.Puid_Ids_Consume_ButtOffCh4;
                case "Ids.Consume.ButtOnCh4": return ioSystemGraphicsPowerType.Puid_Ids_Consume_ButtOnCh4;
                case "Ids.Consume.GridCh5": return ioSystemGraphicsPowerType.Puid_Ids_Consume_GridCh5;
                case "Ids.Consume.ButtOffCh5": return ioSystemGraphicsPowerType.Puid_Ids_Consume_ButtOffCh5;
                case "Ids.Consume.ButtOnCh5": return ioSystemGraphicsPowerType.Puid_Ids_Consume_ButtOnCh5;
                case "Ids.Consume.GridCh6": return ioSystemGraphicsPowerType.Puid_Ids_Consume_GridCh6;
                case "Ids.Consume.ButtOffCh6": return ioSystemGraphicsPowerType.Puid_Ids_Consume_ButtOffCh6;
                case "Ids.Consume.ButtOnCh6": return ioSystemGraphicsPowerType.Puid_Ids_Consume_ButtOnCh6;
                case "Ids.Consume.GridCh7": return ioSystemGraphicsPowerType.Puid_Ids_Consume_GridCh7;
                case "Ids.Consume.ButtOffCh7": return ioSystemGraphicsPowerType.Puid_Ids_Consume_ButtOffCh7;
                case "Ids.Consume.ButtOnCh7": return ioSystemGraphicsPowerType.Puid_Ids_Consume_ButtOnCh7;
                case "Ids.Consume.GridCh8": return ioSystemGraphicsPowerType.Puid_Ids_Consume_GridCh8;
                case "Ids.Consume.ButtOffCh8": return ioSystemGraphicsPowerType.Puid_Ids_Consume_ButtOffCh8;
                case "Ids.Consume.ButtOnCh8": return ioSystemGraphicsPowerType.Puid_Ids_Consume_ButtOnCh8;
                case "Ids.Consume.IndOutPwr": return ioSystemGraphicsPowerType.Puid_Ids_Consume_IndOutPwr;
                case "Ids.Convert.InstrVoltOutputDc": return ioSystemGraphicsPowerType.Puid_Ids_Convert_InstrVoltOutputDc;
                case "Ids.Convert.LabelHeaderChargeInput": return ioSystemGraphicsPowerType.Puid_Ids_Convert_LabelHeaderChargeInput;
                case "Ids.Convert.LabelHeaderChargeOutput": return ioSystemGraphicsPowerType.Puid_Ids_Convert_LabelHeaderChargeOutput;
                case "Ids.Convert.InstrVoltInputAc": return ioSystemGraphicsPowerType.Puid_Ids_Convert_InstrVoltInputAc;
                case "Ids.Convert.InstVoltOutputDc": return ioSystemGraphicsPowerType.Puid_Ids_Convert_InstVoltOutputDc;
                case "Ids.Convert.LabelNameDcDcConv": return ioSystemGraphicsPowerType.Puid_Ids_Convert_LabelNameDcDcConv;
                case "Ids.Convert.LabelHeaderDcDcInput": return ioSystemGraphicsPowerType.Puid_Ids_Convert_LabelHeaderDcDcInput;
                case "Ids.Convert.LabelHeaderDcDcInputUnit": return ioSystemGraphicsPowerType.Puid_Ids_Convert_LabelHeaderDcDcInputUnit;
                case "Ids.Convert.InstrVoltInputDcDc": return ioSystemGraphicsPowerType.Puid_Ids_Convert_InstrVoltInputDcDc;
                case "Ids.Convert.LabelHeaderDcDcOutput": return ioSystemGraphicsPowerType.Puid_Ids_Convert_LabelHeaderDcDcOutput;
                case "Ids.Convert.LabelHeaderDcDcOutputUnit": return ioSystemGraphicsPowerType.Puid_Ids_Convert_LabelHeaderDcDcOutputUnit;
                case "Ids.Convert.InstrVoltOutputDcDc": return ioSystemGraphicsPowerType.Puid_Ids_Convert_InstrVoltOutputDcDc;
                case "Ids.Source.LabelHeaderVoltBattery": return ioSystemGraphicsPowerType.Puid_Ids_Source_LabelHeaderVoltBattery;
                case "Ids.Source.InstrVoltBattery": return ioSystemGraphicsPowerType.Puid_Ids_Source_InstrVoltBattery;
                case "Ids.Source.LabelHeaderCurrBattery": return ioSystemGraphicsPowerType.Puid_Ids_Source_LabelHeaderCurrBattery;
                case "Ids.Source.InstrCurrBattery": return ioSystemGraphicsPowerType.Puid_Ids_Source_InstrCurrBattery;
            } // switch
            return ioSystemGraphicsPowerType.Puid_NotDefined;
        }
        public static ioSystemGraphicsPowerType GetPuid(Int32 puidValue)
        {
            if ((puidValue >= 0) && (puidValue < 81))
                return (ioSystemGraphicsPowerType)puidValue;
            else
                return ioSystemGraphicsPowerType.Puid_NotDefined;
        }
    } // class
} // namespace
