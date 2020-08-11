#include <stdio.h>

void chline(char, int, int);

int main(void)
{
    int a, b;
    char c;

    printf("Please, enter a character, first and last columns: ");
    while((c = getchar()) != 'q' && scanf("%d%d", &a, &b) == 2)
    {
        chline(c, a, b);
        printf("\nPlease, enter next data(q to quit): ");
        while(getchar() != '\n')
            continue;
    }
    printf("Bye\n");
    return 0;
}

void chline(char ch, int i, int j)
{
    int column = 0;
    while(column++ < j)
    {
        if(column < i)
            putchar(' ');
        else
            putchar(ch);
    }
}