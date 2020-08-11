#include <stdio.h>

int main(void)
{
    char ch;
    int counter = 0;

    printf("Please, enter a string: ");
    while((ch = getchar()) != '#')
    {
        printf("%c-%d ", ch, ch);
        ++counter;
        if(counter % 8 == 0)
            printf("\n");
    }
    printf("\n");
    return 0;
}