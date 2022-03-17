#include<stdio.h>

void fun1(void)
{
	printf("fun1 executing\n");

}

void fun2(void)
{
	printf("fun2 executing\n");

}

int main()
{
	atexit(fun1);
	atexit(fun2);
		
	printf("function called in reverse manner\n");
return 0;
}
