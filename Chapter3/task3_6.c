#include <stdio.h>

int main()
{
    int amount_in_quarts, amount_in_grams;
    double amount_molecules;

    printf("Enter an amount of water, in quarts: ");
    scanf("%d", &amount_in_quarts);

    amount_in_grams = amount_in_quarts * 950;
    amount_molecules = amount_in_grams / 3e-23;
    printf("The number of water molecules in %d quarts = %e\n", amount_in_quarts, amount_molecules);
    return 0;
}