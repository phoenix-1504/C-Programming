/*
input: 10
output: -12.2222(10-32)*(5/9)
*/

#include<stdio.h>

double FhtoCs(float fTemp)
{
    
    float fC=0.0f;
    fC= (fTemp-32)*5/9;
    //brackets
    return fC;
}

int main()
{
    float fValue=0.0f;
    double dRet=0.0;

    printf("Enter temperature inFahrenheit:");
    scanf("%f",&fValue);

    dRet=FhtoCs(fValue);
    printf("Temperature in celsius %lf",dRet);
    return 0;
}