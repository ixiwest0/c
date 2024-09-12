#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char input[128] = { 0 };

	printf("Enter> ");
	scanf("%[^c]s", input);

	printf("Print> %s", input);
}