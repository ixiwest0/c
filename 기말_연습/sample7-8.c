#include <stdio.h>

int main()
{
    int arr[2][3] = {
        {11, 12, 13},
        {21, 22, 23},
    };

    for(int i = 0; i < 2; i += 1)
    {
        for(int j = 0; j < 3; j += 1)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}