#include <stdio.h>

int main(void)
{
    const float Daphne_rate = 0.1, Deridre_rate = 0.05;
    const int start_balance = 100;
    int Daphne_balance = 100, Deridre_balance = 100, years = 0;

    for(; Deridre_balance <= Daphne_balance; ++years)
    {
        Daphne_balance += start_balance * Daphne_rate;
        Deridre_balance += Deridre_balance * Deridre_rate;
    }
    printf("It takes %d years for the value of Deridre's investment to exceed the value of Daphne's investment\n", years);
    printf("Daphne balance is %d$, Deridre balance is %d$\n", Daphne_balance, Deridre_balance);
    return 0;
}