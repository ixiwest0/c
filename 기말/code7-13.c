#include <stdio.h>

int main()
{
	int arr[] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
	int a_len = sizeof(arr) / sizeof(arr[0]);

	char str[] = "C Programming";
	int s_len = sizeof(str) / sizeof(str[0]) - 1;

	printf("a_len: %d\ns_len: %d", a_len, s_len);
}