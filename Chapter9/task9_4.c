#include <stdio.h>

double harmonic_mean(double a, double b) { return 1 / ((1 / a + 1 / b) / 2); }

int main(void)
{
    double a, b;

    printf("Please, enter two floating-point numbers: ");
    while(scanf("%lf%lf", &a, &b) == 2)
    {
        printf("Harmonic mean for %g and %g is %g\n", a, b, harmonic_mean(a, b));
        printf("Please, enter next data(q to quit): ");
    }
    printf("Bye\n");
    return 0;
}