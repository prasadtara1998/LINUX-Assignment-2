#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
	execl("/home/taraprasad/word.txt","./word.txt","word.txt","discriptor",0);
	printf("\n");

return 0;
}
