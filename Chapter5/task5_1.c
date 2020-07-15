#include <stdio.h>

int main(void)
{
    const int MINUTES_IN_HOUR = 60;
    int time;
    
    printf("Enter the time in minutes: ");
    scanf("%d", &time);
    while(time > 0)
    {
        printf("%d minute(s) equals to %d hour(s) and %d minute(s)\n", time, time / MINUTES_IN_HOUR, time % MINUTES_IN_HOUR);
        printf("Enter the time in minutes (<=0 to quit): ");
        scanf("%d", &time);
    }
    printf("bye\n");
    return 0;
}