//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Write a program which accept number fom user
//  and return the count of digits i between 3 and 7
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int CountRange(int iNo)
{
    int Digit = 0;
    int iCnt = 0;

    while (iNo !=0)
    {

        int iDigit = iNo % 10;

        if( iDigit >= 3 && iDigit <=7)
        {
            iCnt++;
        }
        iNo = iNo/10;

    }
    return iCnt;
}


int main ()
{
    int iValue = 0;
    int iRet = 0;

     printf("Enter number : ");
    scanf("%d", &iValue);
     
    iRet = CountRange(iValue);

    printf("%d", iRet);
     
    return 0;
}