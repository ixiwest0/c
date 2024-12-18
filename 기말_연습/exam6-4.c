#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int i = 1;
    int n;
    int sum = 0;

    printf("정수를 입력하시오:");
    scanf("%d", &n);

    while(i <= n)
    {
        sum += i;
        i += 2;
    }

    printf("1부터 %d까지의 홀수의 합은 %d입니다.", n, sum);
}