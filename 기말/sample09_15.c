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
		printf("%s�� �߰ߵ��� �ʾ���", sub);
	else
	{
		loc = (int)(p - s);
		printf("%s���� ù��° %s�� %d���� �߰ߵǾ���", s, sub, loc);
	}
}