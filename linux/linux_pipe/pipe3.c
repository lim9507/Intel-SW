#include <stdio.h>
#include <unistd.h>

int main()
{
	int fd1[2], fd2[2];
	char str[]  = "who are you?";
	char str2[] = "thank you for your message!!";
	char buf[50];
	pid_t pid;

	pipe(fd1), pipe(fd2);
	pid = fork();

	if(pid == 0){
		write(fd1[1], str, sizeof(str));
		read(fd2[0], buf, 30);
		printf("child proc output : %s\n", buf);
	}else{
		read(fd1[0], buf, 30);
		printf("parent proc output : %s\n", buf);
		write(fd2[1], str2, sizeof(str2));
		sleep(3);
	}

	return 0;
}
