#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char s1[3][100];

	printf("���ڿ��� �Է��ϼ���: ");
	for (int i = 0; i < 3; i++)
	{
		scanf("%s", s1[i]);
	}

	for (int i = 0; i < 3; i++)
	{
		printf("%s", s1[i]);
	}
}