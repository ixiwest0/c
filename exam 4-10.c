#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int compare(int x, int y)
{
	int r = x - y < 0 ? -1 : x == y ? 0 : 1;

	return r;
}

int main()
{
	int x, y;
	printf("두 정수를 공백으로 구분하여 입력하세요.\n");
	scanf("%d%d", &x, &y);
}
