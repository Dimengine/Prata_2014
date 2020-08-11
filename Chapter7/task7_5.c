#include <stdio.h>

int main(void)
{
    char ch;
    int substitutions = 0;

    printf("Please, enter a string: ");
    while((ch = getchar()) != '#')
    {
        switch(ch)
        {
            case '.':
            {
                putchar('!');
                ++substitutions;
                break;
            }
            case '!':
            {
                putchar('!');
                putchar('!');
                ++substitutions;
                break;
            }
            default:
                putchar(ch);
        }
    }
    printf("\nNumber of substitutions: %d\n", substitutions);
    return 0;
}