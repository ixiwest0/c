#include <stdio.h>
#define SIZE 5

int main()
{
    int a[SIZE] = {1, 2, 3, 4, 5};
    int b[SIZE];

    for(int i = 0; i < SIZE; i += 1)
    {
        b[i] = a[i];
    }

    printf("배열 b: ");
    for(int i = 0; i < SIZE; i += 1)
    {
        printf("%d ", b[i]);
    }
}