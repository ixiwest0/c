#include <stdio.h>

int main()
{
    char str[128] = "abcdefghijklmnop";

    for(int i = 0; i < 128; i += 1)
    {
        if(str[i] == '\0')
        {
            printf("문자열의 길이: %d", i);
            break;
        }
    }
}