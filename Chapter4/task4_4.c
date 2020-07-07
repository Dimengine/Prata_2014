#include <stdio.h>

int main(void)
{
    float height;
    char name[20];

    printf("Enter your name and height centimeters: ");
    scanf("%s%f", name, &height);
    printf("%s, you are %.2f meters tall\n", name, height / 100);
    return 0;
}