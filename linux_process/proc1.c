#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
	pid_t childpid;
	childpid = fork();

	if(childpid == 0){
		printf("I am Child process\n");
		printf("child : %d\n", (int)getpid());
	}else{
		printf("I am Parent process\n");
		printf("parent : %d\n", (int)getpid());
	}
	printf("\n");
	return 0;
}
