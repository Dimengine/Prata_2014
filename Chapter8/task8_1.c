#include <stdio.h>

int main(void)
{
    int count;
    while (getchar() != EOF)
        ++count;
    printf("The number of characters in input is %d\n", count);
    return 0;
}