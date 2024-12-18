#include <stdio.h>
#define SIZE 26

int main()
{
    char alphabets[26];

    for(int i = 0; i < SIZE; i += 1)
    {
        alphabets[i] = 'A' + i;
    }

    printf("알파벳 배열: ");
    for(int i = 0; i < SIZE; i += 1)
    {
        printf("%c ", alphabets[i]);
    }
}