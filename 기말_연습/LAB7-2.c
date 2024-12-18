#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5

int main()
{
    int scores[SIZE];
    int sum = 0;
    int avg = 0;

    for(int i = 0; i < SIZE; i += 1)
    {
        printf("학생들의 성적을 입력하시오: ");
        scanf("%d", &scores[i]);
    }

    for(int i = 0; i < SIZE; i += 1)
    {
        sum += scores[i];
    }

    avg = sum / SIZE;

    printf("avg = %d", avg);
}