#include <stdio.h>

int main(void)
{
    const int Dunbars_number = 150;
    int friends = 5, week = 1;

    while(friends < Dunbars_number)
    {
        friends -= week;
        friends *= 2;
        printf("After %d week professor has %d friends\n", week, friends);
        ++week;
    }
    printf("Done\n");
    return 0;
}