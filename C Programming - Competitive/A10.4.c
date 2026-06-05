/*
input:5
output:0.464515
*/

#include<stdio.h>

double SFtoSMeter(int iNo)// function datatype should be equal to return value 
{
    double dsMeter=0;
    dsMeter=iNo*0.0929;

    return dsMeter;
}

int main()
{
    int iValue=0;
    double dRet=0.0;

    printf("Enter Square feet");
    scanf("%d",&iValue);

    dRet=SFtoSMeter(iValue);
    printf("Square feet in Square meter is%lf",dRet);
    return 0;
}