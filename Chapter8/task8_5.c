#include <stdio.h>

int main(void)
{
    int min_guess = 1, max_guess = 101, guess = 50;
    char ch;
    
    printf("Pick an integer from 1 to 100. I will try to guess ");
	printf("it.\nRespond with a 'l' if my guess is lower, with a 'h' ");
	printf("if it is higher and with a 'c' if it is correct.\n");
	printf("Uh...is your number %d?\n", guess);

    while((ch = getchar()) != 'c')
    {
        if(ch == 'l')
            min_guess = guess;
        else if(ch == 'h')
            max_guess = guess;
        else
        {
            printf("Enter l, h or c\n");
            while (getchar() != '\n')
                continue;
            continue;
        }
        guess = (max_guess - min_guess) / 2 + min_guess;
        printf("Well, then, is it %d?\n", guess);
        while (getchar() != '\n')
            continue;
    }
    printf("I knew I could do it!\n");
    return 0;
}