#include <stdio.h>

int y(int x)
{
	printf("º¯¼ö: %d\n", x);
	return x + 1;
}

int main()
{
	int result = y(20);
	printf("result = %d", result);
	return 0;
}