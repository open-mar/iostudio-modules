// !!! This C++ file is generated by ioStudio !!!
#if !defined(__IDSPROGCONTROL_H)
#define __IDSPROGCONTROL_H
#include "ioSystem/Program/Core/ioProgram.h"
#include "ioSystem/Ports/System/ioPortProgramSystem.h"
#include "ioModbus/ioPortProgramModbus.h"
class IdsProgControl : public ioProgram
{
public:
    IdsProgControl();
    virtual ~IdsProgControl();
    virtual void InitializeTask(void);
    virtual void Run(Int32 activeSlot);
    ioPortProgramSystem PortSystem;
    ioPortProgramModbus PortModbus;
};
#endif // __IDSPROGCONTROL_H
