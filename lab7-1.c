#include <stdio.h>

int main()
{
	char alphabets[26];

	for (int i = 0; i < 26; i += 1)
	{
		alphabets[i] = 'A' + i;
	}

	for (int i = 0; i < 26; i += 1)
	{
		printf("%c ", alphabets[i]);
	}
}