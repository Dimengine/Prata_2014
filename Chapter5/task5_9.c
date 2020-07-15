#include <stdio.h>

void Temparatures(double temp_F);

int main(void)
{
    double temp;

    printf("Enter a Fahrenheit temparature: ");
    while(scanf("%lf", &temp))
    {
        Temparatures(temp);
        printf("Enter the next Fahrenheit temparature (q to quit): ");
    }
    printf("bye\n");
    return 0;
}

void Temparatures(double temp_F)
{
    const double K1 = 5.0 / 9.0;
    const double K2 = 32.0;
    const double K3 = 273.16;

    double temp_C = K1 * (temp_F - K2);
    double temp_K = temp_C + K3;
    printf("%.2fF equals to %.2fC or %.2fK\n", temp_F, temp_C, temp_K);
}