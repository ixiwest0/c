#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n;
    int i = 0;
    int sum = 0;

    while(i < 5)
    {
        printf("값을 입력하시오: ");
        scanf("%d", &n);
        sum += n;
        i += 1;
    }
    printf("total: %d", sum);

}