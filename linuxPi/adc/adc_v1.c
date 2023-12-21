#include <stdio.h>
#include <wiringPi.h>
#include <wiringPiSPI.h>
#include <mcp3004.h>

#define BASE 100
#define SPI_CHAN 0

int main()
{
	wiringPiSetup();
	printf("Raspberry Pi SPI ADC Program\n");

	mcp3004Setup(BASE, SPI_CHAN);

	while(1){
		printf("CDS : %d\n", analogRead(BASE + SPI_CHAN));
		delay(1000);
	}


	return 0;
}
