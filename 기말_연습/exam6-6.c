#include <stdio.h>

int main()
{
    int i = 3;
    while(i)
    {
        printf("%d is True\n", i);
        i -= 1;
    }
    printf("%d is False", i);
}