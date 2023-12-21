#include <stdio.h>
#include <wiringPi.h>

const int DIG1 = 18;
const int DIG2 = 23;
const int DIG3 = 24;
const int DIG4 = 6;
const int A = 25;
const int B = 12;
const int C = 17;
const int D = 27;
const int E = 4;
const int F = 16;
const int G = 13;
const int DP = 19;

//void led_on(int dig);			// All LED ON
void display_dig(int dig);
void led_output();

int led_pin[12] = {18, 23, 24, 6, 25, 12, 17, 27, 4, 16, 13, 19};

int main()
{
	wiringPiSetupGpio();
	led_output();

	while(1){

		for(int i = 0; i <= 4; i++){
			display_dig(i);
			delay(1);
		}
	}



	return 0;
}

void led_output()
{
	for(int i = 0; i < 12; i++){
		pinMode(led_pin[i], OUTPUT);
	}
}
/*
void led_on(int dig)
{
	digitalWrite(DIG1, LOW);
	digitalWrite(DIG2, LOW);
	digitalWrite(DIG3, LOW);
	digitalWrite(DIG4, LOW);
	display_dig(dig);
}
*/
void display_dig(int dig)
{
	switch(dig)
	{
	case 1:
		digitalWrite(DIG1, LOW);
		digitalWrite(DIG2, HIGH);
		digitalWrite(DIG3, HIGH);
		digitalWrite(DIG4, HIGH);
		digitalWrite(A, LOW);
		digitalWrite(B, HIGH);
		digitalWrite(C, HIGH);
		digitalWrite(D, LOW);
		digitalWrite(E, LOW);
		digitalWrite(F, LOW);
		digitalWrite(G, LOW);
		digitalWrite(DP, LOW);
		break;
	case 2:
		digitalWrite(DIG1, HIGH);
		digitalWrite(DIG2, LOW);
		digitalWrite(DIG3, HIGH);
		digitalWrite(DIG4, HIGH);
      digitalWrite(A, HIGH);
      digitalWrite(B, HIGH);
      digitalWrite(C, LOW);
      digitalWrite(D, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(F, LOW);
      digitalWrite(G, HIGH);
      digitalWrite(DP, LOW);
		break;
	case 3:
		digitalWrite(DIG1, HIGH);
		digitalWrite(DIG2, HIGH);
		digitalWrite(DIG3, LOW);
		digitalWrite(DIG4, HIGH);
      digitalWrite(A, HIGH);
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(E, LOW);
      digitalWrite(F, LOW);
      digitalWrite(G, HIGH);
      digitalWrite(DP, LOW);
		break;
	case 4:
		digitalWrite(DIG1, HIGH);
		digitalWrite(DIG2, HIGH);
		digitalWrite(DIG3, HIGH);
		digitalWrite(DIG4, LOW);
      digitalWrite(A, HIGH);
      digitalWrite(B, LOW);
      digitalWrite(C, LOW);
      digitalWrite(D, LOW);
      digitalWrite(E, HIGH);
      digitalWrite(F, HIGH);
      digitalWrite(G, HIGH);
      digitalWrite(DP, LOW);
		break;
	}
/*
	delay(500);

   digitalWrite(A, LOW);
   digitalWrite(B, LOW);
   digitalWrite(C, LOW);
   digitalWrite(D, LOW);
   digitalWrite(E, LOW);
   digitalWrite(F, LOW);
   digitalWrite(G, LOW);
   digitalWrite(DP, LOW);*/
}
