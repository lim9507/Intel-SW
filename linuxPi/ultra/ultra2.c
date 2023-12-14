#include <stdio.h>
#include <wiringPi.h>

#define LED_COUNT 5
#define LED1 	21
#define LED2	22
#define LED3	23
#define LED4	24
#define LED5 	25

const int pinEcho = 1;
const int pinTrigger = 0;

void initializeLEDs() {
    for (int i = 0; i < LED_COUNT; ++i) {
        pinMode(LED1 + i, OUTPUT);
        digitalWrite(LED1 + i, LOW);
    }
}

void controlLEDs(int distance) {
    for (int i = 0; i < LED_COUNT; ++i) {
        if (i * 10 < distance) {
            digitalWrite(LED1 + i, HIGH);
        } else {
            digitalWrite(LED1 + i, LOW);
        }
    }
}

int main() {
    wiringPiSetupGpio();
    initializeLEDs();
    pinMode(pinEcho, INPUT);
    pinMode(pinTrigger, OUTPUT);
    digitalWrite(pinTrigger, LOW);
    delay(10);

    while (1) {
        digitalWrite(pinTrigger, HIGH);
        delayMicroseconds(15);
        digitalWrite(pinTrigger, LOW);

        while (digitalRead(pinEcho) == LOW);
        long startTime = micros();
        while (digitalRead(pinEcho) == HIGH);
        long endTime = micros() - startTime;
        int distance = endTime / 58;

        printf("Distance: %d cm\n", distance);

        controlLEDs(distance);

        delay(500);
    }

    return 0;
}

