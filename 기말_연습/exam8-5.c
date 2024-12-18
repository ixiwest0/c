#include <stdio.h>
int compute_sum(int n);

int main()
{
    int sum = compute_sum(100);
    printf("1부터 100까지의 합 = %d", sum);
}

int compute_sum(int n)
{
    int sum = 0;
    for(int i = 0; i <= n; i += 1)
    {
        sum += i;
    }

    return sum;
}