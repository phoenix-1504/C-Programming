/*
input:2395
Output:there is no zero
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit=0;

    if(iNo<0)
    {
        iNo= -iNo;
    }

    while(iNo>0)
    {
        iDigit=iNo%10;
        iNo=iNo/10;
        if(iDigit==0)
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
    }
}
int main()
{
    int iValue=0;
    BOOL bRet=FALSE;

    printf("ENter Number: ");
    scanf("%d",&iValue);

    bRet=ChkZero(iValue);

    if(bRet==TRUE)
    {
        printf("It contains zero");
    }
    else
    {
        printf("There is No Zero");
    }

    return 0;

}