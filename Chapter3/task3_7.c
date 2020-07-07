#include <stdio.h>

int main(void)
{
    int height_in_centimeters; 
    double height_in_inches;

    printf("Enter your height in centimeters: ");
    scanf("%d", &height_in_centimeters);
    height_in_inches = height_in_centimeters / 2.54;
    printf("Your height in inches is %lf\n", height_in_inches);
    return 0;
}