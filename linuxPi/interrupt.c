#include <stdio.h>
#include <wiringPi.h>

const int pinSw = 6;
const int led = 21;
int flag = 0;
void intPrint();

int main()
{
	wiringPiSetupGpio();
	pinMode(pinSw, INPUT);
	pinMode(led, OUTPUT);
	wiringPiISR(pinSw, INT_EDGE_FALLING, intPrint);

	while(1){

		if(flag == 0) digitalWrite(led, LOW);
		delay(50);

		if(flag == 1) digitalWrite(led, HIGH);
		delay(50);
	}

	return 0;
}

void intPrint(void)
{
	flag = 1 - flag;
	printf("Interrupt Occur : %d\n", flag);
	//flag = 0;
}
