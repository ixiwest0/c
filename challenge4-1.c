#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    double f, c;
    printf("화씨온도를 입력해주세요. >> ");
    scanf("%lf", &f);
    c = 1.8 * (f - 32);
    printf("f to c >> %lf", c);
}