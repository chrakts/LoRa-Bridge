#define EXTERNALS_H_

#include "LoRa-Bridge.h"
#include "../Secrets/secrets.h"


const char *Node = "Ex";


uint8_t isBroadcast = false;

volatile float fExternalTemperature = 5.0;

char SecurityLevel = 0;

Communication cmulti(0,Node,5,true);
ComReceiver cmultiRec(&cmulti,Node,cnetCommands,NUM_COMMANDS,NULL,NUM_INFORMATION,"",NULL);

