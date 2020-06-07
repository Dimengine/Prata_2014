#include <stdio.h>
#include <string.h>

int main()
{
    char name[20];

    scanf("%s", name);
    int size = strlen(name);
    
    printf("\"%s\"\n", name);
    printf("\"%20s\"\n", name);
    printf("\"%-20s\"\n", name);
    printf("%*s\n", size + 3, name);
    return 0;
}