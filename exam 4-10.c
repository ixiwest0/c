#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int compare(int x, int y)
{
	int r = x - y < 0 ? -1 : x == y ? 0 : 1;

	return r;
}

int main()
{
	int x, y;
	printf("�� ������ �������� �����Ͽ� �Է��ϼ���.\n");
	scanf("%d%d", &x, &y);
}