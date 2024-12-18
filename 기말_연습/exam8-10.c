#include <stdio.h>
#include <time.h>

int main()
{
    time_t start, end;

    start = time(NULL);

    printf("10초가 지나면 아무 키나 누르세요.\n");

    while(1)
    {
        if(getchar())
            break;
    }

    printf("종료되었습니다.\n");

    end = time(NULL);

    printf("경과시간: %ld초", end - start);
}