#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int ans, i;
    
    while(1)
    {
        srand((unsigned)time(NULL));

        int x = rand() % 100 + 1;
        int y = rand() % 100 + 1;

        ans = x + y;

        printf("%d + %d = ", x, y);
        scanf("%d", &i);

        if(i == ans)
        {
            printf("Pass!\n");
            break;
        }
        else if(i != ans)
        {
            printf("Fail!\n");
        }
    }
}