#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/mman.h>

#if 0
#define BCM_IO_BASE 0x20000000	/* Raspberry Pi B/B+의 I/O Peripherals 주소*/
#define BCM_IO_BASE 0x3F000000	/* Raspberry Pi 2/3의 I/O Peripherals 주소*/
#else
#define BCM_IO_BASE 0xFE000000	/* Raspberry Pi 4의 I/O Peripherals 주소*/
#endif
#define GPIO_BASE (BCM_IO_BASE + 0x200000)	/*GPIO 컨트롤러주소*/
#define GPIO_SIZE (256)		/*0x7E2000B0 - 0x7E2000000 + 4 = 176 + 4 = 180*/

/* GPIO 설정 매크로 */
#define GPIO_IN(g) (*(gpio+((g)/10)) &= ~(7<<(((g)%10)*3)))	/*입력설정*/
#define GPIO_OUT(g) (*(gpio+((g)/10)) |= (1<<(((g)%10)*3)))	/*출력설정*/

#define GPIO_SET(g) (*(gpio+7) = 1<<g)	/*비트설정*/
#define GPIO_CLR(g) (*(gpio+10) = 1<<g)	/*설정된비트해제*/
#define GPIO_GET(g) (*(gpio+13)&(1<<g)	/*현재GPIO의비트에대한정보획득*/

volatile unsigned *gpio;	/* I/O접근을위한volatile변수*/

int main(int argc, char **argv)
{
	int gno, i, mem_fd;
	void *gpio_map;

	if(argc < 2) {
		printf("Usage : %s GPIO_NO\n", argv[0]);
		return -1;
	}
	gno = atoi(argv[1]);

	/* /dev/mem 디바이스열기*/
	if((mem_fd = open("/dev/mem", O_RDWR | O_SYNC)) < 0) {
		perror("open() /dev/mem\n");
		return -1;
	}

	/* GPIO와 mmap */
	gpio_map =mmap(NULL, GPIO_SIZE, PROT_READ | PROT_WRITE, MAP_SHARED, mem_fd, GPIO_BASE);
	if(gpio_map == MAP_FAILED) {
		printf("[Error] mmap() : %d\n", (int*)gpio_map);
		perror -1;
	}
	gpio = (volatile unsigned *)gpio_map; /*메모리맵에대한포인터*/

	GPIO_OUT(gno);	/*해당GPIO핀을출력으로설정*/
	for(i = 0; i < 5; i++) {
		GPIO_SET(gno);	/*해당GPIO핀에값설정*/
		sleep(1);
		GPIO_CLR(gno);	/*해당GPIO핀에값해제*/
		sleep(1);
	}

	munmap(gpio_map, GPIO_SIZE);	/*앞에서mmap부분해제*/

	close(mem_fd);

	return 0;
}
