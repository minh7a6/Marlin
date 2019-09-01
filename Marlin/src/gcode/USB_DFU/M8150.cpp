#include "../gcode.h"
#include "../../Marlin.h"
#define addr 0x1FFF0000
typedef void (*pFunction)(void);
pFunction JumpToApplication;
#if ENABLED(USB_DFU)
    void GcodeSuite::M8150() {
        *((unsigned long *)0x2001FFF0) = 0xDEADBEEF;
        NVIC_SystemReset();
    }
#endif
