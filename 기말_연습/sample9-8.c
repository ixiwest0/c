#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char name[100];
    char address[100];

    printf("이름을 입력하세요. ");
    scanf("%s", name);

    printf("주소를 입력하세요. ");
    scanf("%s", address);

    printf("안녕하세요. %s에 사는 %s씨.", address, name);
}