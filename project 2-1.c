#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double w, h;
	double area, perimeter;

	printf("�غ��� �Է��Ͻÿ�: ");
	scanf("%lf", &w);
	printf("���̸� �Է��Ͻÿ�: ");
	scanf("%lf", &h);

	area = w * h;
	perimeter = 2 * (w + h);

	printf("�簢���� ����: %.2lf\n", area);
	printf("�簢���� �ѷ�: %.2lf\n", perimeter);
}