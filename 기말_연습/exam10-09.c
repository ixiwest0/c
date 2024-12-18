#include <stdio.h>

void swap(int x, int y);

int main()
{
    int a = 100;
    int b = 200;

    printf("a = %d b = %d\n", a, b);

    swap(a, b);

    printf("a = %d b = %d\n", a, b);
}

void swap(int x, int y)
{
    int tmp = x;

    x = y;
    y = tmp;

    printf("a = %d b = %d\n", x, y);
}