#include <stdio.h>
#include <stdlib.h>

int CountEven(int Arr[], int iSize)
{
    int iCnt = 0, iCount = 0; 

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            iCount++ ; 
        }
    }
    return iCount;
}

int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0, iRet = 0;

    // Step 1: Accept the number of elements
    printf("Enter the number of elements: \n");
    scanf("%d", &iLength); 

    // Step 2: Allocate the memory
    Brr = (int *)malloc(sizeof(int) * iLength); 
    // Step 3: Accept the value from user
    printf("Enter the elements: \n");
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &Brr[iCnt]);
    }

    // Step 4: Calculate and Print
    iRet = CountEven(Brr, iLength);
    printf("Count of the even elements are : %d\n", iRet);

    // Step 5: Free memory
    free(Brr);

    return 0;
}