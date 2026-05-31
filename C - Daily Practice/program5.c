/*
algorithm

   start
        accept 1st number as no1
        accept 2nd number as no2
        perform addition of no1 and no2
        display the result
   stop
*/



#include<stdio.h>

int main()
{
    float i,j,k;

    printf("Enter first number: \n");
    scanf("%f",&i);
    
    printf("Enter second number: \n");
    scanf("%f",&j);

    k = i + j;

    printf("Addition is : %f\n",k);

    return 0;
}