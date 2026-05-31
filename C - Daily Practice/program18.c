#include <stdio.h>

int CalcuateTicketPrice( int iAge)
{
    if(iAge >= 0 && iAge <=5)
    {
        return 0;
    }

    else if(iAge >= 6 && iAge <=18)
    {
        return 600;
    }

    else if (iAge >= 19 && iAge <=50)
    {
        return 900;
    }

    else{
        return 400;
    }
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("PLease enter your age to calculate ticket price: ");
    scanf("%d", &iValue);

    iRet = CalcuateTicketPrice(iValue);
    printf("Your ticket price will be %d\n", iRet);

    return 0;

}