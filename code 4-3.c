#include <stdio.h>

int main() {
	int a, b;

	a = 1;
	b = ++a;
	printf("a: %d, b: %d\n", a, b);

	a = 1;
	b = a++;
	printf("a: %d, b: %d", a, b);
}