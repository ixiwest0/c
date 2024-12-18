#include <stdio.h>
double c2f(double temp);

int main()
{
    printf("섭씨 %.2lfc는 화씨 %.2lfF입니다.", 32.0, c2f(32.0));
}

double c2f(double temp)
{
    return 9.0 / 5.0 * temp + 32;
}