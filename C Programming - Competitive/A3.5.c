/*

Input :   E      d
Output : TRUE  FALSE

*/


#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char cValue)
{
    if(cValue == 'a' || cValue == 'A' || 
       cValue == 'e' || cValue == 'E' || 
       cValue == 'i' || cValue == 'I' || 
       cValue == 'o' || cValue == 'O' || 
       cValue == 'u' || cValue == 'U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;
    
    printf("Enter character\n");
    scanf("%c", &cValue);
    
    bRet = ChkVowel(cValue);
    
    if(bRet == TRUE)
    {
        printf("It is Vowel\n");
    }
    else
    {
        printf("It is not Vowel\n");
    }
    
    return 0;
}