/////////////////////////////////////////////////////////////////////
//
//  Accept value in US dollar and convert it into Indian currency.
//  Consider 1$ as 70 rupees.
//
/////////////////////////////////////////////////////////////////////

#include <stdio.h>

int DollarToRupees(int iDollar)
{
    int iRupees = 0;

    iRupees = iDollar * 70;

    return iRupees;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter value in USD: ");
    scanf("%d", &iValue);

    iRet = DollarToRupees(iValue);

    printf("Value in INR is: %d\n", iRet);

    return 0;

}