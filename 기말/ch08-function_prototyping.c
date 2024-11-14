#include <stdio.h>
double c_to_f(double c_temp);

int main()
{
	printf("¼·¾¾ %.2lfµµ´Â È­¾¾ %.2lfµµ ÀÔ´Ï´Ù.", 36.0, c_to_f(36.0));
}

double c_to_f(double c_temp)
{
	return 9.0 / 5.0 * c_temp + 32;
}