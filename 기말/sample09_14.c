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
		printf("%c�� �߰ߵ��� �ʾ���.", c);
	else
	{
		loc = (int)(p - s);
		printf("%s���� ù��° %c�� %d���� �߰ߵǾ���", s, c, loc);
	}

}