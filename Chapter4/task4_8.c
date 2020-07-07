#include <stdio.h>

#define LITERS_PER_GALLON 3.785
#define KILOMETERS_PER_MILE 1.609

int main(void)
{
    float miles, gallons;
    printf("Enter the number of miles traveled and the number of gallons of gasoline consumed: ");
    scanf("%f%f", &miles, &gallons);
    printf("%.1f miles-per-gallon\n", miles / gallons);
    printf("%.1f liters-per-100-km\n", (gallons * LITERS_PER_GALLON * 100) / (miles * KILOMETERS_PER_MILE));
    return 0;
}