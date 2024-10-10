#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y;

	printf("두 개의 정수를 입력하시요: ");
	scanf("%d %d", &x, &y);

	printf("%d && %d의 결과값: %d\n", x, y, x && y);
	printf("%d || %d의 결과값: %d\n", x, y, x || y);
	printf("!%d의 결과값: %d", x,!x);
}