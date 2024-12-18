#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char sl[3][100];

    printf("문자열을 입력하세요: ");

    for(int i = 0; i < 3; i += 1)
    {
        scanf("%s", sl[i]);
    }

    for(int i = 0; i < 3; i += 1)
    {
        printf("%s ", sl[i]);
    }
}