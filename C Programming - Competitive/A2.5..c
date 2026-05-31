#include<stdio.h>

# define TRUE 1
# define FALSE 0

typedef int BOOL;

BOOL CheckEven(int iNo)
{
    if(iNo % 2 == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter numebr: ");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);

    // display resut

    if(bRet == TRUE)
    {
        printf("The number is even",iValue);
    }
    else
    {
        printf("The number is odd.",iValue);
    }

    return 0;
}