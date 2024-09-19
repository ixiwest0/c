#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double w, h;
	double area, perimeter;

	printf("밑변을 입력하시요: ");
	scanf("%lf", &w);
	printf("높이를 입력하시오: ");
	scanf("%lf", &h);

	area = w * h;
	perimeter = 2 * (w + h);

	printf("사각형의 넓이: %.2lf\n", area);
	printf("사각형의 둘레: %.2lf\n", perimeter);
}