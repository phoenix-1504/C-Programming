///////////////////////////////////////////////////////////////////////////////////
//
//  Write a program which accept width and width and height 
//  of rectangle from user and calculate its area. (Area = Width * Height)
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

double RectArea(float fWidth, float fHeight)
{
    float fArea = 0.0;
    float Area = fWidth * fHeight;

    return Area;
}

int main()
{
    float fValue1 = 0.0;
    float fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter width of rectangle : \n");
    scanf("%f", &fValue1);

    printf("Enter height of rectangle : \n");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of rectangle is : %f", dRet);

    return 0;
}