#include <stdio.h>

int main(void)
{
    char input;
    
    scanf("%hhd", &input);
    printf("The character having ASCII code %d is %c\n", input, input);
    return 0;
}