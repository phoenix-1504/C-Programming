/////////////////////////////////////////////////////////////////////////////////////////
//
//  Write a program which accepts number from user and display below pattern.
//  Input : 5
//  Output : * * * * * # # # # #
//
/////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t");
    }
}

int main ()
{
    int iValue = 0;

    printf("Enter number of elements : \n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
