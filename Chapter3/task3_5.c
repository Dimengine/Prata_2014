#include <stdio.h>

int main(void)
{
    int age;

    printf("Enter your age in years: ");
    scanf("%d", &age);
    printf("%d years is %d seconds\n", age, (int)(age * 3.156e7));
    return 0;
}