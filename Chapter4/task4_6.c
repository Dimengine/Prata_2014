#include <stdio.h>
#include <string.h>

int main()
{
    char name[20], surname[20];

    printf("Input your name and surname\n");
    scanf("%s%s", name, surname);

    int nameSize = strlen(name);
    int surnameSize = strlen(surname);

    printf("%s %s\n%*d %*d\n", name, surname, nameSize, nameSize, surnameSize, surnameSize);
    printf("%s %s\n%-*d %-*d\n", name, surname, nameSize, nameSize, surnameSize, surnameSize);
    return 0;
}