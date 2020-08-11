#include <stdio.h>

int main(void)
{
    const int SIZE = 8;
    int powerOf2[SIZE];

    for(int i = 0; i < SIZE; ++i)
        powerOf2[i] = 1 << i;
    int i = 0;
    do
    {
        printf("%d ", powerOf2[i]);
        ++i;
    }
    while(i < SIZE);
    printf("\n");
    return 0;
}