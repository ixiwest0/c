#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, n;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);

	printf("==========================\n");
	printf("    i    i�� ������\n");
	printf("==========================\n");

	for (i = 1; i <= n; i++)
		printf("%5d %8d\n", i, i * i * i);
}