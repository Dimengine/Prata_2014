#include <stdio.h>

int main(void)
{
    float a, b;

    printf("Pease, input two floating-point numbers: ");
    while(scanf("%f%f", &a, &b) == 2)
    {
        printf("The value of their difference divided by their product: ");
        printf("%f\n", (a - b) / (a * b));
        printf("Pease, input two float value or q to exit: ");
    }
    printf("Bye!\n");
    return 0;
}