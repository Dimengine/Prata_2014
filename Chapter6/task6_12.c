#include <stdio.h>

int main(void)
{
    int limit;

    printf("Please, enter number of terms in series: ");
    while (scanf("%d", &limit) && limit > 0)
    {
        double result1 = 0.0, result2 = 0.0;
        int sign = 1;
        
        for(int i = 1; i <= limit; ++i)
        {
            result1 += 1.0 / i;
            result2 += 1.0 / i * sign;
            sign = -sign;
        }

        printf("Sum of sequense 1.0 + 1.0 / 2.0 + 1.0 / 3.0 + 1.0 / 4.0 +... for %d elements is %lf\n", limit, result1);
        printf("Sum of sequense 1.0 - 1.0 / 2.0 + 1.0 / 3.0 - 1.0 / 4.0 +... for %d elements is %lf\n", limit, result2);
        printf("Please, enter another number of terms in series: ");
    }
    printf("Done\n");
    return 0;
}