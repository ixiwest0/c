#include <stdio.h>

void swap(int *px, int *py);

int main()
{
    int a = 100;
    int b = 200;

    printf("a = %d, b= %d\n", a, b);

    swap(&a, &b);

    printf("a = %d, b= %d\n", a, b);
}

void swap(int *px, int *py)
{
    int tmp = *px;

    *px = *py;
    *py = tmp;
}