#include <stdio.h>

void larger_of(double *x, double *y) { (*x > *y) ? (*y = *x) : (*x = *y);} 

int main(void)
{
    double a, b;

    printf("Please, enter two floating-point numbers: ");
    while(scanf("%lf%lf", &a, &b) == 2)
    {
        larger_of(&a, &b);
        printf("Now a = %g and b = %g\n", a, b);
        printf("Please, enter next data(q for quit): ");
    }
    printf("Bye\n");
    return 0;
}