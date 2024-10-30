#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n;
    printf("Enter num >> ");
    scanf("%d", &n);
    
    int i = 1;
    int sum = 0;
    while(1)
    {
        sum += i;
        if(i == n)
            break;
        i += 1;
    }
    printf("sum: %d", sum);
}