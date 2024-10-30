#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a, b;
    printf("두 정수를 공백으로 구분하여 입력하세요.\n");
    scanf("%d%d", &a, &b);
    char* tag = (a > b) ? ">" : "<";
    printf("%d %s %d", a, tag, b);
}