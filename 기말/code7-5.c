#include <stdio.h>
#define SIZE 5

int main()
{
	int a[SIZE] = { 1, 2, 3, 4, 5 };
	int b[SIZE];

	int i;

	//배열 a의 내용을 배열b로 복사
	for (i = 0; i < SIZE; i++)
	{
		b[i] = a[i];
	}

	//배열 b의 내용 출력
	printf("배열 b: ");
	for (i = 0; i < SIZE; i++)
	{
		printf("%d ", b[i]);
	}
}
