// !!! This C++ file is generated by ioStudio !!!
#if !defined(__SETREFHDGPANEL_H)
#define __SETREFHDGPANEL_H
#include "ioSystem/Panels/ioPanel.h"
#include "ioSystem/Panels/ioButtonText.h"
#include "ioSystem/Panels/ioGraphicsText.h"
class SetRefHdgPanel : public ioPanel
{
public:
    SetRefHdgPanel();
    virtual ~SetRefHdgPanel();
    virtual void InitializeData(void);
    ioButtonText ButtonLeftSmall;
    ioLabel LabelHdgCmdHeader;
    ioLabel LabelhdgCmdHeaderUnit;
    ioTextBlock InstrHdgCmd;
    ioButtonText ButtRightSmall;
    ioButtonText ButtLeftBig;
    ioButtonText ButtMidTrn;
    ioButtonText ButtRightBig;
protected:
    ioGraphics* m_SetRefHdgPanelGraphics[8];
};
#endif // __SETREFHDGPANEL_H
