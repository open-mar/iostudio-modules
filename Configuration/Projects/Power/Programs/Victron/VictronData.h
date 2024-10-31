// !!! This C++ file is generated by ioStudio !!!
#if !defined(__VICTRONDATA_H)
#define __VICTRONDATA_H
#include "ioSystem/Data/ioDataCollection.h"
#include "ioSystem/Data/ioVar.h"
#include "Programs/ioSystemData.h"
#include "ioSystem/Data/ioEvent.h"
#include "ioSystem/Data/ioMethod.h"
class VictronData : public ioDataCollection
{
public:
    VictronData();
    virtual ~VictronData();
    void InitializeData(void);
    ioMethod RequestVictronData;
    ioEvent ResponseVictronData;
protected:
    ioData* m_ListData[2];
};
#endif // __VICTRONDATA_H
