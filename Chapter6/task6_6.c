#include <stdio.h>

int main(void)
{
    int lower_limit, upper_limit;

    printf("Please, input the lower and upper limits for the table: ");
    scanf("%d%d", &lower_limit, &upper_limit);

    printf("integer    square      cube\n");
    for(int i = lower_limit; i <= upper_limit; ++i)
    {
        printf("%7d   %7d   %7d", i, i * i, i * i * i);
        printf("\n");
    }
    return 0;
}