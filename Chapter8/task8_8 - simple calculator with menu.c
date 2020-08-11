#include <stdio.h>
#include <ctype.h>

char get_choice(void);
char get_first(void);
float get_number(void);

int main(void)
{
    char choice;
    float number1, number2;

    while ((choice = get_choice()) != 'q')
    {
        printf("Enter first number: ");
        number1 = get_number();
        printf("Enter second number: ");
        number2 = get_number();
        while(number2 == 0 && choice == 'd')
        {
            printf("Enter a number other than 0: ");
            number2 = get_number();
        }
        switch (choice)
        {
            case 'a':
            {
                printf("%g + %g = %g\n", number1, number2, number1 + number2);
                break;
            }
            case 's':
            {
                printf("%g - %g = %g\n", number1, number2, number1 - number2);
                break;
            }
            case 'm':
            {
                printf("%g * %g = %g\n", number1, number2, number1 * number2);
                break;
            }
            case 'd':
            {
                printf("%g / %g = %g\n", number1, number2, number1 / number2);
                break;
            }
            default:
            {
                printf("Error!\n");
                break;
            }
        }
    }
    printf("Bye.\n");
    return 0;
}

char get_choice(void)
{
    char ch;

    printf("Enter the operation of your choice:\n");
    printf("a. add                  s. subtract\n");
    printf("m. multiply             d. divide\n");
    printf("q. quit\n");

    ch = get_first();
    while (ch != 'a' && ch != 's' && ch != 'm' && ch != 'd' && ch != 'q')
    {
        printf("Enter a, s, m, d or q: ");
        ch = get_first();
    }
    return ch;
}

char get_first(void)
{
    char ch;
    while (isspace(ch = getchar()))
        continue;
    while (getchar() != '\n')
        continue;
    return ch;
}

float get_number(void)
{
    float number;
    char ch;

    while(scanf("%f", &number) != 1)
    {
        while((ch = getchar()) != '\n')
            putchar(ch);
        printf(" is not an number\nPlease enter a number, such as 2.5, -1.78E8, or 3: ");
    }
    return number;
}