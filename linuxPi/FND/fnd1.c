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

void led_on_One();
void led_on_Two();
void led_on_Three();
void led_on_Four();

int main()
{
	wiringPiSetupGpio();
	pinMode(DIG1, OUTPUT);
	pinMode(DIG2, OUTPUT);
	pinMode(DIG3, OUTPUT);
	pinMode(DIG4, OUTPUT);
	pinMode(A, OUTPUT);
	pinMode(B, OUTPUT);
	pinMode(C, OUTPUT);
	pinMode(D, OUTPUT);
	pinMode(E, OUTPUT);
	pinMode(F, OUTPUT);
	pinMode(G, OUTPUT);
	pinMode(DP, OUTPUT);


	while(1){
		led_on_One();
		delay(500);

		led_on_Two();
		delay(500);

		led_on_Three();
		delay(500);

		led_on_Four();
		delay(500);
	}


	return 0;
}

void led_on_One(){
	digitalWrite(DIG1, LOW);
	digitalWrite(DIG2, HIGH);
	digitalWrite(DIG3, HIGH);
	digitalWrite(DIG4, HIGH);
	digitalWrite(B, HIGH);
	digitalWrite(C, HIGH);
	delay(500);
	digitalWrite(DIG1, HIGH);
	digitalWrite(DIG2, HIGH);
	digitalWrite(DIG3, HIGH);
	digitalWrite(DIG4, HIGH);
	digitalWrite(A, LOW);
	digitalWrite(B, LOW);
	digitalWrite(C, LOW);
	digitalWrite(D, LOW);
	digitalWrite(E, LOW);
	digitalWrite(F, LOW);
	digitalWrite(G, LOW);
	digitalWrite(DP, LOW);
}

void led_on_Two(){
	digitalWrite(DIG1, HIGH);
	digitalWrite(DIG2, LOW);
	digitalWrite(DIG3, HIGH);
	digitalWrite(DIG4, HIGH);
	digitalWrite(A, HIGH);
	digitalWrite(B, HIGH);
	digitalWrite(G, HIGH);
	digitalWrite(E, HIGH);
	digitalWrite(D, HIGH);
	delay(500);
	digitalWrite(DIG1, HIGH);
	digitalWrite(DIG2, LOW);
	digitalWrite(DIG3, HIGH);
	digitalWrite(DIG4, HIGH);
	digitalWrite(A, LOW);
	digitalWrite(B, LOW);
	digitalWrite(C, LOW);
	digitalWrite(D, LOW);
	digitalWrite(E, LOW);
	digitalWrite(F, LOW);
	digitalWrite(G, LOW);
	digitalWrite(DP, LOW);
}

void led_on_Three(){
	digitalWrite(DIG1, HIGH);
	digitalWrite(DIG2, HIGH);
	digitalWrite(DIG3, LOW);
	digitalWrite(DIG4, HIGH);
	digitalWrite(A, HIGH);
	digitalWrite(B, HIGH);
	digitalWrite(G, HIGH);
	digitalWrite(C, HIGH);
	digitalWrite(D, HIGH);
	delay(500);
	digitalWrite(DIG1, HIGH);
	digitalWrite(DIG2, HIGH);
	digitalWrite(DIG3, LOW);
	digitalWrite(DIG4, HIGH);
	digitalWrite(A, LOW);
	digitalWrite(B, LOW);
	digitalWrite(C, LOW);
	digitalWrite(D, LOW);
	digitalWrite(E, LOW);
	digitalWrite(F, LOW);
	digitalWrite(G, LOW);
	digitalWrite(DP, LOW);
}

void led_on_Four(){
	digitalWrite(DIG1, HIGH);
	digitalWrite(DIG2, HIGH);
	digitalWrite(DIG3, HIGH);
	digitalWrite(DIG4, LOW);
	digitalWrite(A, HIGH);
	digitalWrite(F, HIGH);
	digitalWrite(G, HIGH);
	digitalWrite(E, HIGH);
	delay(500);
	digitalWrite(DIG1, HIGH);
	digitalWrite(DIG2, HIGH);
	digitalWrite(DIG3, HIGH);
	digitalWrite(DIG4, LOW);
	digitalWrite(A, LOW);
	digitalWrite(B, LOW);
	digitalWrite(C, LOW);
	digitalWrite(D, LOW);
	digitalWrite(E, LOW);
	digitalWrite(F, LOW);
	digitalWrite(G, LOW);
	digitalWrite(DP, LOW);
}
