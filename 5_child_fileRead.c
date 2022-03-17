#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>

pthread_t t1;

void* thread1(void *arg)
{
	int fd;
	char buf[5];
	fd = open("demo.txt",O_RDWR,777);
	read(fd,buf,5);
	printf("%s\n",buf);
	close(fd);
	return NULL;
}

int main()
{
	pthread_create(&t1,NULL,thread1,NULL);
	pthread_join(t1,NULL);
	printf("End of program\n");

	return 0;	
}
