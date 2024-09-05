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
void PowProgControl::ReceiveData(ioDataCollection* listData, ioData* data)
{
    ioVarInt32 in1_Int32;
    if (listData == NULL) {}
    if (data == NULL) {}
    else if (data == &DataCpCpA.TakeCommandPow)
    {
        in1_Int32.SetValue(1);
        OnRecvTakeCommandPow(&in1_Int32);
        SendData(&DataCpCpA.OnChangeCommandPow, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Ids_OpA_13);
        SendData(&DataCpCpM.OnChangeCommandPow, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Ids_OpM_12);
    }
    else if (data == &DataCpCpM.TakeCommandPow)
    {
        in1_Int32.SetValue(0);
        OnRecvTakeCommandPow(&in1_Int32);
        SendData(&DataCpCpA.OnChangeCommandPow, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Ids_OpA_13);
        SendData(&DataCpCpM.OnChangeCommandPow, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Ids_OpM_12);
    }
}
void PowProgControl::OnRecvTakeCommandPow(ioVarInt32* sender)
{
    if (sender == NULL) {};
}
