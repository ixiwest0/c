#include <stdio.h>

int main()
{
    int i = 10;
    double f = 12.3;

    int *pi = &i;
    double *pf = &f;

    printf("%d %p\n", *pi, pi);
    printf("%f %p\n", *pf, &f);
}