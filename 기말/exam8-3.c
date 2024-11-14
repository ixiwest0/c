#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printMenu()
{
	printf("==========================\n");
	printf(" 'c' ¼·¾¾¿Âµµ¿¡¼­ È­¾¾¿Âµµ·Î º¯È¯\n");
	printf(" 'f' È­¾¾¿Âµµ¿¡¼­ ¼·¾¾¿Âµµ·Î º¯È¯\n");
	printf(" 'q' Á¾·á\n");
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

		printf("¸Þ´º¿¡¼­ ¼±ÅÃÇÏ¼¼¿À: ");
		choice = getchar();

		if (choice == 'q')
			break;
		else if (choice == 'c')
		{
			printf("¼·¾¾ ¿Âµµ: ");
			scanf("%lf", &temp);
			printf("¼·¾¾¿Âµµ: %lf\n\n", c2f(temp));
		}
		else if (choice == 'f')
		{
			printf("È­¾¾ ¿Âµµ: ");
			scanf("%lf", &temp);
			printf("È­¾¾¿Âµµ: %lf\n\n", f2c(temp));
		}
		getchar();
	}
}