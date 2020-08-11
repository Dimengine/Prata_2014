#include <stdio.h>
#include <ctype.h>

int position_in_alphabet(char);

int main(void)
{
    char c;

    printf("Please enter some text: ");
    while((c = getchar()) != EOF)
    {
        if (c == '\n')
            printf("\\n - %d\n", position_in_alphabet(c));
        else
            printf("%c - %d\n", c, position_in_alphabet(c));
    }
    return 0;
}

int position_in_alphabet(char ch)
{
    if(isalpha(ch))
    {
        if(isupper(ch))
            return ch - 'A' + 1;
        else
            return ch - 'a' + 1;
    }
    else return -1;
}