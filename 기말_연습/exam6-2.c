#include <stdio.h>

int main()
{
    int n = 1;

    printf("====================\n");
    printf("   n      n의 제곱 \n");
    printf("====================\n");

    while(n <= 10)
    {
        printf("%4d %7d\n", n, n * n);
        n += 1;
    }
}