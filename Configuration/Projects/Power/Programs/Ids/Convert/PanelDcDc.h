// !!! This C++ file is generated by ioStudio !!!
#if !defined(__PANELDCDC_H)
#define __PANELDCDC_H
#include "ioSystem/Panels/ioPanel.h"
#include "ioSystem/Panels/ioGraphicsText.h"
class PanelDcDc : public ioPanel
{
public:
    PanelDcDc();
    virtual ~PanelDcDc();
    virtual void InitializeData(void);
    ioLabel LabelNameDcDcConv;
    ioLabel LabelHeaderDcDcInput;
    ioLabel LabelHeaderDcDcInputUnit;
    ioTextBlock InstrVoltInputDcDc;
    ioLabel LabelHeaderDcDcOutput;
    ioLabel LabelHeaderDcDcOutputUnit;
    ioTextBlock InstrVoltOutputDcDc;
protected:
    ioGraphics* m_PanelDcDcGraphics[7];
};
#endif // __PANELDCDC_H
