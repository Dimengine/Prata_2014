#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    unsigned number;
    bool isPrime = true;

    printf("Please, enter a positive integer: ");
    scanf("%ud", &number);

    printf("Prime numbers between 1 to %d: ", number);
    for(int i = 2; i <= number; ++i)
    {
        for(int j = 2; j * j <= i; ++j)
        {
            if(i % j != 0)
                continue;
            else 
            {
                isPrime = false;
                break;
            }
        }
        if(isPrime)
            printf("%d ", i);
        isPrime = true;
    }
    printf("\n");
    return 0;
}