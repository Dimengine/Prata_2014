#include <stdio.h>

int main(void)
{
    const int SIZE = 255;
    char array[SIZE];
    int i = 0;

    printf("Please, enter a line: ");
    while(scanf("%c", &array[i]) && array[i] != '\n')
        ++i;
    for(--i; i >= 0; --i)
        printf("%c", array[i]);
    printf("\n");
    return 0;
}