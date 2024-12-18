#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_int()
{
    int n;
    printf("정수를 입력하시오: ");
    scanf("%d", &n);
    return n;
}

int is_prime(int n)
{
    for(int i = 2; i < n; i += 1)
    {
        if(n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n = get_int();
    if(is_prime(n))
        printf("소수가 맞습니다");
    else
        printf("소수가 아닙니다.");
}