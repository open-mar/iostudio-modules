// !!! This C++ file is generated by ioStudio !!!
#include "pch.h"
#pragma hdrstop
#include "DataDcDc.h"
DataDcDc::DataDcDc()
{
    InitializeData();
}
DataDcDc::~DataDcDc()
{
}
void DataDcDc::InitializeData(void)
{
    SetListData(m_ListData, 3);
    ResetItem();
    VoltInput.SetValue((Float)12);
    AddData((ioData*)&VoltInput, Duid_Victron_DcDc_VoltInput);
    VoltOutput.SetValue((Float)24);
    AddData((ioData*)&VoltOutput, Duid_Victron_DcDc_VoltOutput);
    IsOutputActive.SetValue(TRUE);
    AddData((ioData*)&IsOutputActive, Duid_Victron_DcDc_IsOutputActive);
}
