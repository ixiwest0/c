#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_integer()
{
	int n;
	printf("정수를 입력하시오: ");
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
		printf("%d는소수가 아닙니다.\n", n);
	else
		printf("%d는 소수입니다.\n", n);
}