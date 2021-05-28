#ifndef HX711ADAPTER_H_INCLUDED
#define HX711ADAPTER_H_INCLUDED


#include <avr/io.h>
#include <stdbool.h>
#include <avr/pgmspace.h>
#include <avr/interrupt.h>
#include <avr/eeprom.h>
#include <avr/sleep.h>
#include <errno.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#include "myConstants.h"

#include "Serial.h"
#include "External.h"
#include "Communication.h"
#include "ComReceiver.h"
#include "../xmegaClocks/xmegaClocks.h"
#include "CommandFunctions.h"
#include "endat22.h"

void setup();

#endif // HX711ADAPTER_H_INCLUDED
