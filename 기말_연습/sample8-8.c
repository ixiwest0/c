#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int coin_toss();

int main()
{
    int head = 0;
    int tail = 0;

    srand((unsigned)time(NULL));

    for(int i = 0; i < 1000; i += 1)
    {
        if(coin_toss())
            head += 1;
        else
            tail += 1;
    }

    printf("동전의 앞면: %d\n", head);
    printf("동전의 뒷면: %d\n", tail);
}

int coin_toss()
{
    int head = rand() % 2;

    return head;
}
