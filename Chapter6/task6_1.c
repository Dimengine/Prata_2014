#include <stdio.h>

int main(void)
{
    const int SIZE = 26;
    char alphabet[SIZE];

    for(int i = 0; i < SIZE; ++i)
        alphabet[i] = 'a' + i;
    for(int i = 0; i < SIZE; ++i)
        printf("%c", alphabet[i]);
    printf("\n");
    return 0;
}