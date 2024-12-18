#include <stdio.h>

int main()
{
    char src[] = "Action speaks";
    char dst[100];

    printf("원본 문자열: %s\n", src);

    for(int i = 0; src[i] != 0; i += 1)
    {
        dst[i] = src[i];
    }

    printf("복사된 문자열: %s", dst);
}