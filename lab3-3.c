#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	const double PI = 3.141592;
	double r;

	printf("�������� �Է��ϼ���.\n");
	scanf("%lf", &r);


	double len = 2 * PI * r;
	double area = PI * r * r;

	printf("�ѷ�: %f, ����: %lf", len, area);
}