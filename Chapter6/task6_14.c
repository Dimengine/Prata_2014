#include <stdio.h>

int main(void)
{
    const int SIZE = 8;
    double arr[SIZE], res_arr[SIZE];

    printf("Please, enter 8 floating-point numbers: ");
    for(int i = 0; i < SIZE; ++i)
    {
        scanf("%lf", &arr[i]);
        if(i > 0)
            res_arr[i] = arr[i] + res_arr[i - 1];
        else 
            res_arr[i] = arr[i];
    }

    for(int i = 0; i < SIZE; ++i)
        printf("%g\t", arr[i]);
    printf("\n");
    for(int i = 0; i < SIZE; ++i)
        printf("%g\t", res_arr[i]);
    printf("\n");
    return 0;
}