#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>

int main()
{
	char s1[80];
	char s2[80];
	int result;

	printf("ù���� �ܾ �Է��Ͻÿ�: ");
	scanf("%s", s1);
	printf("�ι��� �ܾ �Է��Ͻÿ�: ");
	scanf("%s", s2);

	result = strcmp(s1, s2);

	if (result < 0)
		printf("%s�� %s���� �տ� �ֽ��ϴ�.", s1, s2);
	else if (result == 0)
		printf("%s�� %s�� �����ϴ�.", s1, s2);
	else
		printf("%s�� %s���� �ڿ� �ֽ��ϴ�.", s1, s2);
}