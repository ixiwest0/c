#include <stdio.h>

int main()
{
	char name[100];
	char address[100];

	printf("�̸��� �Է��Ͻÿ�: ");
	gets_s(name, sizeof(name));
	printf("���� �����ϴ� �ּҸ� �Է��Ͻÿ�: ");
	gets_s(address, sizeof(address));
	printf("�ȳ��ϼ���, %s�� ��� %s��", address, name);
}