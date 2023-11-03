/* Write a program in C to count the number of punctuation characters present in a string. */

#include <stdio.h>

int count_punctuation_charcters(char *str);

int main()
{
    char str[100];
    printf("Enter the string: ");
    scanf("%[^\n]s",str);
    int count = count_punctuation_charcters(str);
    printf("Number of punctuation characters : %d\n",count);
    return 0;
}

int count_punctuation_charcters(char *str)
{
    int count = 0;
    while(*str)
    {
        if(!((*str >= 65 && *str <= 90) || (*str >= 97 && *str <= 122) || (*str >= 48 && *str <= 57) || *str == ' '))
        count++;
        str++;
    }
    return count;
}