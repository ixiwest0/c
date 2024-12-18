#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n;
    int i = 1;
    int factorial = 1;

    while(factorial <= 1000)
    {
        i += 1;
        factorial *= i;
    }

    printf("%d! = %d", i, factorial);
}