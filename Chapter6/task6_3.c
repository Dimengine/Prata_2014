#include <stdio.h>

int main(void)
{
    for(int i = 'F'; i >= 'A'; --i)
    {
        for(char ch = 'F'; ch >= i; --ch)
            printf("%c", ch);
        printf("\n");
    }
    return 0;
}