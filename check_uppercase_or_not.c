/* Write a program in C to check whether a letter is uppercase or not. */

#include <stdio.h>

int check_uppercase(char ch);

int main()
{
    char ch;
    printf("Enter character: ");
    scanf("%c",&ch);
    if(check_uppercase(ch))
    printf("Yes it's uppercase character\n");
    else
    printf("No it's not a uppercase character\n");
    return 0;
}

int check_uppercase(char ch)
{
    if(ch >= 65 && ch <= 90)
    return 1;
    else
    return 0;
}