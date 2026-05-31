/*
START
     Accept number from user 
     If number is 
STOP
*/

//Accept one number from user and print that number  of * on screen 


#include <stdio.h>
void Display(int iNo)
{
    if (iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;

}