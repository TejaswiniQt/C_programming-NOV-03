/* Write a program in C to replace the spaces in a string with a specific character */

#include <stdio.h>

void replace_space_with_astric(char *str);

int main()
{
    char str[100];
    printf("Enter the string: ");
    scanf("%[^\n]s",str);
    replace_space_with_astric(str);
    printf("String after replacing spaces with '*' : %s\n",str);
    return 0;
}

void replace_space_with_astric(char *str)
{
    while(*str)
    {
        if(*str == ' ')
        *str = '*';
        str++;
    }
}