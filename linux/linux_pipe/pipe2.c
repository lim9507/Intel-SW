#include <stdio.h>
#include <unistd.h>
#define BUF_SIZE 30

int main()
{
	int fd[2];
	char str[] = "shared memory";
	pid_t pid;
	char buf[BUF_SIZE];

	pipe(fd);
	pid = fork();
	
	if(pid == 0){ 
		 write(fd[1], str, sizeof(str));
	else{
		 read(fd[0], buf, BUF_SIZE);
		 puts(buf);
	}
	return 0;
}
