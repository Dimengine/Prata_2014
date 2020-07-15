#include <stdio.h>

void cube(double num);

int main(void)
{
    double number;
    printf("Enter the number: ");
    scanf("%lf", &number);
    cube(number);
    return 0;
}

void cube(double num)
{
    printf("%f ^ 3 = %f\n", num, num * num * num);
}