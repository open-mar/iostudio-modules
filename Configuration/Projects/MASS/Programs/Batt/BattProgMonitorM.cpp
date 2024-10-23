// !!! This C++ file is generated by ioStudio !!!
#include "pch.h"
#pragma hdrstop
#include "BattProgMonitorM.h"
#include "Programs/ioSystemGraphics.h"
#include "Programs/ioSystemPorts.h"
BattProgMonitorM::BattProgMonitorM()
{
}
BattProgMonitorM::~BattProgMonitorM()
{
}
void BattProgMonitorM::InitializeTask(void)
{
    ioProgram::InitializeTask();
    AddPanel((ioPanel*)&DcPanelDc12);
    AddPanel((ioPanel*)&DcPanelDc24);
    AddPanel((ioPanel*)&StatusPanel);
    AddPanel((ioPanel*)&ChargePanel);
}
void BattProgMonitorM::Run(Int32 activeSlot)
{
    if (activeSlot == 0) {}
}
void BattProgMonitorM::ReceiveData(ioDataCollection* listData, ioData* data)
{
    if (listData == NULL) {}
    if (data == NULL) {}
    else
    {
        ioSystemDataType duid = ioSystemData::GetDataType(data->GetDataID());
        switch (duid)
        {
        case Duid_Batt_Dc12_ResponseDcData:
            DcPanelDc12.InstrVolt.SetValueVar(&DcDataDc12.BattVolt);
            DcPanelDc12.InstrAmpAvg.SetValueVar(&DcDataDc12.BattAmpOut);
            DcPanelDc12.InstrSoc.SetValueVar(&DcDataDc12.BattSoc);
            break;
        case Duid_Batt_Dc24_ResponseDcData:
            DcPanelDc24.InstrVolt.SetValueVar(&DcDataDc24.BattVolt);
            DcPanelDc24.InstrAmpAvg.SetValueVar(&DcDataDc24.BattAmpOut);
            DcPanelDc24.InstrSoc.SetValueVar(&DcDataDc24.BattSoc);
            break;
        case Duid_Batt_ResponseBattData:
            StatusPanel.InstrSoc.SetValueVar(&MainData.StatusOfCharge);
            ChargePanel.InstrChargeInputVolt.SetValueVar(&MainData.ChargeInputVolt);
            break;
        } // switch
    } // else
}
