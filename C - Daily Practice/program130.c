#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool LinearSearch(int Arr[], int iSize, int iNo)
{
    int iCnt = 0; 
    bool bFlag = false;
    
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            bFlag = true; 
            break; // Exits the loop, not the function
        }
    }
    return bFlag;
}

int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0, iValue = 0;
    bool bRet = false;

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

    printf("Enter the Element that you want to search : \n");
    scanf("%d", &iValue); 
    // Step 4: Calculate and Print
    bRet = LinearSearch(Brr, iLength, iValue);

    if(bRet == true)
    {
        printf("Element is present\n");
    }
    else
    {
        printf("Element is not present\n");
    }

    // Step 5: Free memory
    free(Brr);

    return 0;
}