#include <stdio.h>

int main ()
{
    unsigned int iNo = 0 ;
    unsigned int iAns = 0 ;  
    unsigned int iMask = 4 ;

    printf("Enter Number : \n");
    scanf("%d", &iNo);

    iAns = iNo & iMask ;

    if(iAns == iMask)
    {
        printf("3rd bit is ON");
    }
    else
    {
        printf("3rd bit is OFF");
    }

    return 0 ;

}