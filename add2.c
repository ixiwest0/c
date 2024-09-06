#include <stdio.h>
#define MAX_COUNT 1000
#define MIN_COUNT 100
#define POW_VALUE(a) (a*a)

int main()
{
	int x = MAX_COUNT;
	int y = MIN_COUNT;
	int z = POW_VALUE(3);
	int sum;

	sum = x + y + z;
	printf("гу╟Х: %d", sum);
	return 0;
}