// !!! This C++ file is generated by ioStudio !!!
#if !defined(__IDSPROGOPERATEA_H)
#define __IDSPROGOPERATEA_H
#include "ioSystem/Program/Core/ioProgram.h"
#include "ioSystem/Ports/System/ioPortProgramSystem.h"
class IdsProgOperateA : public ioProgram
{
public:
    IdsProgOperateA();
    virtual ~IdsProgOperateA();
    virtual void InitializeTask(void);
    virtual void Run(Int32 activeSlot);
    ioPortProgramSystem PortSystem;
};
#endif // __IDSPROGOPERATEA_H
