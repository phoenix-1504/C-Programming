#include <stdio.h>

typedef unsigned int UINT ;

int main ()
{
    
    UINT iMask = 0X00400800;    //Positon 12 and 23  
    UINT iNo = 0;
    UINT iResult = 0;

    printf("Enter Number : \n");
    scanf("%d", &iNo);

    iResult = iNo^iMask;

    printf("Updated number : %d", iResult);
   

    return 0;
}                               