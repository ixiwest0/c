#include <stdio.h>

int main()
{
    char str[64];
    char str1[] = "난생처음";
    char str2[] = "C 프로그래밍";

    int si = 0;
    
    for(int i = 0; i < sizeof(str1); i += 1)
    {
        if(str1[i] != '\0')
        {
            str[si] = str1[i];
            si += 1;
        }
        else
            break;
    }

    str[si] = ' ';

    for(int i = 0; i < sizeof(str2); i += 1)
    {
        if(str2[i] != '\0')
        {
            str[si] = str2[i];
            si += 1;
        }
        else
            break;
    }

    printf("%s", str);
}