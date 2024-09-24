#include <stdio.h>

int main()
{
	typedef int MyInt;
	typedef const unsigned long long CULL;

	int a = 1;
	MyInt b = 2;
	CULL c = 200;

	b = a;
	printf("a = %d, b = %d, ", a, b);
	printf("c = %lld", c);
}