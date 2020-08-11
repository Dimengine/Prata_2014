#include <stdio.h>

double power(double, int);

int main()
{
    double num;
    int pow;
    printf("Please, enter the number and power: ");
    while (scanf("%lf%d", &num, &pow) == 2)
    {
        printf("%g to the %d is %g\n", num, pow, power(num, pow));
        printf("Enter next number and power(q to quit)\n");
    }
    printf("Bye\n");
    return 0;
}

double power(double n, int p)
{
    double pow = 1;
    int i;

    if(n != 0)
    {
        if(p == 0)
            return 1;
        else if(p > 0)
            pow = n * power(n, p - 1);
        else if(p < 0)
            pow = 1 / n * power(n, p + 1);
    }
    else if (p != 0)
        return 0;
    else
    {
        printf("0 to the 0 is undefined, but we using a value of 1\n");
        return 1;
    }
    return pow;
}