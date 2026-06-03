/////////////////////////////////////////////////////////////////
//
//  Write a program which accept 
//  temperature in Fahrenheit and convert it into Celsius. 
//  (1 Fahrenheit = (1.8 * Celsius) + 32)
//  
/////////////////////////////////////////////////////////////////

#include <stdio.h>

double FhtoCs(float fFaharenheit)
{
    float fCelsius = 0.0;
    fCelsius = (fFaharenheit - 32) / 1.8;
    return fCelsius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius is: %lf\n", dRet);

    return 0;
}