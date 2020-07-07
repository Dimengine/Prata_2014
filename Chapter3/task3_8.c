#include <stdio.h>

int main(void)
{
    double pints, cups, ounces, tablespoons, teaspoons;

    printf("Enter a volume in cups: ");
    scanf("%lf", &cups);

    pints = cups / 2;
    ounces = cups * 8;
    tablespoons = ounces * 2;
    teaspoons = tablespoons * 3;

    printf("The equivalent volume of %.2lf cups:\n", cups); 
    printf("in pints is %.2lf,\nin ounces is %.2lf,\nin tablespoons is %.2lf,\nin teaspoons is %.2lf\n", pints, ounces, tablespoons, teaspoons);
    return 0;
}