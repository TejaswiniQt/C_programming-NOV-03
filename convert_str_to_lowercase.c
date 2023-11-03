/* Write a program in C to convert a string to lowercase.*/

#include <stdio.h>
#include <string.h>

void convert_str_to_lowercase(char *str);

int main()
{
    char str[100];
    printf("Enter the string: ");
    scanf("%[^\n]s",str);
    convert_str_to_lowercase(str);
    printf("String in lowercase : %s\n",str);
    return 0;
}

void convert_str_to_lowercase(char *str)
{
    while(*str)
    {
        if(*str >= 65 && *str <= 90)
        *str = ((*str) + 32);
        str++;
    }
}