#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	printf("������ �Է��ϼ���\n");
	scanf("%d", &n);

	int check2, check3;
	check2 = n % 2;
	check3 = n % 3;

	if (!check2 && !check3)
		printf("2�� 3�� ������Դϴ�.");
	else if (!check2)
		printf("2�� ������Դϴ�.");
	else if (!check3)
		printf("3�� ������Դϴ�.");
	else
		printf("2�� 3�� ������� �ƴմϴ�.");


}