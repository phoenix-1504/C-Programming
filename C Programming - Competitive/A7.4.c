////////////////////////////////////////////////////////////////////////////////
//
//  Write a program to find odd factorial of given number.
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int OddFact(int iNo)
{
    int iCnt = 0;
    int OddFact = 1;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if ((iCnt % 2) != 0)
        {
            OddFact = OddFact * iCnt;
        }
    }
    return OddFact;
}

int main()
{
    int iValue = 0;
    int iRet  = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = OddFact(iValue);

    printf("Odd factorial of the given number is : %d", iRet);

    return 0;
}