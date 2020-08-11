#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[20];

    printf("Please, input a word: ");
    scanf("%s", str);
    
    for(int i = strlen(str); i >= 0; --i)
        printf("%c", str[i]);
    printf("\n");
    return 0;
}