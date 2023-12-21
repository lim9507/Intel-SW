#include <stdio.h>
#include <wiringPi.h>
#define KEY	5

int main()
{
	printf("Raspberry Pi - Key Input Test\n");

	wiringPiSetupGpio();
	pinMode(KEY, INPUT);
	while(1){
		int value = digitalRead(KEY);
		if(value == LOW){
			printf("Key is pressed\n");
			delay(200);
		}

	}
	return 0;
}
