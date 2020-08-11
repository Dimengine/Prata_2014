#include <stdio.h>

#define pay_rate_1 8.75
#define pay_rate_2 9.33
#define pay_rate_3 10.00
#define pay_rate_4 11.20
#define overtime_coefficient 1.5
#define basic_time 40
#define tax_rate_1 0.15
#define tax_rate_2 0.2
#define tax_rate_3 0.25
#define tax_money_1 300
#define tax_money_2 150
#define tax_1 tax_money_1 * tax_rate_1
#define tax_2 tax_money_2 * tax_rate_2

int main(void)
{
    double gross_pay, taxes, net_pay, basic_pay_rate;
    int time;
    char choice = '0';

    while (choice < '1' || choice > '5')
    {
        printf("Enter the number corresponding to the desired pay rate or action:\n");
        printf("1) $8.75/hr                         2) $9.33/hr\n");
        printf("3) $10.00/hr                        4) $11.20/hr\n");
        printf("5) quit\n");
        
        while ((choice = getchar()) == '\n')
		    continue;
	    while (getchar() != '\n')
		    continue;

        switch(choice)
        {
            case '1': 
            {
                basic_pay_rate = pay_rate_1;
                break;
            }
            case '2': 
            {
                basic_pay_rate = pay_rate_2;
                break;
            }
            case '3': 
            {
                basic_pay_rate = pay_rate_3;
                break;
            }
            case '4': 
            {
                basic_pay_rate = pay_rate_4;
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
    
    printf("Please, enter the hours worked in a week: ");
    scanf("%d", &time);

    if(time > basic_time)
        gross_pay = basic_pay_rate * (basic_time + (time - basic_time) * overtime_coefficient);
    else
        gross_pay = basic_pay_rate * time;

    if(gross_pay < tax_money_1)
        taxes = gross_pay * tax_rate_1;
    else if (gross_pay < (tax_money_1 + tax_money_2))
        taxes = tax_1 + (gross_pay - tax_money_1) * tax_rate_2;
    else
        taxes = tax_1 + tax_2 + (gross_pay - tax_money_1 - tax_money_2) * tax_rate_3;
    
    net_pay = gross_pay - taxes;
    printf("After %d hours worked, the gross pay: is %.2f, the taxes is %.2f, and the net pay is %.2f\n", time, gross_pay, taxes, net_pay);
    return 0;
}