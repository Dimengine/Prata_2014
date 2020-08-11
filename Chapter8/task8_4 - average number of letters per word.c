#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
    int word_cnt = 0, char_cnt = 0;
    char ch;
    bool isword = false;

    while((ch = getchar()) != EOF)
    {
        if(isword)
        {
            if(isalpha(ch))
                ++char_cnt;
            else if(isspace(ch) || ispunct(ch))
                isword = false;
        }
        else
        {
            if(isalpha(ch))
            {
                isword = true;
                ++word_cnt;
                ++char_cnt;
            }
        }
    }
    printf("The average number of letters per word is %g\n", (double)char_cnt / word_cnt);
    return 0;
}