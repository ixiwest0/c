#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printMenu()
{
	printf("==========================\n");
	printf(" 'c' �����µ����� ȭ���µ��� ��ȯ\n");
	printf(" 'f' ȭ���µ����� �����µ��� ��ȯ\n");
	printf(" 'q' ����\n");
	printf("==========================\n");
}

double c2f(double c_temp)
{
	return 9.0 / 5.0 * c_temp + 32;
}

double f2c(double f_temp)
{
	return (f_temp - 32.0) * 5.0 / 9.0;
}

int main()
{
	char choice;
	double temp;
	while (1)
	{
		printMenu();

		printf("�޴����� �����ϼ���: ");
		choice = getchar();

		if (choice == 'q')
			break;
		else if (choice == 'c')
		{
			printf("���� �µ�: ");
			scanf("%lf", &temp);
			printf("�����µ�: %lf\n\n", c2f(temp));
		}
		else if (choice == 'f')
		{
			printf("ȭ�� �µ�: ");
			scanf("%lf", &temp);
			printf("ȭ���µ�: %lf\n\n", f2c(temp));
		}
		getchar();
	}
}