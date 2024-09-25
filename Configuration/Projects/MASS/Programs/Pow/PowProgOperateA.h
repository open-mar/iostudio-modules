// !!! This C++ file is generated by ioStudio !!!
#if !defined(__POWPROGOPERATEA_H)
#define __POWPROGOPERATEA_H
#include "ioSystem/Program/Core/ioProgram.h"
#include "Programs/Pow/Cp/PowCpDataCpA.h"
#include "Programs/Pow/Cp/PowCommandPanelCpA.h"
#include "Programs/Pow/Out/PowOutPanelOut12M.h"
#include "Programs/Pow/Out/PowOutPanelOut12F.h"
#include "Programs/Pow/Out/PowOutPanelOut12A.h"
#include "Programs/Pow/Out/PowOutPanelOut24M.h"
#include "Programs/Pow/Out/PowOutPanelOut24F.h"
#include "Programs/Pow/Out/PowOutPanelOut24A.h"
#include "Programs/Pow/Out/PowOutPanelOut220M.h"
#include "Programs/Pow/Out/PowOutPanelOut220F.h"
#include "Programs/Pow/Out/PowOutPanelOut220A.h"
#include "Programs/Pow/Out/PowIndicatorPanelOut12M.h"
#include "Programs/Pow/Out/PowIndicatorPanelOut12F.h"
#include "Programs/Pow/Out/PowIndicatorPanelOut12A.h"
#include "Programs/Pow/Out/PowIndicatorPanelOut24M.h"
#include "Programs/Pow/Out/PowIndicatorPanelOut24F.h"
#include "Programs/Pow/Out/PowIndicatorPanelOut24A.h"
#include "Programs/Pow/Out/PowIndicatorPanelOut220M.h"
#include "Programs/Pow/Out/PowIndicatorPanelOut220F.h"
#include "Programs/Pow/Out/PowIndicatorPanelOut220A.h"
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
    PowOutPanelOut12M PanelOut12M;
    PowOutPanelOut12F PanelOut12F;
    PowOutPanelOut12A PanelOut12A;
    PowOutPanelOut24M PanelOut24M;
    PowOutPanelOut24F PanelOut24F;
    PowOutPanelOut24A PanelOut24A;
    PowOutPanelOut220M PanelOut220M;
    PowOutPanelOut220F PanelOut220F;
    PowOutPanelOut220A PanelOut220A;
    PowIndicatorPanelOut12M PanelIndOut12M;
    PowIndicatorPanelOut12F PanelIndOut12F;
    PowIndicatorPanelOut12A PanelIndOut12A;
    PowIndicatorPanelOut24M PanelIndOut24M;
    PowIndicatorPanelOut24F PanelIndOut24F;
    PowIndicatorPanelOut24A PanelIndOut24A;
    PowIndicatorPanelOut220M PanelIndOut220M;
    PowIndicatorPanelOut220F PanelIndOut220F;
    PowIndicatorPanelOut220A PanelIndOut220A;
};
#endif // __POWPROGOPERATEA_H
