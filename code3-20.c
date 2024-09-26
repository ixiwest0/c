#include <stdio.h>

int main()
{
	char a = 65;
	printf("%c = %d\n", a, a);

	char b = 'B';
	printf("%c = %d\n", b, b);
	printf("%c = %d\n", b + 1, b + 1);

	printf("%c = %d", a + 32, a + 32);
}