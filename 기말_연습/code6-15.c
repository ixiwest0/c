#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n;

    while(1)
    {
        printf("1부터 4번까지 원하는 번호를 입력하세요: ");
        scanf("%d", &n);

        if(n > 4)
        {
            continue;
        }
        break;
    }

    printf("선택한 번호는 %d입니다.", n);
}