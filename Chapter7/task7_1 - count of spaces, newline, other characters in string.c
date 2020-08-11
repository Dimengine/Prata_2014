#include <stdio.h>

int main(void)
{
    char ch;
    int spaces_cnt = 0, newline_cnt = 0, other_cnt = 0;

    printf("Please, enter a string: ");
    while((ch = getchar()) != '#')
    {
        if(ch == ' ')
            ++spaces_cnt;
        else if(ch == '\n')
            ++newline_cnt;
        else
            ++other_cnt;
    }
    printf("Was read %d spaces, %d newline characters, and %d other characters\n", spaces_cnt, newline_cnt, other_cnt);
    return 0;
}