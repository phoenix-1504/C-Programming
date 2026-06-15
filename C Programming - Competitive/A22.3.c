////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  input : 5
//  output : 1 * 2 * 3 * 4 * 5 * 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

void Pattern (int iNo)
{
    int num = 0;

    for (num = 1  ; num<=iNo; num++ )
    {
        printf( " %d\t *\t", num);

        
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