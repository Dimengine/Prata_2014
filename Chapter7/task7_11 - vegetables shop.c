#include <stdio.h>

#define artichokes_pound_price 2.05
#define beets_pound_price 1.15
#define carrots_pound_price 1.09
#define discount_rate 0.05
#define discount_limit 100
#define shipping_charges_1 6.50
#define shipping_charges_2 14.00
#define shipping_charges_3 0.50
#define shipping_limit_1 5
#define shipping_limit_2 20

int main(void)
{
    double weight_of_carrots = 0, weight_of_beets = 0, weight_of_artichokes = 0, total_weight = 0, weight;
    double carrots_price, beets_price, artichokes_price, total_charges, discount = 0.0, shipping_charges = 0, grand_total;
    char choice;

    while(choice != 'q')
    {
        printf("Please, choose your order:\n");
        printf("[a] Artichokes\n");
        printf("[b] Beets\n");
        printf("[c] Carrots\n");
        printf("[q] Finish the ordering\n");
        
        choice = getchar();
        if(choice >= 'a' && choice <= 'c')
        {
            printf("Please, enter the weight in pounds: ");
            scanf("%lf", &weight);
        }
        while (getchar() != '\n')
                continue;
        switch(choice)
        {
            case 'a': 
            {
                weight_of_artichokes += weight;
                break;
            }
            case 'b': 
            {
                weight_of_beets += weight;
                break;
            }
            case 'c': 
            {
                weight_of_carrots += weight;
                break;
            }
            case 'q': 
                break;
            default:
            {
                printf("Enter the a, b, c or q:\n");
                continue;
            }
        }
    }

    artichokes_price = weight_of_artichokes * artichokes_pound_price;
    beets_price = weight_of_beets * beets_pound_price;
    carrots_price = weight_of_carrots * carrots_pound_price;

    total_weight = weight_of_artichokes + weight_of_beets + weight_of_carrots;
    total_charges = artichokes_price + beets_price + carrots_price;

    if(total_charges >= discount_limit)
        discount = total_charges * discount_rate;
    
    if(total_weight <= shipping_limit_1)
        shipping_charges = shipping_charges_1;
    else if(total_weight <= shipping_limit_2)
        shipping_charges = shipping_charges_2;
    else
        shipping_charges = shipping_charges_2 + (total_weight - shipping_limit_2) * shipping_charges_3;

    grand_total = total_charges - discount + shipping_charges;

    printf("The price of artichoke is $%g per pound, and you ordered %g pounds, so it's $%g total for artichokes.\n",
			artichokes_pound_price, weight_of_artichokes, artichokes_price);
	printf("The price of beet is $%g per pound, and you ordered %g pounds, so it's $%g total for beets.\n",
			beets_pound_price, weight_of_beets, beets_price);
	printf("The price of carrot is $%g per pound, and you ordered %g pounds, so it's $%g total for carrots.\n",
		    carrots_pound_price, weight_of_carrots, carrots_price);
	printf("The total cost of the order is $%g.\n", total_charges);
	printf("The discount is $%g.\n", discount);
	printf("The shipping charge is $%g.\n", shipping_charges);
	printf("The grand total of all charges is $%g.\n", grand_total);
	return 0;
}