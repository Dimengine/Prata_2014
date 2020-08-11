#include <stdio.h>

int main(void)
{
    char inputCh;

    printf("Please, enter an uppercase letter: ");
    scanf("%c", &inputCh);

    for(char ch = 'A'; ch <= inputCh; ++ch)
    {
        for(int spaceCount = inputCh - ch; spaceCount > 0; --spaceCount)
            printf(" ");
        for(char ch2 = 'A'; ch2 < ch; ++ch2)
            printf("%c", ch2);
        for(char ch3 = ch; ch3 >= 'A'; --ch3)
            printf("%c", ch3);
        printf("\n");
    }
    return 0;
}