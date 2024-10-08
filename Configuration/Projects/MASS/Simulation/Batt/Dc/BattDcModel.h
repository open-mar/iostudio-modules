// !!! This C++ file is generated by ioStudio !!!
#if !defined(__BATTDCMODEL_H)
#define __BATTDCMODEL_H
#include "ioSystem/Simulation/ioModel.h"
#include "Programs/Pow/Out/PowOutDataOut12M.h"
#include "Programs/Pow/Out/PowOutDataOut12F.h"
#include "Programs/Pow/Out/PowOutDataOut12A.h"
#include "Programs/Batt/Dc/BattDcDataDc12.h"
#include "Programs/Pow/Out/PowOutDataOut24M.h"
#include "Programs/Pow/Out/PowOutDataOut24F.h"
#include "Programs/Pow/Out/PowOutDataOut24A.h"
#include "Programs/Batt/Dc/BattDcDataDc24.h"
class BattDcModel : public ioModel
{
public:
    BattDcModel();
    virtual ~BattDcModel();
    virtual void InitializeItem(void);
    virtual void DoSimulation_100ms(Int32 slotCounter_100ms);
    virtual void SimulateBatteryCurrent(Int32 typeDevice, Bool onCh1, Bool onCh2, Bool onCh3, Bool onCh4, Bool onCh5, Bool onCh6, Bool onCh7, Bool onCh8, Float* currentOut);
};
class BattDcModelDc12 : public BattDcModel
{
public:
    BattDcModelDc12();
    virtual ~BattDcModelDc12();
    virtual void InitializeItem(void);
    virtual void DoSimulation_100ms(Int32 slotCounter_100ms);
    PowOutDataOut12M PowOut12M;
    PowOutDataOut12F PowOut12F;
    PowOutDataOut12A PowOut12A;
    BattDcDataDc12 BattDc12;
};
class BattDcModelDc24 : public BattDcModel
{
public:
    BattDcModelDc24();
    virtual ~BattDcModelDc24();
    virtual void InitializeItem(void);
    virtual void DoSimulation_100ms(Int32 slotCounter_100ms);
    PowOutDataOut24M PowOut24M;
    PowOutDataOut24F PowOut24F;
    PowOutDataOut24A PowOut24A;
    BattDcDataDc24 BattDc24;
};
#endif // __BATTDCMODEL_H
