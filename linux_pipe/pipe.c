#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	int pid, tmp;
	int fd[2];
	char buff[4];

	if(pipe(fd) < 0){
		perror("pipe error : ");
		return -1;
	}

	pid = fork();

	if(pid > 0){
		close(fd[0]);
		tem = getpid();
		printf("parent : my pid num is %d, child pid num is %d\n", tmp, pid);
		write(fd[1], &tmp, 4);
		wait();
	}

	else if(pid == 0){
		close(fd[1]);
		read(fd[0], &tmp, 4);
		printf("child : my pid num is %d, parent pid num is %d\n", getpid(), tmp);
	}

	else if(pid < 0){
		perror("fork error : ");
		return -1;
	}
	return 0;
}
