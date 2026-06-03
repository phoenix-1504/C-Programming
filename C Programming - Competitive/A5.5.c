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
