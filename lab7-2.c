#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define STUDENTS 5

int main()
{
	int scores[STUDENTS];
	int sum = 0;
	int i;
	double avg;

	for (i = 0; i < STUDENTS; i += 1)
	{
		printf("�л����� ������ �Է��Ͻÿ�: ");
		scanf("%d", &scores[i]);

		sum += scores[i];
	}

	avg = sum / STUDENTS;

	printf("���� ��� = %.2lf", avg);
}