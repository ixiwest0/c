#include <stdio.h>

int main()
{
    char str[30] = "A b c";

    int i = 0;

    while(str[i] != '\0')
    {
        i += 1;
    }

    printf("length: %d", i);
}