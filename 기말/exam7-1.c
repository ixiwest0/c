#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5

int main()
{
	int i;
	int score[SIZE];

	srand((unsigned)time(NULL));
	for (i = 0; i < SIZE; i++)
		score[i] = rand() % 100 + 1;

	for (i = 0; i < SIZE; i++)
		printf("scores[%d] = %d\n", i, score[i]);
}
