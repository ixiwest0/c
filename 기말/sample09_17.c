#include <stdio.h>
#include <string.h>

int main()
{
	char key[] = "C";
	char buffer[80] = "";
	do
	{
		printf("�Ӻ���� ��ġ�� ���� ���� ���Ǵ� ����?");
		gets_s(buffer, sizeof(buffer));
	} while (strcmp(key, buffer) != 0);

	printf("�¾ҽ��ϴ�.");
}