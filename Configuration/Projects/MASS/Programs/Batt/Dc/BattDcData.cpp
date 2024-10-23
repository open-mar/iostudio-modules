// !!! This C++ file is generated by ioStudio !!!
#include "pch.h"
#pragma hdrstop
#include "BattDcData.h"
TypeDcBatt::TypeDcBatt()
{
}
TypeDcBatt::~TypeDcBatt()
{
}
Bool TypeDcBatt::GetActiveText(ioString* enumText)
{
    if (enumText == NULL) return FALSE;
    Int32 activeID = GetValueSigned();
    switch (activeID)
    {
    case 0: enumText->Set((ioChars)"Dc12V"); return TRUE;
    case 1: enumText->Set((ioChars)"Dc24V"); return TRUE;
    default: enumText->Set((ioChars)"NotDefined");  return FALSE;
    } // switch
}
BattDcData::BattDcData()
{
}
BattDcData::~BattDcData()
{
}
void BattDcData::InitializeData(void)
{
    SetListData(m_ListData, 10);
    ResetItem();
    ResponseDcData.SetVariablesBuffer(m_ResponseDcDataVars, 3);
    ResponseDcData.AddVariable(&BattVolt);
    ResponseDcData.AddVariable(&BattAmpOut);
    ResponseDcData.AddVariable(&BattSoc);
}
