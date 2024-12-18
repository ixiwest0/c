#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char pass[100];
    int len;

    printf("패스워드를 입력하시오: ");
    gets_s(pass, sizeof(pass));

    len = strlen(pass);

    if(len < 7)
    {
        printf("유효한 암호가 아닙니다.");
        exit(1);
    }

    int lower = 0;
    int upper = 0;
    int digit = 0;

    for(int i = 0; i < len; i += 1)
    {
        if(islower(pass[i]))
            lower += 1;
        else if(isupper(pass[i]))
            upper += 1;
        else if(isdigit(pass[i]))
            digit += 1;
    }

    if(lower == 0 || upper == 0 || digit == 0)
    {
        printf("유효한 암호가 아닙니다.");
        return 0;
    }

    printf("암호 성공");
    
}