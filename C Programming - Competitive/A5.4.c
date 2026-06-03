////////////////////////////////////////////////////////////////
//
//  Write a program which accepts N numbers from user and print
//  all odd numbers upto N.
//
////////////////////////////////////////////////////////////////

#include <stdio.h>

void OddDisplay (int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            printf("%d ", iCnt);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number till you want to print : \n");
    scanf("%d", &iValue);

    OddDisplay(iValue);

    return 0;
}
////////////////////////////////////////////////////////////////////
//
//  Write a program which accepts N and print first 5 multiples of N on screen.
//
////////////////////////////////////////////////////////////////////
 #include <stdio.h>

 void MultipleDisplay(int iNo)
 {
    int iCnt = 0;

    for (iCnt = iNo; iCnt <= 5*iNo; iCnt += iNo)
    {
        printf("%d ", iCnt );
    }
 }
 int main ()
 {
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);

    return 0;
 }
////////////////////////////////////////////////////////////////
//
//  Write a program which accepts number from user and print 
//  that number of " $ and * " on screen.
// 
////////////////////////////////////////////////////////////////

#include <stdio.h>


void Pattern (int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$\t");
        printf("*\t");
    }
}
int main ()
{
    int iValue = 0;

    printf("Enter number of pattern you want to print : \n");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}
////////////////////////////////////////////////////////////////
//
//  Write a program which accepts number from user and print
//  number till that number on screen.
//
////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display (int iNo)
{

    int iCnt  = 0;

    for(iCnt =1; iCnt <=iNo; iCnt++)
    {
        printf("%d ", iCnt);
    }


}

int main()
{
    int iValue = 0;

    printf("Enter number till you want to print : \n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
////////////////////////////////////////////////////////////////
//
//  Write a program which accepts number from user and print
//  its number line on screen.
//
////////////////////////////////////////////////////////////////

#include <stdio.h>


void Display(int iNo)
{
    
    int iCnt = 0;

    for (iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d ", iCnt);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number till you want to print : \n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
