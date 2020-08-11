#include <stdio.h>

int main(void)
{
    int odd_count = 0, even_count = 0; 
    double odd_sum = 0, even_sum = 0;
    int number;

    printf("Please, enter numbers: ");
    while(scanf("%d", &number) && number != 0)
    {
        if(number % 2 == 0)
        {
            ++even_count;
            even_sum += number;
        }
        else
        {
            ++odd_count;
            odd_sum += number;
        }
    }
    printf("Total number of even integers is %d, the average value of the even integers is %lf\n", even_count, even_sum ? even_sum / even_count : 0);
    printf("Total number of odd integers is %d, the average value of the odd integers is %lf\n", odd_count, odd_sum / odd_count);
    return 0;
}