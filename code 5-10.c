#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int score;
	printf("���� ������ �Է��ϼ���");
	scanf("%d", &score);

	switch (score)
	{
		case 100: printf("�ſ� ����"); break;
		case 90:
		case 80: printf("����"); break;
		case 70:
		case 60:
		case 50: printf("����"); break;
		default: printf("����� �ʿ���"); break;
	}
}