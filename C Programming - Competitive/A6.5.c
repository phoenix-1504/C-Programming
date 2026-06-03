////////////////////////////////////////////////////////////////////////////////
//
//  Write a program which accepts number from user and display its table in reverse
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void ReverseTable (int iNo)
{
    int iCnt  = 0;

    for (iCnt =10; iCnt >= 1; iCnt --)
    {
        printf("%d\t", iCnt*iNo);
    }
}

int main()
{
    int iValue  = 0; 
    
    printf("Enter a number: ");
    scanf("%d", &iValue);

    ReverseTable(iValue);

    return 0;
}