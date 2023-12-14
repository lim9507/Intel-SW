#include <stdio.h>
#include <wiringPi.h>
#define KEY1	5
#define KEY2	6
#define LED	21

int main()
{
	printf("Raspberry Pi - Key Input Test\n");

	wiringPiSetupGpio();
	pinMode(KEY1, INPUT);
	pinMode(KEY2, INPUT);
	pinMode(LED, OUTPUT);

	while(1){
		int value1 = digitalRead(KEY1);
		int value2 = digitalRead(KEY2);

		if(value1 == LOW){
			digitalWrite(LED, HIGH);
			printf("Key is pressed. LED lights on.\n");
			delay(500);
		}

		if(value2 == LOW){
			digitalWrite(LED, LOW);
			printf("Key is pressed. LED lights off.\n");
			delay(500);
		}

	}

	return 0;
}

