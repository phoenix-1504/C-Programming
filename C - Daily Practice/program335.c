#include <stdio.h>

typedef unsigned int UINT ;

UINT TooggleBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0x1;
    UINT iResult = 0 ;
    
    if (iPos < 1 || iPos > 32)
    {
        printf("Invalid BIT position \n");
    }

    iMask = iMask << (iPos - 1);
    iResult = iNo ^ iMask;

    return iResult; 
}


int main ()
{
    UINT iValue = 0;
    UINT iRet = 0;
    UINT iLocation = 0;
    
    
    printf("Enter Number : \n");
    scanf("%d", &iValue);

    printf("Enter BIT Position : \n");
    scanf("%d", &iLocation);
    
    iRet = TooggleBit(iValue, iLocation);

    printf("Updated number is : %d\n", iRet);

    return 0;
}                               