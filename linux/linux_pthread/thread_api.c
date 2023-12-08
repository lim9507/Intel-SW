#include <stdio.h>
#include <pthread.h>

void* thread_entry(void *arg)
{
	int loop =5;
	int *thread_arg = (int*)(arg);
	printf("thread : start\n");
	printf("thread : working");
	while(loop--){
		printf(".");
		fflush(stdout);
		sleep(1);
	}
	printf("\n");
	printf("thread : end\n");
	return (void*)((*thread_arg)*100);
}

int main(int argc, char *argv[])
{
	int thread_arg = 369;
	int thread_return = 0;
	pthread_t thread_id;
	printf("main : start\n");
	printf("main : pthread_create\n");

	pthread_create(&thread_id, NULL, thread_entry, &thread_arg);
	printf("main : thread_id %lu\n", thread_id);

	pthread_join(thread_id, (void**)(&thread_return));

	printf("main : thread status %d\n", thread_return);

	return 0;
}