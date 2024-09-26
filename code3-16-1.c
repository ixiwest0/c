#include <stdio.h>
#include <limits.h>

int main(void)
{
	short s_money = SHRT_MAX;
	unsigned short u_money = USHRT_MAX;

	s_money = s_money + 1;
	u_money = u_money + 1;

	printf("s_money = %d\n", s_money);
	printf("u_money = %u", u_money);
}