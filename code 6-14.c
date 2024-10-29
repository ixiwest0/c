#include <stdio.h>

int main()
{
	for (int i = 2; i < 10; i++)
	{
		int j = 1;
		while (1)
		{
			printf("%d * %d = %d\n", i, j, i * j);
			j++;
			if (j > 9)
				break;
		}
		printf("\n");
	}
}