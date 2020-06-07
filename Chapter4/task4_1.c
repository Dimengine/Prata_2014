#include <stdio.h>

int main(void)
{
    char name[20], surname[20];
    
    scanf("%s%s", name, surname);
    printf("%s, %s\n", surname, name);
    return 0;
}