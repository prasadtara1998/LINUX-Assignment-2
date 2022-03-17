#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/types.h>

pthread_t t1;

void* thread1(void *arg)
{
	execl("/bin/ls","ls","-lh",0);
	return NULL;
}

int main()
{
	t1 = fork();
	if(t1==0)
	{
		execl("/bin/ls","ls","-lh",0);
	}
	else
	{
		wait(NULL);
		printf("parent executing\n");
		exit(0);
	}		

	return 0;
}
