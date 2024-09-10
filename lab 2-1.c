#include <stdio.h>

int multiply(int i, int j)
{
	return i * j;
}

int main()
{
	int result = multiply(30, 20);
	printf("result = %d", result);
}