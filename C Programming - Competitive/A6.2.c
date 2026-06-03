/////////////////////////////////////////////////////////////////////////////////
//
// Accept a single digit number from user and print it in word.
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iDigit[] = {0,1,2,3,4,5,6,7,8,9};
    char *cDigit[] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};

    if (iNo >= 0 && iNo <= 9)
    {
        printf("%s\n", cDigit[iNo]);
    }
    else
    {
        printf("Invalid input! Please enter a single digit number.\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a single digit number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}