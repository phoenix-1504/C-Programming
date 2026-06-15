////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  input : 5
//  output : A B C D E 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

void Pattern (int iNo)
{
    
    char ch = '\0';
    int num = 0;

    for (num = 0 , ch ='A'; num<iNo; num++)
    {
        printf( " %c \t", ch);
        ch++;
        
    }
    
}

int main()
{
    int iValue = 0;
    printf("Enter number of elements :");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}