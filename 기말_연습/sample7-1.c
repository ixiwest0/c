#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 3
#define COLS 5

int main()
{
    int s[ROWS][COLS];
    int i, j;

    srand((unsigned)time(NULL));

    for(i = 0; i < ROWS; i += 1)
    {
        for(j = 0; j < COLS ; j += 1)
        {
            s[i][j] = rand() % 100;

            printf(" %02d", s[i][j]);
        }
        printf("\n");
    }
}