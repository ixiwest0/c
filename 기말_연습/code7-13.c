#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int a_len = sizeof(arr) / sizeof(arr[0]);

    char str[] = "ABC DE";
    int s_len = sizeof(str) /sizeof(str[0]);

    printf("a_len: %d \ns_len: %d", a_len, s_len - 1);
}