#define _CRT_SEURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n;
    int i = 1;
    int sum = 0;
    while(i <= 5)
    {
        printf("Enter num >> ");
        scanf("%d", &n);

        sum += n;
        i += 1;
    }
    printf("total: %d", sum);
}