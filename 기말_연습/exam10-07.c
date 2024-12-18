#include <stdio.h>

int main()
{
    int* p1 = 32;
    int* p2 = 4;

    printf("p1: %p, p2: %p\n", p1, p2);

    printf("p1 - p2 = %d", p1 - p2);
}