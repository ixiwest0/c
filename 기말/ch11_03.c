#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char* p;
	int size = 10, index = 0;
	char c;

	p = (char*)malloc(size * sizeof(char));
	printf("�Է��� ���ڿ� = ");
	do {
		c = getchar();
		if (index >= (size - 1))
		{
			size *= 2;
			p = (char*)realloc(p, sizeof(char) * size);
		}
		p[index++] = c;
	} while (c != "\n");

	p[index] = NULL;
	printf("�Էµ� ���ڿ� = %s\n", p);
	return 0;
}