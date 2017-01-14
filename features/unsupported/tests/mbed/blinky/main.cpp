#include "mbed.h"
#include "Ethernet.h"

#define	PWMFREQ		100	/* 10 KHz */
#define	PWMSCALE	 10	/* ( 100us * 10 ) = 1 KHz  */
#define SBAUD		115200

DigitalIn en(PA_3, PullDown);	/* LPC4357 Eval Board Header J10	Pin 18 */
DigitalIn pb(P8_0);	/* LPC4357 Eval Board Header J10	Pin 4 */
DigitalOut led(P9_6);	/* LPC4357 Eval Board LED Blue */
DigitalOut led1(P9_5);
DigitalOut pwmout(P8_6);			/* LPC4357 Eval Board Header J1	Pin 11 */

Ticker pwmt;
Serial Uart0(PF_10,PF_11);
Serial Uart1(PC_13,PC_14);
Serial Uart2(PA_1,PA_2);
Serial Uart3(PF_2,PF_3);/* LPC4357 Eval Board Header J10	Tx Pin 3 RX Pin 5*/

volatile char counts=0;
volatile char dutycycle=1;		/* Default 10% Duty */


/* For PWM Generation */
void pwmtick() 
{
	__disable_irq();

  	counts++;
	if( counts == dutycycle )
		pwmout=0;

	if( counts == PWMSCALE )
	{
		counts =0;
		pwmout=1;
	}

	__enable_irq();

}


int main() 
{

//	int pins;
	unsigned char XbeeRecv[10];
	unsigned char lrecv=0;
	//char c=Uart0.getc();
	  
	/* Attach Period for Ticker in micro seconds */
	pwmt.attach_us(&pwmtick,PWMFREQ);

	/* Init the Serial to 9600bps for Xbee Communitation */
	Uart0.baud(SBAUD);
	
	//led=1;

	/* Init the PWM to be in HIGH by default */
	pwmout=1;

	//pins = en.read(); /* Read the Input */
	/* Put the Xbee in AT Mode */

//	 pb.mode(PullUp); //MOde for the user switch


	/* Main Loop */

	while(1)
	{

		// pb.mode(PullDown); //MOde for the user switch

		//	led = en;
		//wait(1.0);

		/* Every 5 Seconds increase the duty cycle by 10 % */
		dutycycle++;

		/* Reset the duty cycle to 10 % */

		if(dutycycle == PWMSCALE ) 
		{
			dutycycle=1;
		}		

		wait(5.0);

	}

		/* Check if XBee responded with OK */

		/*while ( Uart0.readable() )

		{

			XbeeRecv[lrecv++]= Uart0.getc();

			if( (XbeeRecv[0]=='H') && (XbeeRecv[1]=='i') )

			{

				led= !led;

				wait(2);

				lrecv=0; // Reset the Receive Head to Process new Command

			}

		}*/

	

}


