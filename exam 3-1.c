#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int i1, i2;
	double f;
	printf("정수를 입력해주세요.\n");
	scanf("%d", &i1);

	f = i1;
	i2 = f;

	printf("오차: %d", i1 - i2);
}