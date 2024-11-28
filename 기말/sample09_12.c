#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>

int main()
{
	char string[80];

	strcpy(string, "Hello World from ");
	strcat(string, "strcpy ");
	strcat(string, "and ");
	strcat(string, "strcat!");

	printf("string = %s", string);
}