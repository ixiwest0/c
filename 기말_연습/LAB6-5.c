#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n;
    int sum = 0;

    do
    {
        printf("더하고 싶은 수를 입력하세요 > ");
        scanf("%d", &n);
        sum += n;
    } while (n != 0);
    
    printf("total: %d", sum);
}