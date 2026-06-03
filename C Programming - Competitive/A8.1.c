/////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Write a program which accept radius of circle from user and calculate its area.
//   Consider value of PI as 3.14. (Area = PI*Radius*Radius)
//
//////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

double CircleArea(float fRadius)
{
    float fArea = 0.0;
    float PI = 3.14;
    float Area = PI*fRadius*fRadius;

    return Area;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius of circle : \n");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is : %lf", dRet);

    return 0;
}