#include <stdio.h>

int main()
{
    int i = 1000;
    int *pi = &i;

    printf("p = %p\n", pi);
    printf("&i = %p\n", &i);

    printf("i = %d\n", i);
    printf("*pi = %d\n", *pi);
}