#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	int lower_case_count = 0;
	int upper_case_count = 0;
	int digit_count = 0;
	char pass[100];
	int len;

	printf("�н����带 �Է��Ͻÿ�: ");
	gets_s(pass, sizeof(pass));
	len = strlen(pass);
	if (len < 7)
	{
		printf("��ȿ�� ��ȣ�� �ƴմϴ�.\n");
		exit(1);
	}

	for (int i = 0; i < len; i++)
	{
		if (islower(pass[i])) ++lower_case_count;
		if (isupper(pass[i])) ++upper_case_count;
		if (isdigit(pass[i])) ++digit_count;
	}

	if (lower_case_count > 0 && upper_case_count > 0 && digit_count > 0)
		printf("���� ��ȣ�Դϴ�.");
	else
		printf("��ȿ�� ��ȣ�� �ƴմϴ�.");
}