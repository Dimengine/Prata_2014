#include <stdio.h>

void print(char, int, int);

int main(void)
{
    int a, b;
    char c;

    printf("Please, enter a character and number of columns and rows: ");
    while((c = getchar()) != 'q' && scanf("%d%d", &a, &b) == 2)
    {
        print(c, a, b);
        printf("Please, enter next data(q to quit): ");
        while(getchar() != '\n')
            continue;
    }
    printf("Bye\n");
    return 0;
}

void print(char ch, int columns, int rows)
{
    for(int i = 0; i < rows; ++i)
    {
        for(int j = 0; j < columns; ++j)
            putchar(ch);
        putchar('\n');
    }
}