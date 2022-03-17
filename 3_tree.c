#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
	printf("hierarchial tree format:\n");
	execl("/home/taraprasad/system","./system",NULL);


//inside system:
/*
			#include<stdio.h>
		#include<stdlib.h>

		int main()
		{
			system("pstree");
			return(0);
		}*/


	return(0);
}
