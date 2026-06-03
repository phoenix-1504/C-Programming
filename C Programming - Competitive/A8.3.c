///////////////////////////////////////////////////////////////////////////////////
//
// Write a program which accept distance in kilometere and
// convert it into meter. (1 kilometere = 1000 Meter)
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int KMtoMeter(int iKM)
{
    int iMeter = 0;

    iMeter = iKM * 1000;

    return iMeter;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter distance in KM: ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in Meter is: %d\n", iRet);

    return 0;

}