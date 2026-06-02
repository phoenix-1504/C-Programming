//////////////////////////////////////////////////////////////
//
//  Write a program which accepts number from user 
//  and display its factors in decreasing order.
//
//////////////////////////////////////////////////////////////

#include<stdio.h>

int FactRev (int iNo)
{
    int iCnt = 0;
    int multfct = 0;
        for (int iCnt = iNo; iCnt > multfct; iCnt--)
        {

            if (iNo % iCnt == 0 )
            {
                printf("%d\t", iCnt);
            }
                
        }
    return iCnt;
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    FactRev(iValue);

    return 0;
}
