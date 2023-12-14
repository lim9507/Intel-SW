#include <stdio.h>
#include <wiringPi.h>
#define	LED1	21

const int pinEcho = 1;
const int pinTrigger = 0;

int main()
{
	wiringPiSetupGpio();
	pinMode(pinEcho, INPUT);
	pinMode(pinTrigger, OUTPUT);
	digitalWrite(pinTrigger, LOW);
	pinMode(LED1, OUTPUT);
	delay(10);

	while(1){
		digitalWrite(pinTrigger, HIGH);
		delayMicroseconds(15);
		digitalWrite(pinTrigger, LOW);

		while(digitalRead(pinEcho) == LOW);
		long startTime = micros();
		while(digitalRead(pinEcho) == HIGH);
		long endTime = micros() - startTime;
		int distance = endTime / 58;

		printf("Distance : %d cm\n", distance);
		delay(500);

		if(distance > 50){
			digitalWrite(LED1, HIGH);
		}

		if(distance < 50){
			digitalWrite(LED1, LOW);
		}
	}

	return 0;
}
