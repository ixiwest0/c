#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, ans;
	printf("산수 문제를 자동으로 출제합니다. \n");

	while (1)
	{
		srand((unsigned)time(NULL));
		int x = rand() % 100 + 1;
		int y = rand() % 100 + 1;
		printf("%d + %d = ", x, y);
		scanf("%d", &ans);

		if (x + y == ans) {
			printf("정답.\n");
			break;
		}
		else
			printf("틀림.\n");
	}
}