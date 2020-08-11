#include <stdio.h>

int main(void)
{
    char ch;
    int substitutions = 0;

    printf("Please, enter a string: ");
    while((ch = getchar()) != '#')
    {
        if(ch == '.')
        {
            putchar('!');
            ++substitutions;
        }
        else if(ch == '!')
        {
            putchar('!');
            putchar('!');
            ++substitutions;
        }
        else
            putchar(ch);
    }
    printf("\nNumber of substitutions: %d\n", substitutions);
    return 0;
}