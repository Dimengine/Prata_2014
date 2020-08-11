#include <stdio.h>

void func(double *first, double *second, double *third);

int main(void)
{
    double a, b, c;

    printf("Please, enter three floating-point numbers: ");
    while(scanf("%lf%lf%lf", &a, &b, &c) == 3)
    {
        func(&a, &b, &c);
        printf("Now a = %g and b = %g and c = %g\n", a, b, c);
        printf("Please, enter next data(q for quit): ");
    }
    printf("Bye\n");
    return 0;
}

void func(double *first, double *second, double *third)
{
    double temp;

    if(*first > *second)
    {
        temp = *first;
        *first = *second;
        *second = temp;
    }
    if(*first > *third)
    {
        temp = *first;
        *first = *third;
        *third = temp;
    }
    if(*second > *third)
    {
        temp = *second;
        *second = *third;
        *third = temp;
    }
}