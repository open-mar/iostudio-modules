// !!! This C++ file is generated by ioStudio !!!
#include "pch.h"
#pragma hdrstop
#include "ConsumerData.h"
ConsumerData::ConsumerData()
{
    InitializeData();
}
ConsumerData::~ConsumerData()
{
}
void ConsumerData::InitializeData(void)
{
    SetListData(m_ListData, 1);
    ResetItem();
    IsOutputOn.SetValue(FALSE);
    AddData((ioData*)&IsOutputOn, Duid_Ids_Consume_IsOutputOn);
}
