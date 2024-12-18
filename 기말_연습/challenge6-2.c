#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n;
    int i = 1;
    printf("Enter num: ");
    scanf("%d", &n);

    while(i <= n)
    {
        if(n % i == 0)
            printf("%d ", i);
        i += 1;
    }
}
