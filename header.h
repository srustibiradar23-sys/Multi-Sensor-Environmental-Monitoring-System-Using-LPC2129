#include<lpc21xx.h>
#include<stdio.h>
extern void lcd_data(unsigned char data);
extern void lcd_cmd(unsigned int cmd);
extern void lcd_init(void);
extern void lcd_string(char *p);
extern void lcd_integer(int num);
extern void lcd_float(float f);
extern void uart0_init(unsigned int baud);
extern void uart0_tx(unsigned char data);
extern unsigned char uart0_rx(void);
extern void uart0_string_tx(char *ptr);
extern void uart0_rx_string(char*str,int len);
extern void uart0_integer(int num);
extern void adc_init(void);
extern unsigned int adc_read(unsigned int ch_num);
extern void delay_sec(unsigned int sec);
extern void delay_ms(unsigned int ms);
extern void uart0_float(int f);
