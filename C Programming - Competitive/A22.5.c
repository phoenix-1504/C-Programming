////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  input : 8
//  output : 2 4 6 8 10 12 11 14 16 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

void Pattern (int iNo)
{
    int num = 0;

    for (num = 1  ; num<=iNo; num++ )
    {
        printf( " %d\t ", num*2);

        
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