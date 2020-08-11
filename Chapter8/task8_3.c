#include <stdio.h>
#include <ctype.h>

int main(void)
{
    unsigned upper_cnt = 0, lower_cnt = 0, other_cnt = 0;
    char ch;

    while ((ch = getchar()) != EOF)
    {
        if(isupper(ch))
            ++upper_cnt;
        else if(islower(ch))
            ++lower_cnt;
        else
            ++other_cnt;
    }
    printf("The number of uppercase letters is %u, the number of lowercase letters is %u, "
           "and the number of other characters is %u\n", upper_cnt, lower_cnt, other_cnt);
    return 0;
}