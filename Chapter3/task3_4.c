#include <stdio.h>

int main()
{
    double input;

    printf("Enter a floating-point value: ");
    scanf("%lf", &input);

    printf("fixed-point notation: %lf\n", input);
    printf("exponential notation: %le\n", input);
    printf("p notation: %a\n", input);
    return 0;
}