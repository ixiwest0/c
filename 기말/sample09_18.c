#include <stdio.h>

int main()
{
	int i;
	char menu[5][10] =
	{
		"init", "open", "cllose", "read", "write"
	};

	for (i = 0; i < 5; i++)
		printf("%d 번째 메뉴: %s\n", i, menu[i]);
}