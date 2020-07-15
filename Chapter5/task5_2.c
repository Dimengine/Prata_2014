#include <stdio.h>

int main(void)
{
    int number;

    printf("Please, enter a number: ");
    scanf("%d", &number);

    int count = 0;
    while(count <= 10)
    {
        printf("%d ", number + count);
        ++count;
    }
    printf("\n");
    return 0;
}