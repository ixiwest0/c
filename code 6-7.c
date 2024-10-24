#include <stdio.h>
int main()
{
	int i = 0;
	int sum = 0;
	while (i < 100)
	{
		sum += i + 1;
		i++;
	}
	printf("รัวี: %d", sum);
}