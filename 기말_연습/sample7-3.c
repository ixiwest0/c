#include <stdio.h>

int main()
{
    int scores[] = {1, 2, 3, 4, 5};

    int size;

    size = sizeof(scores) / sizeof(scores[0]);

    printf("%d", size);
}