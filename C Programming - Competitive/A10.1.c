/*
input:5.3
output:88.2026
*/

#include<stdio.h>
double CircleArea(float fRadius)
{
    float fPI=0.0f;
    fPI=3.14f;

    double dArea=0.0;
    dArea=fPI*fRadius*fRadius;
    return dArea;
}

int main()
{
    float fValue=0.0f;
    double dRet=0.0;

    printf("Enter RAdius:");
    scanf("%f",&fValue);

    dRet= CircleArea(fValue);
    printf("Area of Circle is %lf",dRet);
    return 0;
}
