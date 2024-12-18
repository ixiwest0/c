#include <stdio.h>

int Sum(int idx, int arr[]);

int main()
{
    int arr[] = {3, 5, 1, 10, 9, 8, 2, 6, 4, 7};

    int count = sizeof(arr) / sizeof(arr[0]) - 1;

    printf("Sum: %d", Sum(count, arr));
}

int Sum(int idx, int arr[])
{
    if(idx == 0)
    {
        return arr[0];
    }

    return arr[idx] + Sum(idx - 1, arr);
}