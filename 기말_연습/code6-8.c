#include <stdio.h>

int main()
{
    int i = 0;
    int sum = 0;

    while(1)
    {
        i += 1;
        sum += i;

        if(i >= 100)
            break;
    }

    printf("total: %d", sum);
}