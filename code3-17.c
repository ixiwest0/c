#include <stdio.h>

int main()
{
	char c1 = 128;
	char c2 = -129;
	printf("c1: %d\nc2:%d\n", c1, c2);

	unsigned char uc1 = 256;
	unsigned char uc2 = -1;
	printf("uc1: %u\nuc2: %u", uc1, uc2);
}