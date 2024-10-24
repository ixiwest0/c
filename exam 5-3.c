#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char grade[3];
	int score;

	printf("성적을 입력하시요: ");
	scanf("%d", &score);

	if (score >= 90)
		strcpy(grade, "A+");
	else if (score >= 80)
		strcpy(grade, "B+");
	else if (score >= 70)
		strcpy(grade, "C+");
	else if (score >= 60)
		strcpy(grade, "D+");
	else
		strcpy(grade, "F");
	printf("학점 %s", grade);
}