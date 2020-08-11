#include <stdio.h>

double min(double x, double y) { return x < y ? x : y; }

int main(void)
{
    double a, b;

    printf("Please, enter two numbers: ");
    while(scanf("%lf%lf", &a, &b) == 2)
    {
        printf("Smaller number is: %g\n", min(a,b));
        printf("Please, enter next two numbers(q to quit): ");
    }
    printf("Bye\n");
    return 0;
}