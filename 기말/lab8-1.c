#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Mul(int a, int b)
{
	return a * b;
}

double Div(int a, int b)
{
	if (b == 0)
		return 0.0;
	else
		return (double)a / b;
}

int main()
{
	int a, b;
	printf("두 정수를 공백으로 구분하여 입력하세요.\n");
	scanf("%d%d", &a, &b);

	printf("%d * %d = %d\n", a, b, Mul(a, b));
	printf("%d * %d = %lf", a, b, Div(a, b));
}