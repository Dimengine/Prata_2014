#include <stdio.h>

#define basic_pay_rate 10.00
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
    int time, gross_pay, taxes, net_pay;

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
    printf("After %d hours worked, the gross pay: is %d, the taxes is %d, and the net pay is %d\n", time, gross_pay, taxes, net_pay);
    return 0;
}