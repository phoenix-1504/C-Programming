#include <stdio.h>

typedef unsigned int UINT ;

int main ()
{
    
    UINT iMask = 0XFFFFFFBF;   

    printf("Before : %X\n", iMask);

    iMask = ~iMask;

    printf("Before : %X\n", iMask);

    return 0;
}                               