#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y;

	printf("���� 2��: ");
	scanf("%d %d", &x, &y);

	printf("ū �� = %d\n", (x > y) ? x : y);
	printf("���� �� = %d", (x < y) ? x : y);
}