#include <stdio.h>

int main(void)
{
    const double cm_per_inch = 2.54;
    const double cm_per_foot = 30.48;
    double cm, inches;
    int feet;
    
    printf("Enter a height in centimeters: ");
    scanf("%lf", &cm);
    while(cm > 0)
    {
        feet = cm / cm_per_foot;
        inches = (cm - feet * cm_per_foot) / cm_per_inch; 
        printf("%.1f cm = %d feet, %.1f inches\n", cm, feet, inches);
        printf("Enter a height in centimeters (<=0 to quit): ");
        scanf("%lf", &cm);
    }
    printf("bye\n");
    return 0;
}