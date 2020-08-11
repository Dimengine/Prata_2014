#include <stdio.h>


void to_base_n(unsigned long, int);

int main(void)
{
    unsigned long number;
    int base;

    printf("Please enter the number and base: ");
    while (scanf("%lu%d", &number, &base) == 2)
    {
        printf("%lu in base %d is ", number, base);
        to_base_n(number, base);
        printf("\nPlease, enter next number(q to quit): ");
    }
    printf("Bye\n");
    return 0;
}

void to_base_n(unsigned long n, int base)
{
    if(base >= 2 && base <= 10)
    {
        int r;
        r = n % base;
        if(n >= base)
            to_base_n(n / base, base);
        printf("%d", r);
    }
    else
        printf("undefined\nBase must be in range 2 to 10");
    return;
}