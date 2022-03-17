#include<stdio.h>
#include<unistd.h>

int main()
{
	printf("content of demo.txt file is:\n");

	execl("/bin/cat","cat","demo.txt",NULL);
	printf("end of program");

	return(0);
}
