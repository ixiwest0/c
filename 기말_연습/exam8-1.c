#include <stdio.h>

void print_stars()
{
    for(int i = 0; i < 30; i += 1)
    {
        printf("*");
    }
    printf("\n");
}

int main()
{
    print_stars();
    printf("Hello World!\n");
    print_stars();
}