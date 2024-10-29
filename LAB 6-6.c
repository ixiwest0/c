#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand((unsigned)time(NULL));
	int answer = rand() % 100 + 1;
	int guess;
	int tries = 0;

	do {
		printf("정답을 추측하여 보시오. > ");
		scanf("%d", &guess);
		tries++;

		if (guess > answer)
			printf("down\n");
		if (guess < answer)
			printf("up\n");
	} while (guess != answer);

	printf("정답!. 시도횟수= %d", tries);
}