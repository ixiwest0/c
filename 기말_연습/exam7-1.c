#include <stdio.h>

int main()
{
    int scores[5];

    scores[0] = 10;
    scores[1] = 20;
    scores[2] = 30;
    scores[3] = 40;
    scores[4] = 50;

    for(int i = 0; i < 5; i += 1)
        printf("socres[%d] = %d\n", i, scores[i]);
}