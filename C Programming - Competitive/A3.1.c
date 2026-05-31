/*

input : 7
output : 2  4  6  8  10  12  14

*/
#include<stdio.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }
   
    int i = 0;
    
    for(i = 1; i <= iNo; i++)
    {
        printf("%d ", i * 2);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);
    
    PrintEven(iValue);
    
    return 0;
}