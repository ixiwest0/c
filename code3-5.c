#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float radius;
	float area;

	printf("원의 반지름을 입력하시오: ");
	scanf("%f", &radius);

	area = 3.141592 * radius * radius;
	printf("원의 면적: %f \n", area);

	return 0;
}