#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int multiply(int i, int j)
{
	return i * j;
}

int add(int i, int j)
{
	return i + j;
}

int subtract(int i, int j)
{
	return i - j;
}

int main()
{
	int a, b;

	printf("�� ������ �������� �����Ͽ� �Է��ϼ���.\r\n");
	scanf("%d %d", &a, &b);

	int c1 = multiply(a, b);
	int c2 = add(a, b);
	int c3 = subtract(a, b);

	printf("��: %d\r\n", c1);
	printf("��: %d\r\n", c2);
	printf("��: %d\r\n", c3);
}