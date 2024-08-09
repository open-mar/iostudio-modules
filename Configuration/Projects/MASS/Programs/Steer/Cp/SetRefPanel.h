// !!! This C++ file is generated by ioStudio !!!
#if !defined(__SETREFPANEL_H)
#define __SETREFPANEL_H
#include "ioSystem/Panels/ioPanel.h"
#include "ioSystem/Panels/ioGraphicsText.h"
#include "ioSystem/Panels/ioButtonText.h"
#include "ioSystem/Panels/ioTextBox.h"
class SetRefPanel : public ioPanel
{
public:
    SetRefPanel();
    virtual ~SetRefPanel();
    virtual void InitializeData(void);
    ioLabel LabelHeader;
    ioButtonText ButtonLeftSmall;
    ioButtonText ButtMidZero;
    ioButtonText ButtRightSmall;
    ioTextBoxNumber EncoderNumber;
    ioButtonText ButtLeftBig;
    ioButtonText ButtRightBig;
protected:
    ioGraphics* m_SetRefPanelGraphics[7];
};
#endif // __SETREFPANEL_H
