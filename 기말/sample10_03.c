#include <stdio.h>

int main()
{
	int i = 3000;
	int* p = &i;

	printf("p = %p\n", p);
	printf("&i = %p\n", &i);
	printf("i = %d\n", i);
	printf("*p = %d\n", *p);
}