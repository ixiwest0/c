#include <stdio.h>

int main()
{
	unsigned char uc = 0b10000000;
	printf("uc >> 7: %d\n", uc >> 7);

	char c = -0b1;
	printf("c >> 7: %d", c >> 7);
}