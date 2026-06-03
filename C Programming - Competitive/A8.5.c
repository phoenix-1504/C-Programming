/////////////////////////////////////////////////////////////////
//
// Write a program which accept area in square feet and convert it into square meter.
// (1 Square Feet = 0.0929 Square Meter)
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>

double SqFeetToSqMeter(float fSqFeet)
{
    float fSqMeter = 0.0;
    fSqMeter = fSqFeet * 0.0929;
    return fSqMeter;
}   

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter area in square feet: ");
    scanf("%f", &fValue);

    dRet = SqFeetToSqMeter(fValue);

    printf("Area in square meter is: %lf\n", dRet);

    return 0;
}