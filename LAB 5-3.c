#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	printf("정수를 입력하세요\n");
	scanf("%d", &n);

	int check2, check3;
	check2 = n % 2;
	check3 = n % 3;

	if (!check2 && !check3)
		printf("2와 3의 공배수입니다.");
	else if (!check2)
		printf("2의 공배수입니다.");
	else if (!check3)
		printf("3의 공배수입니다.");
	else
		printf("2와 3의 공배수가 아닙니다.");


}