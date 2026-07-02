#include <stdio.h>

void Display(int Arr[], int iSize)//[] internally *
{
    int iCnt = 0;

    for (iCnt=0; iCnt<iSize; iCnt++)
    {
        printf(" %d\n", Arr[iCnt]);
    }

}
int main()
{
    int iLength = 4;
    int iCnt = 0;

    int Brr[iLength]; 

    printf("Enter number: \n");

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        scanf("%d \n",&Brr[iCnt] );
    }


    Display(Brr, iLength);

    return 0;
}