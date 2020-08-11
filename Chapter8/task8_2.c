#include <stdio.h>

int main(void)
{
    char ch;
    int count = 0;

    while ((ch = getchar()) != EOF)
    {
        if(ch == 9)
            printf("\\t-%d ", ch);
        else if(ch == 10)
            printf("\\n-%d ", ch);
        else if(ch <= 32)
            printf("^%c-%d ", ch + 64, ch);
        else
            printf("%c-%d ", ch, ch);
        ++count;
        if(count % 10 == 0)
            printf("\n");
    }
    return 0;
}