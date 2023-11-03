/* Write a program in C to combine two strings manually.*/

#include <stdio.h>
#include <string.h>

void concatenate_two_strings(char *str1,char str2[]);

int main()
{
    char str1[100],str2[50];
    printf("Enter the string1: ");
    scanf("%[^\n]s",str1);
    printf("Enter the string2: ");
    scanf("\n%[^\n]s",str2);
    concatenate_two_strings(str1,str2);
    printf("String after concatenation : %s\n",str1);
    return 0;
}

void concatenate_two_strings(char *str1,char str2[])
{
    int len1,i=0;
    len1 = strlen(str1);
    while(*str2)
    {
       *(str1+len1+i) = *str2;
       i++;
       str2++;
    }
    *(str1+len1+i) = '\0';
}