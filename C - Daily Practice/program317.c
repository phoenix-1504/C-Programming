#include <stdio.h>

typedef unsigned int UINT;

int main ()
{
    UINT  iNo = 0 ;
    UINT  iAns = 0 ;  
    UINT  iMask = 0X1 ;
    UINT  iPos = 0;

    printf("Enter Number : \n");
    scanf("%d", &iNo);

    printf("Enter the Postion : \n");
    scanf("%d", &iPos);

    iMask = iMask << (iPos - 1);

    iAns = iNo & iMask ;

    if(iAns == iMask)
    {
        printf("Bit is ON");
    }
    else
    {
        printf("Bit is OFF");
    }

    return 0 ;

}
