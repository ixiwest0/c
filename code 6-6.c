#include <stdio.h>
int main()
{
	int i = 0;
	int sum = 0;
	for (;;)
	{
		sum += i;
		i++;
		if (i > 100)
			break;
	}
	printf("รัวี: %d", sum);
}