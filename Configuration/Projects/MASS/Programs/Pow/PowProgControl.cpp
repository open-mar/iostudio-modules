// !!! This C++ file is generated by ioStudio !!!
#include "pch.h"
#pragma hdrstop
#include "PowProgControl.h"
#include "Programs/ioSystemGraphics.h"
#include "Programs/ioSystemPorts.h"
PowProgControl::PowProgControl()
{
}
PowProgControl::~PowProgControl()
{
}
void PowProgControl::InitializeTask(void)
{
    ioProgram::InitializeTask();
}
void PowProgControl::Run(Int32 activeSlot)
{
    if (activeSlot == 0) {}
}
void PowProgControl::ReceiveData(ioDataCollection* listData, ioData* data)
{
    ioVarInt32 in1_Int32;
    ioVarInt32 in2_Int32;
    if (listData == NULL) {}
    if (data == NULL) {}
    else
    {
        ioSystemDataType duid = ioSystemData::GetDataType(data->GetDataID());
        switch (duid)
        {
        case Duid_Pow_CpA_TakeCommandPow:
            in1_Int32.SetValue(1);
            OnRecvTakeCommandPow(&in1_Int32);
            SendData(&DataCpCpA.OnChangeCommandPow, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Ids_OpA_13);
            SendData(&DataCpCpM.OnChangeCommandPow, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Ids_OpM_12);
            break;
        case Duid_Pow_CpM_TakeCommandPow:
            in1_Int32.SetValue(0);
            OnRecvTakeCommandPow(&in1_Int32);
            SendData(&DataCpCpA.OnChangeCommandPow, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Ids_OpA_13);
            SendData(&DataCpCpM.OnChangeCommandPow, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Ids_OpM_12);
            break;
        case Duid_Pow_CpM_PowModeIdle:
            in1_Int32.SetValue(0);
            in2_Int32.SetValue(0);
            OnRecvPowMode(&in1_Int32, &in2_Int32);
            SendData(&DataCpCpM.OnChangePowMode, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Ids_OpM_12);
            SendData(&DataCpCpA.OnChangePowMode, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Ids_OpA_13);
            break;
        case Duid_Pow_CpM_PowModeDisconnect:
            in1_Int32.SetValue(0);
            in2_Int32.SetValue(2);
            OnRecvPowMode(&in1_Int32, &in2_Int32);
            SendData(&DataCpCpM.OnChangePowMode, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Ids_OpM_12);
            SendData(&DataCpCpA.OnChangePowMode, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Ids_OpA_13);
            break;
        case Duid_Pow_CpM_PowModeShore:
            in1_Int32.SetValue(0);
            in2_Int32.SetValue(1);
            OnRecvPowMode(&in1_Int32, &in2_Int32);
            SendData(&DataCpCpM.OnChangePowMode, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Ids_OpM_12);
            SendData(&DataCpCpA.OnChangePowMode, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Ids_OpA_13);
            break;
        case Duid_Pow_CpM_PowModeTransitDay:
            in1_Int32.SetValue(0);
            in2_Int32.SetValue(3);
            OnRecvPowMode(&in1_Int32, &in2_Int32);
            SendData(&DataCpCpM.OnChangePowMode, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Ids_OpM_12);
            SendData(&DataCpCpA.OnChangePowMode, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Ids_OpA_13);
            break;
        case Duid_Pow_CpM_PowModeTransitNightEngine:
            in1_Int32.SetValue(0);
            in2_Int32.SetValue(4);
            OnRecvPowMode(&in1_Int32, &in2_Int32);
            SendData(&DataCpCpM.OnChangePowMode, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Ids_OpM_12);
            SendData(&DataCpCpA.OnChangePowMode, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Ids_OpA_13);
            break;
        case Duid_Pow_CpM_PowModeTransitNightSail:
            in1_Int32.SetValue(0);
            in2_Int32.SetValue(5);
            OnRecvPowMode(&in1_Int32, &in2_Int32);
            SendData(&DataCpCpM.OnChangePowMode, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Ids_OpM_12);
            SendData(&DataCpCpA.OnChangePowMode, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Ids_OpA_13);
            break;
        case Duid_Pow_CpA_PowModeTransitDay:
            in1_Int32.SetValue(1);
            in2_Int32.SetValue(3);
            OnRecvPowMode(&in1_Int32, &in2_Int32);
            SendData(&DataCpCpM.OnChangePowMode, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Ids_OpM_12);
            SendData(&DataCpCpA.OnChangePowMode, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Ids_OpA_13);
            break;
        case Duid_Pow_CpA_PowModeTransitNightEngine:
            in1_Int32.SetValue(1);
            in2_Int32.SetValue(4);
            OnRecvPowMode(&in1_Int32, &in2_Int32);
            SendData(&DataCpCpM.OnChangePowMode, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Ids_OpM_12);
            SendData(&DataCpCpA.OnChangePowMode, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Ids_OpA_13);
            break;
        case Duid_Pow_CpA_PowModeTransitNightSail:
            in1_Int32.SetValue(1);
            in2_Int32.SetValue(5);
            OnRecvPowMode(&in1_Int32, &in2_Int32);
            SendData(&DataCpCpM.OnChangePowMode, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Ids_OpM_12);
            SendData(&DataCpCpA.OnChangePowMode, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Ids_OpA_13);
            break;
        } // switch
    } // else
}
void PowProgControl::OnRecvTakeCommandPow(ioVarInt32* sender)
{
    if (sender == NULL) {};
}
void PowProgControl::OnRecvPowMode(ioVarInt32* sender, ioVarInt32* mode)
{
    if (sender == NULL) {};
    if (mode == NULL) {};
}
