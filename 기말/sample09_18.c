#include <stdio.h>

int main()
{
	int i;
	char menu[5][10] =
	{
		"init", "open", "cllose", "read", "write"
	};

	for (i = 0; i < 5; i++)
		printf("%d ��° �޴�: %s\n", i, menu[i]);
}