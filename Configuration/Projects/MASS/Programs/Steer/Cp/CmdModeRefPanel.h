// !!! This C++ file is generated by ioStudio !!!
#if !defined(__CMDMODEREFPANEL_H)
#define __CMDMODEREFPANEL_H
#include "ioSystem/Panels/ioPanel.h"
class CmdModeRefPanel : public ioPanel
{
public:
    CmdModeRefPanel();
    virtual ~CmdModeRefPanel();
    virtual void InitializeData(void);
protected:
    ioGraphics* m_CmdModeRefPanelGraphics[3];
};
#endif // __CMDMODEREFPANEL_H
