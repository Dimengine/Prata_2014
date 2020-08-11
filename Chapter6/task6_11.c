#include <stdio.h>

int main(void)
{
    const int SIZE = 8;
    int array[SIZE];

    printf("Please, enter 8 integer numbers: ");
    for(int i = 0; i < SIZE; ++i)
        scanf("%d", &array[i]);
    for(int j = SIZE - 1; j >= 0; --j)
        printf("%d ", array[j]);
    printf("\n");
    return 0;
}