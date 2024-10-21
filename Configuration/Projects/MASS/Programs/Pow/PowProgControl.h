// !!! This C++ file is generated by ioStudio !!!
#if !defined(__POWPROGCONTROL_H)
#define __POWPROGCONTROL_H
#include "ioSystem/Program/Core/ioProgram.h"
#include "Programs/Pow/Out/PowOutDataOut24M.h"
#include "Programs/Pow/Out/PowOutDataOut24F.h"
#include "Programs/Pow/Out/PowOutDataOut24A.h"
#include "Programs/Pow/Out/PowOutDataOut220M.h"
#include "Programs/Pow/Out/PowOutDataOut220F.h"
#include "Programs/Pow/Out/PowOutDataOut220A.h"
#include "Programs/Pow/Cp/PowCpDataCpM.h"
#include "Programs/Pow/Cp/PowCpDataCpA.h"
class PowProgControl : public ioProgram
{
public:
    PowProgControl();
    virtual ~PowProgControl();
    virtual void InitializeTask(void);
    virtual void Run(Int32 activeSlot);
    virtual void ReceiveData(ioDataCollection* listData, ioData* data);
    virtual void OnRecvTakeCommandPow(ioVarInt32* sender);
    virtual void OnRecvPowMode(ioVarInt32* sender, ioVarInt32* mode);
    PowOutDataOut24M PortOut24M;
    PowOutDataOut24F PortOut24F;
    PowOutDataOut24A PortOut24A;
    PowOutDataOut220M PortOut220M;
    PowOutDataOut220F PortOut220F;
    PowOutDataOut220A PortOut220A;
    PowCpDataCpM DataCpCpM;
    PowCpDataCpA DataCpCpA;
};
#endif // __POWPROGCONTROL_H
