#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n;
	printf("정수를 입력하세요.\r\n");
	scanf("%d", &n);

	if (n % 2 == 0)
		printf("짝수입니다.");
	else
		printf("홀수입니다.");
}