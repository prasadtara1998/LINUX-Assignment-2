#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/types.h>

pthread_t t1,t2;

void* thread1(void *arg)
{
	printf("Parent id of thread1 is: %d\n",getppid());
	return NULL;
}

void* thread2(void *arg)
{
	printf("Parent id of thread2 is: %d\n",getppid());
	return NULL;
}

int main()
{
	int ret1 = pthread_create(&t1,NULL,thread1,NULL);
	int ret2 = pthread_create(&t2,NULL,thread2,NULL);

	if(ret1)
	{
		printf("Thread1 is not creadted\n");
	}
	else
	{
		printf("Thread1 is executing\n");
	}

	if(ret2)
	{
		printf("Thread2 is not creadted\n");
	}
	else
	{
		printf("thread2 is executing\n");
	}


	pthread_join(t1,NULL);
	pthread_join(t2,NULL);

	return 0;
}
