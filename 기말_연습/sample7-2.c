#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ROWS 3
#define COLS 5

int main()
{
    double final_score;

    int scores[ROWS][COLS] = {
        {87, 98, 80, 76, 3},
        {99, 89, 90, 90, 0},
        {65, 68, 50, 49, 0},
    };

    for(int i = 0; i < ROWS; i += 1)
    {
        final_score = scores[i][0] * 0.3 + scores[i][1] * 0.4 + scores[i][2] * 0.2 + scores[i][3] * 0.1 - scores[i][4];

        printf("학생 #%d의 최종 성적 = %.2lf\n", i + 1, final_score);
    }
}