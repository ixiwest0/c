#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char letter;

    while(1)
    {
        printf("소문자를 입력하시오: ");
        scanf(" %c", &letter);

        if(letter < 'a' || letter > 'z')
        {
            continue;
        }

        letter -= 32;
        
        break;
    }
    printf("result = %c", letter);
}