#include <stdio.h>

int main(void)
{
    int chInRow = 1;
    for(char ch = 'A'; ch <= 'U';)
    {
        for(int i = 0; i < chInRow; ++i, ++ch)
            printf("%c", ch);
        printf("\n");
        ++chInRow;
    }
    return 0;
}