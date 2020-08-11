#include <stdio.h>

int main(void)
{
    int lower, upper;
    
    printf("Enter lower and upper integer limits: ");
    
    while (scanf("%d%d", &lower, &upper) == 2 && lower < upper)
    {   
        int sum = 0;
        for(int i = lower; i <= upper; ++i)
            sum += i*i;
        printf("The sums of the squares from %d to %d is %d\n", lower * lower, upper * upper, sum);
        printf("Enter next set of limits: ");
    }
    printf("Done\n");
    return 0;
}