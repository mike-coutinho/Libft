#include <stdio.h>

void test(int c)
{
	printf("res = %p\n", &c);
	c = 3;
}


int main(int argc, char const *argv[])
{
	int c = 2;
	printf("res = %p\n", &c);
	test(c);

	printf("res = %i\n", c);
	printf("res = %p\n", &c);
	return 0;
}
