#include <string.h>
#include <stdio.h>

int main()
{
	char s[] = "A bird in hand is worth two in the bush";
	char sub[] = "bird";
	char* p;
	int loc;

	p = strstr(s, sub);

	if (p == NULL)
		printf("%s가 발견되지 않았음", sub);
	else
	{
		loc = (int)(p - s);
		printf("%s에서 첫번째 %s가 %d에서 발견되었음", s, sub, loc);
	}
}