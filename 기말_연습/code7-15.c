#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "난생처음 c 프로그래밍";

    int s_len1 = sizeof(str) / sizeof(str[0]) - 1;
    int s_len2 = strlen(str);

    printf("s_len1: %d \ns_len2: %d", s_len1, s_len2);
}