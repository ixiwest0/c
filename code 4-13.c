#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int age;
	printf("���̸� �Է��ϼ���.\n");
	scanf("%d", &age);
	printf("%s", (age < 20) ? "�̼�����" : "����");
}