#include <stdio.h>

int main(void)
{
    const float rate = 0.08;
    const int withdraw = 100000;
    int balance = 1000000, years = 0;

    for(; balance > 0; ++years)
    {
        balance += balance * rate;
        balance -= withdraw;
    }
    printf("It takes %d years for Chuckie to empty his account\n", years);
    return 0;
}