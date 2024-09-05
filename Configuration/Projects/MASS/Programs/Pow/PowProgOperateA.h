// !!! This C++ file is generated by ioStudio !!!
#if !defined(__POWPROGOPERATEA_H)
#define __POWPROGOPERATEA_H
#include "ioSystem/Program/Core/ioProgram.h"
#include "Programs/Pow/Cp/PowCpDataCpA.h"
#include "Programs/Pow/Cp/PowCommandPanelCpA.h"
class PowProgOperateA : public ioProgram
{
public:
    PowProgOperateA();
    virtual ~PowProgOperateA();
    virtual void InitializeTask(void);
    virtual void Run(Int32 activeSlot);
    virtual void ReceiveGraphicsEvent(Int32 puidValue, ioProgramGraphicsEvent typeEvent);
    virtual void ReceiveData(ioDataCollection* listData, ioData* data);
    PowCpDataCpA DataCmdCpA;
    PowCommandPanelCpA PanelCmdCpA;
};
#endif // __POWPROGOPERATEA_H
