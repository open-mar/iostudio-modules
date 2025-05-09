// !!! This C++ file is generated by ioStudio !!!
#if !defined(__SETREFDRIVEPANEL_H)
#define __SETREFDRIVEPANEL_H
#include "ioSystem/Panels/ioPanel.h"
#include "ioSystem/Panels/ioButtonText.h"
#include "ioSystem/Panels/ioGraphicsText.h"
class SetRefDrivePanel : public ioPanel
{
public:
    SetRefDrivePanel();
    virtual ~SetRefDrivePanel();
    virtual void InitializeData(void);
    ioButtonIcon ButtonLeftThrust;
    ioLabel LabelThrustCmdHeaderDrv;
    ioLabel LabelThrustCmdHeaderUnitDrv;
    ioTextBlock InstrThrustCmdDrv;
    ioButtonIcon ButtonRightThrust;
    ioButtonIcon ButtonLeftRudder;
    ioLabel LabelRudderCmdHeader;
    ioLabel LabelRudderCmdHeaderUnit;
    ioTextBlock InstrRudderCmd;
    ioButtonIcon ButtonRightRudder;
protected:
    ioGraphics* m_SetRefDrivePanelGraphics[10];
};
#endif // __SETREFDRIVEPANEL_H
