#include <wiringPiI2C.h>
#include <wiringPi.h>
#include <stdio.h>
#include <stdlib.h>

#define	I2C_ADDR	0x3f
#define	LCD_CHR	1
#define	LCD_CMD	0
#define	LINE1		0x80
#define	LINE2		0xC0
#define	LCD_BACKLIGHT 0x08
#define	ENABLE	0x04
			//sudo raspi-config > 3 interface > I2C
			//i2cdetect -y 1
void lcd_init(void);
void lcd_byte(int bits, int mode);
void lcd_toggle_enable(int bits);

void typeInt(int i);
void typeFloat(float myFloat);
void lcdLoc(int line);
void lcdClear(void);
void typeln(const char* s);
void typeChar(char val);
int xio;

int main()
{
	printf("Raspberry Pi LCD test program\n");
	wiringPiSetupGpio();
	xio = wiringPiI2CSetup(I2C_ADDR);
	lcd_init();

	char str1[] = "Hello World!";
	char str2[] = "LCD TEST!";

	while(1){
		lcdClear();
		lcdLoc(LINE1);
		typeln("I2C Program");
		lcdLoc(LINE2);
		typeln("in C not Python");
		delay(2000);

		lcdClear();
		lcdLoc(LINE1);
		typeln(str1);
		lcdLoc(LINE2);
		typeln(str2);
		delay(2000);
	}

	return 0;
}

void typeFloat(float myFloat)
{
	char buffer[20];
	sprintf(buffer, "%4.2f", myFloat);
	typeln(buffer);
}

void typeInt(int i)
{
	char array[20];
	sprintf(array, "%d", i);
	typeln(array);
}

void lcdClear(void)
{
	lcd_byte(0x01, LCD_CMD);
	lcd_byte(0x02, LCD_CMD);
}

void lcdLoc(int line)
{
	lcd_byte(line, LCD_CMD);
}

void typeChar(char val)
{
	lcd_byte(val, LCD_CHR);
}

void typeln(const char *s)
{
	while(*s) lcd_byte(*(s++), LCD_CHR);
}

void lcd_byte(int bits, int mode)
{
	int bits_high;
	int bits_low;
	bits_high = mode | (bits & 0xF0) | LCD_BACKLIGHT;
	bits_low = mode | ((bits << 4) & 0xF0) | LCD_BACKLIGHT;

	wiringPiI2CReadReg8(xio, bits_high);
	lcd_toggle_enable(bits_high);
	
	wiringPiI2CReadReg8(xio, bits_low);
	lcd_toggle_enable(bits_low);
}

void lcd_toggle_enable(int bits)
{
	delayMicroseconds(500);
	wiringPiI2CReadReg8(xio, (bits | ENABLE));
	delayMicroseconds(500);
	wiringPiI2CReadReg8(xio, (bits & ~ENABLE));
}

void lcd_init()
{
	lcd_byte(0x33, LCD_CMD);
	lcd_byte(0x32, LCD_CMD);
	lcd_byte(0x06, LCD_CMD);
	lcd_byte(0x0C, LCD_CMD);
	lcd_byte(0x28, LCD_CMD);
	lcd_byte(0x01, LCD_CMD);
	delayMicroseconds(500);
}


