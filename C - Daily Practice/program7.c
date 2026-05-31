#include<stdio.h>
int main()
{
    float fValue1 = 0.0f;                //to store the first value
    float fValue2 = 0.0f;                //to store the second value
    float fResult = 0.0f;                //to store the result


    printf("Enter first number: \n");
    scanf("%f",&fValue1);
    
    printf("Enter second number: \n");
    scanf("%f",&fValue2);

    fResult = fValue1 + fValue2;

    printf("Addition is : %f\n",fResult);  // to perform addition

    return 0;
}