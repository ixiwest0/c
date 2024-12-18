#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void PrintMenu()
{
    printf("'c': 화씨에서 섭씨로 변환\n");
    printf("'f': 섭씨에서 화씨로 변환\n");
    printf("'q': 종료\n");
}

double C2F(double c_temp)
{
    return 9.0 / 5.0 * c_temp + 32;
}

double F2C(double f_temp)
{
    return (f_temp - 32.0) * 5.0 / 9.0;
}

int main()
{
    char choice;
    double temp;
    
    while(1)
    {
        PrintMenu();
        printf("메뉴에서 선택하시오\n");
        choice = getchar();
        if(choice == 'q')
            break;

        else if(choice == 'c')
        {
            printf("temp: ");
            scanf("%lf", &temp);

            printf("%.2lfF >> %.2lfC\n\n", temp, F2C(temp));
        }

        else if(choice == 'f')
        {
            printf("temp: ");
            scanf("%lf", &temp);

            printf("%.2lfC >> %.2lfF\n\n", temp, C2F(temp));
        }

        getchar();
    }
    return 0;
}