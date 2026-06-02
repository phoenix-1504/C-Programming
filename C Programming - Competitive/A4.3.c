//////////////////////////////////////////////////////////////
//
//  Write a program which accepts number from user 
//  and display its non factors.
//
//////////////////////////////////////////////////////////////

#include <stdio.h>

int NonFact (int iNo)
{
    int iCnt = 0;

    for (int iCnt =1; iCnt <=iNo; iCnt++)
    {
        if(iNo%iCnt != 0)
        {
            printf("%d\t", iCnt);
        }
    }
    return 0;
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    NonFact(iValue);

    return 0;
}
///////////////////////////////////////////////////////////////
//
//  Write a program which accepts number from user
// and return summation of all its non factors.
//
///////////////////////////////////////////////////////////////

#include <stdio.h>

int SumNonFct (int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for (int iCnt = 1; iCnt<=iNo; iCnt++)
    {
        if (iNo%iCnt != 0)
        {
            iSum = iSum+iCnt;
        }
    }
    return iSum;
}

int main()
{
    int ivalue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &ivalue);

    iRet = SumNonFct(ivalue);
    printf("Summation of non factors is : %d\n", iRet);
}
///////////////////////////////////////////////////////////////////////////
//
//   Write a program which accepts number from user
// and return difference between summation of factors and non factors.
///////////////////////////////////////////////////////////////////////////


#include <stdio.h>

int SummationDifference (int iNo)
{
    int Cnt = 0;
    int iSumFact = 0;
    int iSumNonFact = 0;

    for (int iCnt = 1; iCnt <=iNo; iCnt++)
    {
        if (iNo%iCnt == 0)
        {
            iSumFact = iSumFact + iCnt;
        }
        else
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
    }
    return (iSumNonFact - iSumFact);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = SummationDifference(iValue);
    printf("Difference between summation of factors and non factors is : %d\n", iRet);

    return 0;
}
