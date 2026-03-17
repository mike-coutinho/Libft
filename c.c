#include <stdio.h>

int *foo(int *i)
{
	printf("ptr in foo      = %p\n", i); 
	printf("adress in foo   = %p\n", &i);
	*i = 3;
	return (i);
}

int main(int argc, char const *argv[])
{
	int *i;
	*i = 2;
	printf("ptr in main     = %p\n", i); 
	printf("adress in main  = %p\n", &i); 
	foo(i);
	
	return 0;
}
