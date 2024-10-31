// !!! This C++ file is generated by ioStudio !!!
#if !defined(__VICTRONMONITOR_H)
#define __VICTRONMONITOR_H
#include "ioSystem/Program/Core/ioProgram.h"
#include "Programs/Victron/VictronData.h"
#include "Programs/Victron/VictronPanel.h"
class VictronMonitor : public ioProgram
{
public:
    VictronMonitor();
    virtual ~VictronMonitor();
    virtual void InitializeTask(void);
    VictronData MainData;
    VictronPanel MainPanel;
};
#endif // __VICTRONMONITOR_H
