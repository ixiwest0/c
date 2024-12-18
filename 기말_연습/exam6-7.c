#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    long long n;
    int count = 0;

    printf("정수를 입력하시오: ");
    scanf("%lld", &n);

    do
    {
        count += 1;
        n /= 10;
    }
    while(n != 0);

    printf("총 자릿수: %d", count);
}