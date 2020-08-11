#include <stdio.h>

void fibonacci(int);

int main(void)
{
    int num;

    printf("Please, enter the position of Fibonacci sequence: ");
    while(scanf("%d", &num) == 1)
    {
        printf("First %d elements in Fibonacci sequence is: ", num);
        fibonacci(num);
        printf("\nPlease, enter next position(q to quit): ");
    }
    printf("Bye\n");
    return 0;
}

void fibonacci(int pos)
{
    int Fn1 = 1, Fn2 = 1, Fn;

    if(pos <= 0)
        printf("undefined\nPosition must be bigger than 0!");
    else if(pos <= 2)
        while (pos--)
            printf("1 ");
    else
    {
        printf("1 1 ");
        while(pos-- > 2)
        {
            Fn = Fn1 + Fn2;
            Fn1 = Fn2;
            Fn2 = Fn;
            printf("%d ", Fn);
        }
    }
}