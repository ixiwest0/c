#include <stdio.h>

int main()
{
	typedef int MyInt;

	int a = 1;
	MyInt b = 2;
	b = a;
	printf("a = %d, b = %d", a, b);
}