#define _CRT_SECURE_NO_WARNINGS
# define ENTRIES 5
#include <stdio.h>
#include <string.h>

int main()
{
	int i, index;
	char dic[ENTRIES][2][30] = {
		{"book", "å"},
		{"boy", "�ҳ�"},
		{"computer", "��ǻ��"},
		{"language", "���"},
		{"rain", "��"}
	};

	char word[30];
	printf("�ܾ �Է��Ͻÿ�: ");
	scanf("%s", word);

	index = 0;
	for (i = 0; i < ENTRIES; i++)
	{
		if (strcmp(dic[index][0], word) == 0)
		{
			printf("%s: %s\n", word, dic[index][1]);
			return 0;
		}
		index++;
	}

	printf("�������� �߰ߵ��� �ʾҽ��ϴ�.\n");
}