#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_integer()
{
	int n;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);

	return n;
}

int is_prime(int n)
{
	if (n <= 1)
		return 0;

	for (int i = 2; i <= n; i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}

int main()
{
	int n;
	n = get_integer();

	if (is_prime(n) == 0)
		printf("%d�¼Ҽ��� �ƴմϴ�.\n", n);
	else
		printf("%d�� �Ҽ��Դϴ�.\n", n);
}