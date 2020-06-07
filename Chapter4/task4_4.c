#include <stdio.h>

int main()
{
    float height;
    char name[20];

    printf("Enter your name and height(cm):\n");
    scanf("%s%f", name, &height);
    printf("%s your height is %.2f meters\n", name, height / 100);
    return 0;
}