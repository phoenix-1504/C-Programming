/*
START
        Accept number as No
        If No is completely divisible by 2 
            then print EVEN
        Otherwise 
            print ODD
STOP

***OR***

START
         Accept number as No
         Divide No by 2
         If remainder is 0
            then print as EVEN
        Otherwise
            print as ODD 
STOP
*/

#include <stdio.h>

int main()
{
    int iValue = 0;
    int iRemainder = 0;

    printf("Enter Number: \n");
    scanf("%d",&iValue);

    iRemainder = iValue % 2;

    if(iRemainder == 0)
    {
        printf("Even Number\n");
    }
    else
    {
        printf("Odd Number\n");
    
    }
    return 0;

}