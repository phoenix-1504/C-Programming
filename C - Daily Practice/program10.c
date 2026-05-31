//////////////////////////////////////////////////////
//
// Include required header files
//
//////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////
//
// Function Name:   AddTwoNumbers
// Input:           float,float
// Output:          float
// DEscription:     performs addition of 2 floats
// Date:            08/05/2026
// Author:          Piyush Ramchandra Chaudhari
//
//////////////////////////////////////////////////////

float AddTwoNumbers(
                        float fno1,        // first input
                        float fno2         //second input
                   )
{
    float fAns = 0.0f;                    // vairiable to store result

    fAns = fno1 + fno2;                   // perform addition

    return fAns;
}

//////////////////////////////////////////////////////
//
// Application to perfom addition of two float values
//
//////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0f;                 //to store the first value
    float fValue2 = 0.0f;                 //to store the second value
    float fResult = 0.0f;                 //to store the result


    printf("Enter first number: \n");
    scanf("%f",&fValue1);
    
    printf("Enter second number: \n");
    scanf("%f",&fValue2);

    fResult = AddTwoNumbers(fValue1 , fValue2);

    printf("Addition is : %f\n",fResult);  

    return 0;
}

//////////////////////////////////////////////////////
//
// Input : 10.0  11.0
// Output: 21.0
//
//////////////////////////////////////////////////////