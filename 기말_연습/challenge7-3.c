#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int idx;
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    
    printf("탐색할 값을 입력하시오: ");
    scanf("%d", &idx);

    for(int i = 0; i <= 10; i += 1)
    {
        if(arr[i] == idx)
        {
            printf("탐색 성공 인덱스 = %d", i);
            break;
        }
    }

}