////////////////////////////////////////////////////////////////////////////////
//
//  Write a program which accept number from user 
//  and retrun the count of ODD Digits
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int CountOdd(int iNo)
{
    int Digit = 0;
    int iCnt = 0;

    while(iNo != 0 )
    {
        int iDigit = iNo % 10;

        if(iDigit % 2 == 1)
        {
            iCnt++;
        }
        iNo = iNo/10;

    }
    return iCnt ;

}

int main()
{
    int iValue = 0 ;
    int iRet = 0;

     printf("Enter number : ");
    scanf("%d", &iValue);
     
    iRet = CountOdd(iValue);

    printf("%d", iRet);
     
    return 0;

}