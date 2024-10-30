#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n;

    printf("세 자리 자연수를 입력하세오.\n");
    scanf("%d", &n);

    printf("%d, %d, %d", n / 100, (n % 100) / 10, n % 10);
     
}