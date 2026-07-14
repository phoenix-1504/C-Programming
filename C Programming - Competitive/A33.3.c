#include <stdio.h>
#include <string.h>

int CountChar(char *str, char ch) 
{
    for(int i = 0; str[i] != '\0'; i++ )
    {
        if(str[i] == ch)
        {
            return i;
        }
    }
    return -1; 
}
int main ()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", arr);

    printf("Enter character that you want the index of: ");
    scanf(" %c", &cValue);

    iRet = CountChar(arr, cValue);

    if (iRet != -1)
    {
        printf("Character '%c' is at index %d\n", cValue, iRet);
    }
    else
    {
        printf("Character '%c' was not found\n", cValue);
    }
        
    return 0;
}