#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    double x;

    printf("실수를 입력하세요.\n");
    scanf("%lf", &x);

    printf("Gaus: %d", (x >= 0) ? (int)x : (int)x - 1);
}