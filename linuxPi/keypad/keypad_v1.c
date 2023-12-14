#include <stdio.h>
#include <wiringPi.h>

#define C4	6
#define C3	13
#define C2	19
#define C1	26
#define R1	12
#define R2	16
#define R3	20
#define R4	21

void pin_mode();
void pin_pupd();

char key_pad[4][4] = {{'1', '2', '3', '+'},
			{'4', '5', '6', '-'},
			{'7', '8', '9', '*'},
			{'=', '0', '#', '/'}};

int main()
{
	wiringPiSetupGpio();
	pin_mode();
	pin_pupd();

	while(1){
		char value = 'a';
		digitalWrite(C1, HIGH);
		if(digitalRead(R1) == HIGH)value = key_pad[0][0];
		if(digitalRead(R2) == HIGH)value = key_pad[1][0];
		if(digitalRead(R3) == HIGH)value = key_pad[2][0];
		if(digitalRead(R4) == HIGH)value = key_pad[3][0];
		digitalWrite(C1, LOW);

		digitalWrite(C2, HIGH);
		if(digitalRead(R1) == HIGH)value = key_pad[0][1];
		if(digitalRead(R2) == HIGH)value = key_pad[1][1];
		if(digitalRead(R3) == HIGH)value = key_pad[2][1];
		if(digitalRead(R4) == HIGH)value = key_pad[3][1];
		digitalWrite(C2, LOW);

		digitalWrite(C3, HIGH);
		if(digitalRead(R1) == HIGH)value = key_pad[0][2];
		if(digitalRead(R2) == HIGH)value = key_pad[1][2];
		if(digitalRead(R3) == HIGH)value = key_pad[2][2];
		if(digitalRead(R4) == HIGH)value = key_pad[3][2];
		digitalWrite(C3, LOW);

		digitalWrite(C4, HIGH);
		if(digitalRead(R1) == HIGH)value = key_pad[0][3];
		if(digitalRead(R2) == HIGH)value = key_pad[1][3];
		if(digitalRead(R3) == HIGH)value = key_pad[2][3];
		if(digitalRead(R4) == HIGH)value = key_pad[3][3];
		digitalWrite(C4, LOW);

		delay(200);
		if(value != 'a')printf("%c\n", value);
		value = 'a';
	}
}

void pin_mode(){
	pinMode(C1, OUTPUT);
	pinMode(C2, OUTPUT);
	pinMode(C3, OUTPUT);
	pinMode(C4, OUTPUT);
	pinMode(R1, INPUT);
	pinMode(R2, INPUT);
	pinMode(R3, INPUT);
	pinMode(R4, INPUT);
}

void pin_pupd(){
	pullUpDnControl(R1, PUD_DOWN);
	pullUpDnControl(R2, PUD_DOWN);
	pullUpDnControl(R3, PUD_DOWN);
	pullUpDnControl(R4, PUD_DOWN);
}
