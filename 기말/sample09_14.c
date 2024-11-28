#include <string.h>
#include <stdio.h>

int main()
{
	char s[] = "language";
	char c = 'g';
	char* p;
	int loc;

	p = strchr(s, c);

	if (p == NULL)
		printf("%c가 발견되지 않았음.", c);
	else
	{
		loc = (int)(p - s);
		printf("%s에서 첫번째 %c가 %d에서 발견되었음", s, c, loc);
	}

}