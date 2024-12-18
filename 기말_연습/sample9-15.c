#include <string.h>
#include <stdio.h>

int main()
{
    char str[] = "language";
    char c = 'g';
    char *p;
    int loc;

    p = strchr(str, c);

    if(p == NULL)
        printf("발견되지 않음");
    else
    {
        loc = (int)(p-str);
        printf("%s에서 첫번째 %c가 %d에서 발견되었음.", str, c, loc);
    }
}