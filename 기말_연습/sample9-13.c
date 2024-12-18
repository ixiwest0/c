#include <stdio.h>
#include <ctype.h>

int count_word(char *s);

int main()
{
    int wc = count_word("the c book...");
    printf("단어의 개수: %d", wc);
}

int count_word(char *s)
{
    int count = 0;
    int check = 1;

    for(int i = 0; s[i] != '\0'; i += 1)
    {
        if(isalpha(s[i]))
        {
            if(check)
            {
                count += 1;
                check = 0;
            }
        }
        else
        {
            check = 1;
        }
    }

    return count;
}