/* Write a program in C to convert a string to uppercase.*/

#include <stdio.h>
#include <string.h>

void convert_str_to_uppercase(char *str);

int main()
{
    char str[100];
    printf("Enter the string: ");
    scanf("%[^\n]s",str);
    convert_str_to_uppercase(str);
    printf("String in uppercase : %s\n",str);
    return 0;
}

void convert_str_to_uppercase(char *str)
{
    while(*str)
    {
        if(*str >= 97 && *str <= 122)
        *str = ((*str) - 32);
        str++;
    }
}