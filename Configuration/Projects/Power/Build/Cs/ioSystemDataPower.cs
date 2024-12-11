// !!! This C# file is generated by ioStudio !!!
using System;
namespace ioSystemNetworkNet
{
    public enum ioSystemDataPowerType
    {
        Duid_NotDefined = 0,
        Duid_Ids_Consume_IsOutputOn = 32,
        Duid_Ids_Consume_PowerConsumer = 33,
        Duid_Ids_Convert_VoltageInputAc = 20,
        Duid_Ids_Convert_IsChargingActive = 22,
        Duid_Ids_Convert_CurrentOutputDc = 3,
        Duid_Ids_Convert_VoltageOutputDc = 4,
        Duid_Ids_Convert_CurrentInputAc = 7,
        Duid_Ids_Convert_MaxOutCurrentDc = 23,
        Duid_Ids_Convert_VoltageInputDcDc = 24,
        Duid_Ids_Convert_VoltageOutputDcDc = 25,
        Duid_Ids_Convert_IsDcDcOutputActive = 26,
        Duid_Ids_Convert_MaxOutCurrentDcDc = 27,
        Duid_Ids_Convert_CurrentInputDcDc = 5,
        Duid_Ids_Convert_CurrentOutputDcDc = 6,
        Duid_Ids_Isolate_MaxFuseCurrent = 37,
        Duid_Ids_Isolate_IsFuseBlown = 35,
        Duid_Ids_Isolate_ResetFuse = 38,
        Duid_Ids_Source_VoltageBattery = 21,
        Duid_Ids_Source_CurrentBattery = 31,
        Duid_Ids_Source_StatusOfCharge = 34,
        Duid_Ids_Source_BatteryChargeResistance = 36,
        Duid_Ids_Source_BatteryEnergy = 39,
        Duid_Ids_Source_VoltOutputGenerator = 28,
        Duid_Ids_Source_IsGeneratorOutputActive = 30,
        Duid_Ids_Source_MaxOutCurrentGenerator = 29,
        Duid_Ids_Source_CurrentGenerator = 8,
        Duid_Victron_RequestVictronData = 1,
        Duid_Victron_ResponseVictronData = 2,
        Duid_Victron_Io_RequestDataCgx = 9,
        Duid_Victron_Io_ResponseDataCgx = 10,
        Duid_Victron_Io_Dc0Voltage = 11,
        Duid_Victron_Io_Dc0MidVoltage = 12,
        Duid_Victron_Io_Dc0MidVoltageDeviation = 13,
        Duid_Victron_Io_Dc0Current = 14,
        Duid_Victron_Io_Dc0Power = 15,
        Duid_Victron_Io_Dc1Voltage = 16,
        Duid_Victron_Io_Soc = 17,
        Duid_Victron_Io_ConsumedAmphours = 18,
        Duid_Victron_Io_Dc0Temperature = 19,
    } // enum
    public class ioSystemDataPower
    {
        public static string GetGlobalID(ioSystemDataPowerType duid)
        {
            switch (duid)
            {
                case ioSystemDataPowerType.Duid_Ids_Consume_IsOutputOn: return "Ids.Consume.IsOutputOn";
                case ioSystemDataPowerType.Duid_Ids_Consume_PowerConsumer: return "Ids.Consume.PowerConsumer";
                case ioSystemDataPowerType.Duid_Ids_Convert_VoltageInputAc: return "Ids.Convert.VoltageInputAc";
                case ioSystemDataPowerType.Duid_Ids_Convert_IsChargingActive: return "Ids.Convert.IsChargingActive";
                case ioSystemDataPowerType.Duid_Ids_Convert_CurrentOutputDc: return "Ids.Convert.CurrentOutputDc";
                case ioSystemDataPowerType.Duid_Ids_Convert_VoltageOutputDc: return "Ids.Convert.VoltageOutputDc";
                case ioSystemDataPowerType.Duid_Ids_Convert_CurrentInputAc: return "Ids.Convert.CurrentInputAc";
                case ioSystemDataPowerType.Duid_Ids_Convert_MaxOutCurrentDc: return "Ids.Convert.MaxOutCurrentDc";
                case ioSystemDataPowerType.Duid_Ids_Convert_VoltageInputDcDc: return "Ids.Convert.VoltageInputDcDc";
                case ioSystemDataPowerType.Duid_Ids_Convert_VoltageOutputDcDc: return "Ids.Convert.VoltageOutputDcDc";
                case ioSystemDataPowerType.Duid_Ids_Convert_IsDcDcOutputActive: return "Ids.Convert.IsDcDcOutputActive";
                case ioSystemDataPowerType.Duid_Ids_Convert_MaxOutCurrentDcDc: return "Ids.Convert.MaxOutCurrentDcDc";
                case ioSystemDataPowerType.Duid_Ids_Convert_CurrentInputDcDc: return "Ids.Convert.CurrentInputDcDc";
                case ioSystemDataPowerType.Duid_Ids_Convert_CurrentOutputDcDc: return "Ids.Convert.CurrentOutputDcDc";
                case ioSystemDataPowerType.Duid_Ids_Isolate_MaxFuseCurrent: return "Ids.Isolate.MaxFuseCurrent";
                case ioSystemDataPowerType.Duid_Ids_Isolate_IsFuseBlown: return "Ids.Isolate.IsFuseBlown";
                case ioSystemDataPowerType.Duid_Ids_Isolate_ResetFuse: return "Ids.Isolate.ResetFuse";
                case ioSystemDataPowerType.Duid_Ids_Source_VoltageBattery: return "Ids.Source.VoltageBattery";
                case ioSystemDataPowerType.Duid_Ids_Source_CurrentBattery: return "Ids.Source.CurrentBattery";
                case ioSystemDataPowerType.Duid_Ids_Source_StatusOfCharge: return "Ids.Source.StatusOfCharge";
                case ioSystemDataPowerType.Duid_Ids_Source_BatteryChargeResistance: return "Ids.Source.BatteryChargeResistance";
                case ioSystemDataPowerType.Duid_Ids_Source_BatteryEnergy: return "Ids.Source.BatteryEnergy";
                case ioSystemDataPowerType.Duid_Ids_Source_VoltOutputGenerator: return "Ids.Source.VoltOutputGenerator";
                case ioSystemDataPowerType.Duid_Ids_Source_IsGeneratorOutputActive: return "Ids.Source.IsGeneratorOutputActive";
                case ioSystemDataPowerType.Duid_Ids_Source_MaxOutCurrentGenerator: return "Ids.Source.MaxOutCurrentGenerator";
                case ioSystemDataPowerType.Duid_Ids_Source_CurrentGenerator: return "Ids.Source.CurrentGenerator";
                case ioSystemDataPowerType.Duid_Victron_RequestVictronData: return "Victron.RequestVictronData";
                case ioSystemDataPowerType.Duid_Victron_ResponseVictronData: return "Victron.ResponseVictronData";
                case ioSystemDataPowerType.Duid_Victron_Io_RequestDataCgx: return "Victron.Io.RequestDataCgx";
                case ioSystemDataPowerType.Duid_Victron_Io_ResponseDataCgx: return "Victron.Io.ResponseDataCgx";
                case ioSystemDataPowerType.Duid_Victron_Io_Dc0Voltage: return "Victron.Io.Dc0Voltage";
                case ioSystemDataPowerType.Duid_Victron_Io_Dc0MidVoltage: return "Victron.Io.Dc0MidVoltage";
                case ioSystemDataPowerType.Duid_Victron_Io_Dc0MidVoltageDeviation: return "Victron.Io.Dc0MidVoltageDeviation";
                case ioSystemDataPowerType.Duid_Victron_Io_Dc0Current: return "Victron.Io.Dc0Current";
                case ioSystemDataPowerType.Duid_Victron_Io_Dc0Power: return "Victron.Io.Dc0Power";
                case ioSystemDataPowerType.Duid_Victron_Io_Dc1Voltage: return "Victron.Io.Dc1Voltage";
                case ioSystemDataPowerType.Duid_Victron_Io_Soc: return "Victron.Io.Soc";
                case ioSystemDataPowerType.Duid_Victron_Io_ConsumedAmphours: return "Victron.Io.ConsumedAmphours";
                case ioSystemDataPowerType.Duid_Victron_Io_Dc0Temperature: return "Victron.Io.Dc0Temperature";
            } // switch
            return string.Empty;
        }
        public static ioSystemDataPowerType GetDuid(string globalID)
        {
            switch (globalID)
            {
                case "Ids.Consume.IsOutputOn": return ioSystemDataPowerType.Duid_Ids_Consume_IsOutputOn;
                case "Ids.Consume.PowerConsumer": return ioSystemDataPowerType.Duid_Ids_Consume_PowerConsumer;
                case "Ids.Convert.VoltageInputAc": return ioSystemDataPowerType.Duid_Ids_Convert_VoltageInputAc;
                case "Ids.Convert.IsChargingActive": return ioSystemDataPowerType.Duid_Ids_Convert_IsChargingActive;
                case "Ids.Convert.CurrentOutputDc": return ioSystemDataPowerType.Duid_Ids_Convert_CurrentOutputDc;
                case "Ids.Convert.VoltageOutputDc": return ioSystemDataPowerType.Duid_Ids_Convert_VoltageOutputDc;
                case "Ids.Convert.CurrentInputAc": return ioSystemDataPowerType.Duid_Ids_Convert_CurrentInputAc;
                case "Ids.Convert.MaxOutCurrentDc": return ioSystemDataPowerType.Duid_Ids_Convert_MaxOutCurrentDc;
                case "Ids.Convert.VoltageInputDcDc": return ioSystemDataPowerType.Duid_Ids_Convert_VoltageInputDcDc;
                case "Ids.Convert.VoltageOutputDcDc": return ioSystemDataPowerType.Duid_Ids_Convert_VoltageOutputDcDc;
                case "Ids.Convert.IsDcDcOutputActive": return ioSystemDataPowerType.Duid_Ids_Convert_IsDcDcOutputActive;
                case "Ids.Convert.MaxOutCurrentDcDc": return ioSystemDataPowerType.Duid_Ids_Convert_MaxOutCurrentDcDc;
                case "Ids.Convert.CurrentInputDcDc": return ioSystemDataPowerType.Duid_Ids_Convert_CurrentInputDcDc;
                case "Ids.Convert.CurrentOutputDcDc": return ioSystemDataPowerType.Duid_Ids_Convert_CurrentOutputDcDc;
                case "Ids.Isolate.MaxFuseCurrent": return ioSystemDataPowerType.Duid_Ids_Isolate_MaxFuseCurrent;
                case "Ids.Isolate.IsFuseBlown": return ioSystemDataPowerType.Duid_Ids_Isolate_IsFuseBlown;
                case "Ids.Isolate.ResetFuse": return ioSystemDataPowerType.Duid_Ids_Isolate_ResetFuse;
                case "Ids.Source.VoltageBattery": return ioSystemDataPowerType.Duid_Ids_Source_VoltageBattery;
                case "Ids.Source.CurrentBattery": return ioSystemDataPowerType.Duid_Ids_Source_CurrentBattery;
                case "Ids.Source.StatusOfCharge": return ioSystemDataPowerType.Duid_Ids_Source_StatusOfCharge;
                case "Ids.Source.BatteryChargeResistance": return ioSystemDataPowerType.Duid_Ids_Source_BatteryChargeResistance;
                case "Ids.Source.BatteryEnergy": return ioSystemDataPowerType.Duid_Ids_Source_BatteryEnergy;
                case "Ids.Source.VoltOutputGenerator": return ioSystemDataPowerType.Duid_Ids_Source_VoltOutputGenerator;
                case "Ids.Source.IsGeneratorOutputActive": return ioSystemDataPowerType.Duid_Ids_Source_IsGeneratorOutputActive;
                case "Ids.Source.MaxOutCurrentGenerator": return ioSystemDataPowerType.Duid_Ids_Source_MaxOutCurrentGenerator;
                case "Ids.Source.CurrentGenerator": return ioSystemDataPowerType.Duid_Ids_Source_CurrentGenerator;
                case "Victron.RequestVictronData": return ioSystemDataPowerType.Duid_Victron_RequestVictronData;
                case "Victron.ResponseVictronData": return ioSystemDataPowerType.Duid_Victron_ResponseVictronData;
                case "Victron.Io.RequestDataCgx": return ioSystemDataPowerType.Duid_Victron_Io_RequestDataCgx;
                case "Victron.Io.ResponseDataCgx": return ioSystemDataPowerType.Duid_Victron_Io_ResponseDataCgx;
                case "Victron.Io.Dc0Voltage": return ioSystemDataPowerType.Duid_Victron_Io_Dc0Voltage;
                case "Victron.Io.Dc0MidVoltage": return ioSystemDataPowerType.Duid_Victron_Io_Dc0MidVoltage;
                case "Victron.Io.Dc0MidVoltageDeviation": return ioSystemDataPowerType.Duid_Victron_Io_Dc0MidVoltageDeviation;
                case "Victron.Io.Dc0Current": return ioSystemDataPowerType.Duid_Victron_Io_Dc0Current;
                case "Victron.Io.Dc0Power": return ioSystemDataPowerType.Duid_Victron_Io_Dc0Power;
                case "Victron.Io.Dc1Voltage": return ioSystemDataPowerType.Duid_Victron_Io_Dc1Voltage;
                case "Victron.Io.Soc": return ioSystemDataPowerType.Duid_Victron_Io_Soc;
                case "Victron.Io.ConsumedAmphours": return ioSystemDataPowerType.Duid_Victron_Io_ConsumedAmphours;
                case "Victron.Io.Dc0Temperature": return ioSystemDataPowerType.Duid_Victron_Io_Dc0Temperature;
            } // switch
            return ioSystemDataPowerType.Duid_NotDefined;
        }
    } // class
} // namespace
