// !!! This C++ file is generated by ioStudio !!!
#if !defined(__STEERPROGCONTROL_H)
#define __STEERPROGCONTROL_H
#include "ioSystem/Program/Core/ioProgram.h"
#include "Programs/Steer/Ap/SteerApDataApM.h"
#include "Programs/Steer/Ap/SteerApDataApA.h"
#include "Programs/Steer/Cp/SteerCpDataCpM.h"
#include "Programs/Steer/Cp/SteerCpDataCpA.h"
class SteerProgControl : public ioProgram
{
public:
    SteerProgControl();
    virtual ~SteerProgControl();
    virtual void InitializeTask(void);
    virtual void Run(Int32 activeSlot);
    virtual void ReceiveData(ioDataCollection* listData, ioData* data);
    virtual void OnRecvRequestSteerDataApM(void);
    virtual void OnRecvTakeCommandCpM(void);
    virtual void OnRecvReleaseCpM(void);
    virtual void OnRecvTakeCommandCpA(void);
    virtual void OnRecvReleaseCpA(void);
    SteerApDataApM DataApM;
    SteerApDataApA DataApA;
    SteerCpDataCpM DataControlCpM;
    SteerCpDataCpA DataControlCpA;
};
#endif // __STEERPROGCONTROL_H
