#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand((unsigned)time(NULL));
    int answer = rand() % 100;
    int guess;
    int tries = 0;

    do
    {
        printf("Guess what: ");
        scanf("%d", &guess);

        if(guess < answer)
        {
            printf("UP\n");
        }
        else if (guess > answer)
        {
            printf("DOWN\n");
        }
        
        tries += 1;
    } while (guess != answer);

    printf("축하합니다. 정답이에요.\n시도 횟수: %d", tries);
    
}