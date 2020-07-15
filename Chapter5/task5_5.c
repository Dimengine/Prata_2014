#include <stdio.h>

int main(void)
{
    int count = 0, sum = 0, number;

    printf("Enter the number: ");
    scanf("%d", &number);

    while(count++ < number)
        sum = sum + count;
    printf("sum = %d\n", sum);
    return 0;
}