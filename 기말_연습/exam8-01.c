#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_int()
{
    int n;
    printf("정수를 입력하시오: ");
    scanf("%d", &n);

    return n;
}

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int a, b;
    a = get_int();
    b = get_int();

    printf("%d + %d = %d", a, b, add(a, b));
}