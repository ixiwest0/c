#include <stdio.h>
#define SIZE 5

int main()
{
	int a[SIZE] = { 1, 2, 3, 4, 5 };
	int b[SIZE];

	int i;

	//�迭 a�� ������ �迭b�� ����
	for (i = 0; i < SIZE; i++)
	{
		b[i] = a[i];
	}

	//�迭 b�� ���� ���
	printf("�迭 b: ");
	for (i = 0; i < SIZE; i++)
	{
		printf("%d ", b[i]);
	}
}