#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int prime[] = {2, 3, 5, 7, 11, 13,17, 19};
    int n;
    int i = 0;

    

    do
    {
        printf("20이하의 정수를 입력하세요. ");
        scanf("%d", &n);
    } while (n > 20);

    for(i = 0; i <= 8; i += 1)
    {
        if(prime[i] == n)
        {
            printf("소수가 맞습니다.");
            return 0;
        }
    }

    printf("소수가 아닙니다.");
    
}