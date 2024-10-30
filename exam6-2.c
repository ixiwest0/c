#include <stdio.h>

int main()
{
    int n = 1;
    while(n <= 10)
    {
        printf("%d => %d\n", n, n * n);
        n += 1;
    }
}