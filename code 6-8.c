#include <stdio.h>
int main() {
	int i = 0;
	int sum = 0;

	while (1)
	{
		sum += i + 1;
		i++;

		if (i > 99)
			break;
	}
	printf("รัวี: %d", sum);
}