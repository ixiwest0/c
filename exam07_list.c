#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int main()
{
	int key, i;
	int list[SIZE] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };

	printf("[");
	for (i = 0; i < SIZE; i++)
	{
		printf("%d ", list[i]);
	}
	printf("]\n");

	printf("Ž���� ���� �Է��Ͻÿ�: ");
	scanf("%d", &key);

	for (i = 0; i < SIZE; i++)
	{
		if (list[i] == key)
		{
			printf("Ž�� ���� �ε��� = %d", i + 1);
			break;
		}
	}
}