#include <stdio.h>
#include <string.h>
int main()
{
	char str[ ] = "����ó�� C ���α׷���";

	int s_len1 = sizeof(str) / sizeof(str[0]) - 1;
	int s_len2 = strlen(str);

	printf("s_len1: %d\nstr_len: %d", s_len1, s_len2);
}