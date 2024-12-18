#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int gugudan[8][9];

    for(int i = 0; i < 8; i += 1)
    {
        for(int j = 0; j < 9; j += 1)
        {
            gugudan[i][j] = (i + 2) * (j + 1);
            printf("%d ", gugudan[i][j]);
        }
        printf("\n");
    }

    int x, y;

    printf("구구단의 단과 항을 공백으로 구분하여 입력하세요. ");
    scanf("%d%d", &x, &y);

    printf("%d * %d = %d", x, y, gugudan[x - 2][y - 1]);
}