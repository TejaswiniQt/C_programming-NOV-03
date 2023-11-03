/* Write a program in C to find the frequency of characters.*/

#include <stdio.h>
#include <string.h>

void find_frequency(char *str,int *freq_arr,int len);

int main()
{
    char str[50],ch;
    int len,i;
    printf("Enter the string: ");
    scanf("%[^\n]s",str);
    printf("Enter the character: ");
    scanf("\n%c",&ch);
    len = strlen(str);
    int freq_arr[len];
    for(i=0; i<len; i++)
    {
        freq_arr[i] = -1;
    }
    find_frequency(str,freq_arr,len);
    printf("Frequency of of '%c is': ",ch);
    for(i=0; i<len; i++)
    {
        if(ch == str[i])
        printf("%d",freq_arr[i]);
    }
    return 0;
}

void find_frequency(char *str,int *freq_arr,int len)
{
    int i,j,count;
    for(i=0; i<len; i++)
    {
        count = 1;
        for(j=i+1; j<len; j++)
        {
            if(str[i] == str[j])
            {
                str[j] = '\0';
                freq_arr[j] = 0;
                count++;
            }
        }
        if(freq_arr[i] == -1)
        freq_arr[i] = count;
    }
}
