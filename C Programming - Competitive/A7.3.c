////////////////////////////////////////////////////////////////////////////////
//
//  Write a program to find even factorial of given number.
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int EvenFact(int iNo)
{
    int iCnt = 0;
    int iEvenFact = 1;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if ((iCnt % 2) == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
    }
    return iEvenFact;
}

int main()
{
    int iValue = 0;
    int iRet  = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = EvenFact(iValue);

    printf("Even factorial of the given number is : %d", iRet);

    return 0;
}