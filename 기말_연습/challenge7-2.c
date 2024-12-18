#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 6

int main()
{
    srand((unsigned)time(NULL));

    int freq[SIZE] = {0};

    for(int i = 0; i < 10000; i += 1)
    {
        freq[rand() % 6] += 1;
    }

    printf("==========================\n");
    printf("  숫자      빈도            \n");
    printf("==========================\n");

    for(int i = 0; i < SIZE; i += 1)
    {
        printf("%4d %10d\n", i, freq[i]);
    }

}