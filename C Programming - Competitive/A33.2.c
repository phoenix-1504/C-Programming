#include <stdio.h>
#include <string.h>

int CountWord(char *str, char *word) 
{
    int iCount = 0;

    char *match = strstr(str, word);    //strstr --> used to find string inside a string

    while (match != NULL) 
    {
        iCount++;

        match = strstr(match + strlen(word), word);
    }
    
    return iCount;
}

int main() 
{
    char arr[20];
    char word[5];

    printf("Enter string: ");
    scanf(" %[^\n]", arr);
    
    printf("Enter word to count: ");
    scanf("%s", word);

    printf("Word Frequency is %d\n", CountWord(arr, word));

    return 0;
}