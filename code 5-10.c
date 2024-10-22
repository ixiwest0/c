#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int score;
	printf("수학 점수를 입력하세요");
	scanf("%d", &score);

	switch (score)
	{
		case 100: printf("매우 잘함"); break;
		case 90:
		case 80: printf("잘함"); break;
		case 70:
		case 60:
		case 50: printf("보통"); break;
		default: printf("노력이 필요함"); break;
	}
}