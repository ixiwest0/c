#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char name[100];
	char address[100];

	printf("�̸��� �Է��Ͻÿ�: ");
	scanf("%s", name);
	printf("�ּҸ� �Է��ϼ���: ");
	scanf("%s", address);

	printf("�ȳ��ϼ��� %s�� ��� %s��!", address, name);
}