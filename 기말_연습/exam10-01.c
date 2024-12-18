#include <stdio.h>

int main()
{
    int i = 10;
    float f = 3.14;
    char c = 'c';

    printf("i의 주소: %p\n", &i);
    printf("f의 주소: %p\n", &f);
    printf("c의 주소: %p\n", &c);
}