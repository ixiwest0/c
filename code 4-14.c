#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y;

	printf("정수 2개: ");
	scanf("%d %d", &x, &y);

	printf("큰 수 = %d\n", (x > y) ? x : y);
	printf("작은 수 = %d", (x < y) ? x : y);
}