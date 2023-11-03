/* Write a program in C to find the largest and smallest words in a string.*/

#include <stdio.h>
#include <string.h>

void find_largest_smallest_words(char *str,char *largest_word,char *smallest_word);

int main()
{
    char str[100],largest_word[20],smallest_word[10];
    printf("Enter the string: ");
    scanf("%[^\n]s",str);
    find_largest_smallest_words(str,largest_word,smallest_word);
    printf("Largest word in the string is : %s\n",largest_word);
    printf("Smallest word in the string is : %s\n",smallest_word);
    return 0;
}

void find_largest_smallest_words(char *str,char *largest_word,char *smallest_word)
{
    int min,max=0,count=0,len,i,j;
    len = strlen(str)+1;
    min = strlen(str);
    for(i=0; i<len; i++)
    {
        if(str[i] == ' ' || str[i] == '\0')
        {
            if(count > max)
            {
                max = count;
                for(j=0; j<count; j++)
                largest_word[j] = str[i-count+j];
                largest_word[j] = '\0';
            }
            if(count <= max && count < min)
            {
                min = count;
                for(j=0; j<count; j++)
                smallest_word[j] = str[i-count+j];
                smallest_word[j] = '\0';
            }
            count=0;
        }
        else
        {
            count++;
        }
    }
}
