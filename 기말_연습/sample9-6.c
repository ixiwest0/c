#include <stdio.h>

int main()
{
    int ch;
    while ((ch = getchar()) != EOF)
    {
        putchar(ch); // 입력된 문자를 출력
    }
    return 0;
}
