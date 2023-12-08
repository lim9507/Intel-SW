#include <stdio.h>
#include <unistd.h>

int globalVal = 100;
int main()
{
	pid_t pid;
	int localVal = 100;
	localVal++;

	pid = fork(); // creat child process

	if(pid == 0){
		localVal *= 2;
		globalVal = globalVal - 1;
	}else{
		localVal *= 5;
		globalVal = globalVal + 1;
	}

	if(pid == 0){
		printf("Child process : lv %d   gv %d\n", localVal, globalVal);
	}else{
		printf("Parent process : lv %d   gv %d\n", localVal, globalVal);
	}
	return 0;
}
