#include <stdio.h>

int main()
{
	char str[] = "abcdefghijklmnopqrstuvwxyz0123456789";

	for (int i = 0; i < 128; i++)
	{
		if (str[i] == '\0')
		{
			printf("���ڿ��� ����: %d", i);
			break;
		}
		
	}
}