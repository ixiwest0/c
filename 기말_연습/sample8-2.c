#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_lotto()
{
    int lotto;

    srand((unsigned)time(NULL));
    
    for(int i = 0; i < 6; i += 1)
    {
        lotto = (rand() % 45) + 1;
    }

    return lotto;
}

int main()
{
    int lotto[6];

    for(int i = 0; i < 6; i += 1)
    {
        lotto[i] = get_lotto();
        printf("%d ", lotto[i]);
    }
}