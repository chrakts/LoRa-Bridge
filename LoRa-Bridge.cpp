#include "LoRa-Bridge.h"

class LoRaClass;

uint32_t counter = 0;

void setup()
{
	init_clock(SYSCLK,PLL,true,CLOCK_CALIBRATION);

	PORTA_DIRSET = 0b11110011; //
	PORTB_DIRSET = 0b00001001; //
	PORTC_DIRSET = 0b00001011; //
	PORTD_DIRSET = 0b10111000; //
	PORTE_DIRSET = 0b00000111; //
  MGSWITCH_OFF;
	LEDROT_OFF;
	LEDGRUEN_OFF;
	LEDORANGE_OFF;
	LEDBLAU_OFF;
	LEDENDAT_OFF;

  uint8_t i;
	for(i=0;i<=50;i++)
	{
		LEDGRUEN_TOGGLE;
		_delay_ms(100);
	}
  LEDGRUEN_OFF;
	//init_mytimer();

	PMIC_CTRL = PMIC_LOLVLEX_bm | PMIC_HILVLEN_bm | PMIC_MEDLVLEN_bm;
	sei();
	cmulti.open(Serial::BAUD_57600,F_CPU);

  cmulti.sendInfo("Hello from Endat-Board","BR");

}

int main()
{
  setup();
  MGSWITCH_ON;
  _delay_ms(1000);
  initEndat(32);
  LEDBLAU_ON;
  //EndatGetPosition21();
  while(1)
  {
    EndatGetPosition22();
    double position = getEndatPosition_mm();
    cmulti.sendAnswerDouble("Cp",'E','1','P',position,getEndatF1());
    //cmultiRec.comStateMachine();
    //cmultiRec.doJob();
  }
}

