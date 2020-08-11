#include <stdio.h>

float func(float a, float b);

int main(void)
{
    float a, b;

    printf("Pease, input two floating-point numbers: ");
    while(scanf("%f%f", &a, &b) == 2)
    {
        printf("The value of their difference divided by their product: ");
        printf("%f\n", func(a, b));
        printf("Pease, input two float value or q to exit: ");
    }
    printf("Bye!\n");
    return 0;
}

float func(float a, float b)
{
    return (a - b) / (a * b);
}