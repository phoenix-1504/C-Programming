#include <stdio.h>
#include <stdlib.h>

int Minimum(int Arr[], int iSize)
{
    int iCnt = 0 ;
    int iMin = 0;
    
    iMin = Arr[0]; 

    
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < iMin )
        {
             iMin = Arr[iCnt] ;
        }
    }
    return iMin;
}

int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0;
    int iRet = 0;

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
    iRet = Minimum(Brr, iLength);

    printf("Minimum element is : %d\n", iRet);

    // Step 5: Free memory
    free(Brr);

    return 0;
}