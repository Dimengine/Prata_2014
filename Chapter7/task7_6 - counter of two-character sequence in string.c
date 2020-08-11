#include <stdio.h>

int main(void)
{
    char ch, prev_char;
    int ei_cnt = 0;

    printf("Please, enter a string: ");
    prev_char = getchar();
    while((ch = getchar()) != '#')
    {
        if(prev_char == 'e' && ch == 'i')
            ++ei_cnt;
        prev_char = ch;
    }
    printf("The sequence ei occurs %d times\n", ei_cnt);
    return 0;
}