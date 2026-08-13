#include <stdio.h>

typedef unsigned int UINT ;

int main ()
{
    
    UINT iMask1 = 0X0000001;    //Positon 3 and 8  
    UINT iMask2 = 0X0000080;
    UINT iMask = 0;
    UINT iNo = 0;
    UINT iResult = 0;

    printf("Enter Number : \n");
    scanf("%d", &iNo);

    iMask = iMask1 | iMask2;

    iResult = iNo^iMask;

    printf("Updated number : %d", iResult);
   

    return 0;
}