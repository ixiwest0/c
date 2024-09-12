#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char name[16] = { 0 };
	int age;

	printf("What's your name?\r\n");
	scanf("%s", name);
	printf("How old are you?\r\n");
	scanf("%d", &age);

	printf("name: %s\r\nage: %d", name, age);
}