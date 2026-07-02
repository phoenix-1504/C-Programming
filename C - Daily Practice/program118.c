#include <stdio.h>

int Summation(int Arr[], int iSize)
{
    int iCnt = 0;
    int iSum = 0;
    for (iCnt=0; iCnt<iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;

}
int main()
{
    int iLength = 4;
    int iCnt = 0;
    int Brr[iLength]; 
    int iRet = 0;


    printf("Enter number: \n");

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        scanf("%d ",&Brr[iCnt] );
    }


    int iRet  =  Summation(Brr, iLength);

    printf("Sum of elements is : %d \n", iRet);

    return 0;
}