#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n;
	printf("������ �Է��ϼ���.\r\n");
	scanf("%d", &n);

	if (n % 2 == 0)
		printf("¦���Դϴ�.");
	else
		printf("Ȧ���Դϴ�.");
}