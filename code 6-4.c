#include <stdio.h>
int main()
{
	int i;
	int sum = 0;
	for (i = 1; sum < 100; i++)
		sum += i;
	printf("1 + ... + %d >= %d", i - 1, sum);
}