#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int y, m, d;

    while(1)
    {
        printf("Year >> ");
        scanf("%d", &y);

        if(y > 2024)
        {
            continue;
        }
        else if(y <= 0)
            return 0;
        break;
    }

    while(1)
    {
        printf("Month >> ");
        scanf("%d", &m);

        if(m > 12)
        {
            continue;
        }
        else if(m <= 0)
            return 0;
        break;
    }

    while(1)
    {
        printf("Day >> ");
        scanf("%d", &d);

        if(d > 31)
        {
            continue;
        }
        else if(d <= 0)
            return 0;
        break;
    }

    printf("Birthday: %d - %d - %d", y, m, d);
}