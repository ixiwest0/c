#include <stdio.h>

int Sum(int from, int to)
{
    int sum = 0;

    for(int i = from; i <= to; i += 1)
    {
        sum += i;
    }

    return sum;
}

int main()
{
    int result = Sum(1, 3);

    printf("Sum: %d", result);
}