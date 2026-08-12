#include <stdio.h>

typedef unsigned int UINT ;

int main ()
{
    UINT iNo = 0;
    UINT iMask = 0XFFBFFFFF;    // position 23
    UINT iPos = 0;
    
    
    printf("Enter Number : \n");
    scanf("%d", &iNo);    

    iNo = iNo & iMask;

    printf("Updated number : %d\n", iNo);

    return 0;
}                               