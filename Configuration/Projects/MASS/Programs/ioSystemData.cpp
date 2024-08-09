// !!! This C++ file is generated by ioStudio !!!
#include "pch.h"
#pragma hdrstop
#include "ioSystemData.h"
ioSystemData::ioSystemData()
{
}
ioSystemData::~ioSystemData()
{
}
Int32 ioSystemData::GetDataID(ioSystemDataType duid)
{
    return (Int32)duid;
}
ioSystemDataType ioSystemData::GetDataType(Int32 duidValue)
{
    if ((duidValue >= 0) && (duidValue < 315))
        return (ioSystemDataType)duidValue;
    else
        return Duid_NotDefined;
}
