#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	const double PI = 3.141592;
	double r;

	printf("반지름을 입력하세요.\n");
	scanf("%lf", &r);


	double len = 2 * PI * r;
	double area = PI * r * r;

	printf("둘레: %f, 넓이: %lf", len, area);
}