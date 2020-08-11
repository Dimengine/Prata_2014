#include <stdio.h>

#define tax_rate_1 0.15
#define tax_rate_2 0.28

#define tax_limit_1 17850
#define tax_limit_2 23900
#define tax_limit_3 29750
#define tax_limit_4 14875

int main(void)
{
    double income, taxes;
    int tax_limit;
    char choice = '0', again;
    
    do
    {
        while (choice < '1' || choice > '5')
        {
            printf("Enter your tax category:\n");
            printf("1) Single                         2) Head of Household\n");
            printf("3) Married, Joint                 4) Married, Separate\n");
            printf("5) quit\n");
            
            while ((choice = getchar()) == '\n')
                continue;
            while (getchar() != '\n')
                continue;

            switch(choice)
            {
                case '1': 
                {
                    tax_limit = tax_limit_1;
                    break;
                }
                case '2': 
                {
                    tax_limit = tax_limit_2;
                    break;
                }
                case '3': 
                {
                    tax_limit = tax_limit_3;
                    break;
                }
                case '4': 
                {
                    tax_limit = tax_limit_4;
                    break;
                }
                case '5': 
                    return 0;
                default: 
                {
                    printf("Enter the number [1 - 5]:\n");
                    continue;
                }
            }
        }
        
        printf("Please, enter the taxable income: ");
        scanf("%lf", &income);

        while (getchar() != '\n')
			continue;

        if(income > tax_limit)
            taxes = tax_limit * tax_rate_1 + (income - tax_limit) * tax_rate_2;
        else
            taxes = income * tax_rate_1;
        
        printf("Your tax is %.2f\n", taxes);
        printf("Try again?(y/n)\n");
        choice = '0';
    }
    while(getchar() == 'y');
    return 0;
}