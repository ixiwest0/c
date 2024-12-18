#include <stdio.h>

int global_variable = 0;

void increment()
{
    global_variable += 1;
}

void print_global()
{
    global_variable += 1;
    printf("result = %d", global_variable);
}

int main()
{
    global_variable += 1;

    increment();

    print_global();
}