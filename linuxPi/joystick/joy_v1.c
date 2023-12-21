#include <stdio.h>
#include <wiringPi.h>
#include <wiringPiSPI.h>
#include <mcp3004.h>

#define BASE 100
#define SPI_CHAN 0
#define SW 20

int main()
{
	wiringPiSetupGpio();
	printf("Raspherry Pi SPI ADC Program\n");
	mcp3004Setup(BASE, SPI_CHAN);
	pinMode(SW, INPUT);
	pullUpDnControl(SW, PUD_UP);

	while(1){

		printf("channel1(left, right) value : %4d\t", analogRead(BASE + 0));
		printf("channel2(up, down) value : %4d\t", 	analogRead(BASE + 1));

		if(digitalRead(SW) == 0){
			printf("PRESS ON");
		} else{
			printf("PRESS OFF");
		}
		printf("\n");
		delay(500);
	}
	return 0;
}
