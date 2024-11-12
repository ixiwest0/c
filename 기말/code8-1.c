#include <stdio.h>

int sum(int from, int to)
{
	int sum = 0;

	for (int i = from; i <= to; i += 1)
	{
		sum += i;
	}

	return sum;
}

int main()
{
	int result = sum(1, 10);

	printf("sum: %d", result);
}