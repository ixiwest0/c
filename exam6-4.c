#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n;
    printf("Enter num >> ");
    scanf("%d", &n);

    int i = 1;
    int sum = 0;
    while(i <= n)
    {
        sum += i;
        i += 2;
    }
    printf("sum: %d", sum);
}