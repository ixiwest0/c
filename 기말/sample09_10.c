#include <stdio.h>
#include <ctype.h>
int count_word(char* s);

int main() 
{
	int wc = count_word("the c 3 book...");
	printf("�ܾ��� ����: %d", wc);
}

int count_word(char* s)
{
	int i, wc = 0, waiting = 1;

	for (i = 0; s[i] != NULL; ++i)
		if (isgraph(s[i]))
		{
			if (waiting)
			{
				wc++;
				waiting = 0;
			}
		}
		else
			waiting = 1;
	return wc;
}
