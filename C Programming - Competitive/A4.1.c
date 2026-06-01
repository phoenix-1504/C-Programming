////////////////////////////////////////////////////////////////////////
//
//  Write a pogram which accepts number from user 
//  and display its multiplication of factors
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int MultFact (int iNo)
{

        int multfct = 1;
        for (int iCnt =1; iCnt <= iNo/2; iCnt++)
        {
            if (iNo % iCnt == 0 )
            {
                multfct = multfct*iCnt;
            }
        }
        return multfct;
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);
    printf("Multiplication of factors is : %d\n", iRet);

    return 0;
}
