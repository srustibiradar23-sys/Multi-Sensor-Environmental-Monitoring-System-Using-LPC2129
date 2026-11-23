#include<lpc21xx.h>
#include"header.h"
#define LED (1<<17)
#define LED1 (1<<18)
#define LED2 (1<<19)
#define movement (1<<15)
#define flame (1<<16)
int main()
{
	unsigned int adc_value;
	int temp;
	IODIR0=LED|LED1|LED2;
	IODIR0&=~movement;
	IODIR0&=~flame;
	IOSET0=LED|LED1|LED2;
	uart0_init(9600);
	adc_init();
	uart0_tx_string("INDUSTRIAL SAFETY MONITORING:\r\n");
		while(1)
		{
			
			//TEMPERATURE
			adc_value=adc_read(1);
			temp=(adc_value*3.3*100)/1023;
			uart0_tx_string("\r\n temperature \r\n");
			uart0_int(temp);
			uart0_tx_string("C");
			if(temp>37)
			{
				//IOCLR0=LED;
				uart0_tx_string("\r\n high \r\n");
			}
			else
			{
				//IOSET0=LED;
				uart0_tx_string("\r\n normal \r\n");
			}
			
			//MOVEMENT
			uart0_tx_string("\r\n movement \r\n");
			if((IOPIN0&movement)==0)
			{
        uart0_tx_string("\r\n restricted area \r\n");
			}
			else
				
			{
				uart0_tx_string("\r\n no restricted area \r\n");
			}
			
			//FLAME
			uart0_tx_string("\r\n FLAME \r\n");
			if((IOPIN0&flame)==0)
			{
				uart0_tx_string("\r\n YES \r\n");
			}
			else
			{
				uart0_tx_string("\r\n NO \r\n");
			}
			if((temp<37) && ((IOPIN0&movement)==0) && ((IOPIN0&flame)==0))
			{
				uart0_tx_string("\r\n STATUS:ALERT \r\n");
				IOSET0=LED;
				uart0_tx_string("\r\n RED_LED ON \r\n");
				IOCLR0=LED1;
				IOSET0=LED2;
			}
			else
			{
				uart0_tx_string("\r\n STATUS:SAFE\r\n");
				IOCLR0=LED;
				uart0_tx_string("\r\n GREEN-LED ON \r\n");
			   IOSET0=LED1;
				IOSET0=LED2;
			}
				delay_ms(300);
		}
	}

	
