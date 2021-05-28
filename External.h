#ifndef EXTERNAL_H_INCLUDED
#define EXTERNAL_H_INCLUDED

#include "Serial.h"
#include "myConstants.h"
#include "Communication.h"
#include "CRC_Calc.h"
#include "ComReceiver.h"

extern const char *Node;

extern uint8_t isBroadcast;

extern const char *fehler_text[];

extern char Compilation_Date[];
extern char Compilation_Time[];

extern volatile float fExternalTemperature;

extern char SecurityLevel;

extern CRC_Calc crcGlobal;
extern Communication cmulti;
extern ComReceiver cmultiRec;

#endif // EXTERNAL_H_INCLUDED


