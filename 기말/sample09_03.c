#include <stdio.h>

int main()
{
	int c;
	puts("Enter TExt. Include a dot('.') in a sentence to exit:");
		do {
			c = getchar();
			putchar(c);
		} while (c != '.');
}