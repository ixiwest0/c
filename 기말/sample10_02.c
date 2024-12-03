#include <stdio.h>

int main()
{
	int i = 10;
	double f = 12.3;

	int *pi = &i;
	double* pf = &f;

	printf("%p %p\n", pi, &i);
	printf("%d %p\n\n", *pi, pi);

	printf("%p %p\n", pf, &f);
	printf("%f %p\n\n", *pf, pf);
}